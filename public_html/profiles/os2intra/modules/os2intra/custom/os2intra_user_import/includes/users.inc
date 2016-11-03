<?php
/**
 * Disable users according to termination date
 */
function os2intra_user_import_disable_users() {
  os2intra_user_import_save_log('', 'Start disabling users');
  $timestamp = strtotime('midnight tomorrow');

  // Query all users with termination date today.
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'user');
  $query->fieldCondition('field_os2intra_termination_date', 'value', $timestamp, '<');
  $query->fieldCondition('field_os2intra_termination_date', 'value', 1, '>');
  $query->propertyCondition('status', 1);
  $result = reset($query->execute());

  // Array holding new status for user
  $disable_array = array('status' => 0);

  // Disable users
  if (is_array($result)) {
    foreach ($result as $uid => $item) {
      os2intra_user_import_save_log('', 'Disable uid: ' . $uid);
      user_save(user_load($uid), $disable_array);
    }
  }
  os2intra_user_import_save_log('', 'User disabling finished');
}

/**
 * Check if the user is already created in the system
 */
function os2intra_user_import_check_users(&$users) {
  $update_users = array();

  foreach ($users as $key => $user) {
    $ad_id = $user['ad_id'];

    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'user');
    $query->propertyCondition('name', $ad_id);
    $result = $query->execute();

    // Unset users already created
    if ($result) {
      $update_users[key(array_shift($result))] = $user;

      unset($users[$key]);
    }

    if (!$user['first_name'] || !$user['employee_id']) {
      unset($users[$key]);
    }
  }

  return $update_users;
}

/**
 * Create/update user
 * If a uid is sent the user will be updated, otherwise a new user will be created.
 * The user has multiple group connections, some are from the import file, and some
 * are set manually in the system. In order to preserve the manually set groups we
 * save the imported values in field_os2intra_import_groups, we then diff this
 * field with og_user_node to find out what groups are set manually (the diff).
 * These are then readded to the users groups, along with the organisational groups
 * from the import file.
 * Group id 2 (Odsherred kommune) is a different story, all users should be
 * members of this group, and therefore we add it manually to all.
 *
 * @author Thomas Thune Hansen <tth@bellcom.dk>
 *
 * @param
 *  user array from file parser
 *
 */
function os2intra_user_import_save_user($user, $uid = '') {
  // Load users account, if any
  $account = user_load($uid);

  $keep_groups = array();
  $no_import_groups = FALSE;

  // Load users values from account
  if (is_object($account)) {
    $og_user_node = array();
    $import_groups = array();
    // Get a list of current group nids
    if ($og_user_node_field = field_get_items('user', $account, 'og_user_node2')) { // gruppemedlemskab
      foreach ($og_user_node_field as $key => $field) {
        $og_user_node[$field['target_id']] = $field['target_id'];
      }
    }
    // And organisation and centre nid from last import
    if ($import_group_field = field_get_items('user', $account, 'og_org_ref')) { // afdeling
      foreach ($import_group_field as $key => $field) {
        $import_groups[$field['target_id']] = $field['target_id'];
      }
    }
    // The diff will be the groups the user should keep.
    if (!empty($import_groups)) {
      $keep_groups = array_diff($og_user_node, $import_groups);
      // Group id 2 is unset as we add this to all users later.
      unset($keep_groups[2]);
    }
    else {
      // Keep all groups, if there are no import groups
      $keep_groups = $og_user_node;
      $no_import_groups = TRUE;
    }
  }

  // Get node id for group
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node');
  $query->propertyCondition('title', $user['department']);
  $result = $query->execute();

  if (!empty($result['node'])) {

    $new_group_nid = key(array_shift($result));

    // Attach new group.
    // We rebuild the association completely so we start with an empty
    // array.
    $user_groups = array();
    if (variable_get('os2intra_user_default_groups')) {
      $def_groups = explode(',', variable_get('os2intra_user_default_groups'));
      foreach ($def_groups as $def_group) {
        $user_groups[LANGUAGE_NONE][]['target_id'] = $def_group;
      }
    }
    $user_groups[LANGUAGE_NONE][]['target_id'] = $new_group_nid;

    // In field_os2intra_import_groups we store the group ids
    // imported, for both organisation unit and center.
    // On the next import, we need this to find out what groups the
    // user has been added to, that are not organisational.
    $import_groups = array();
    $import_groups[LANGUAGE_NONE][]['target_id'] = $new_group_nid;
  }

  // Get node id for centre
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'taxonomy_term');
  $query->fieldCondition('field_os2intra_department_id', 'value', $user['centre'], '=');
  $result = $query->execute();


  if (!empty($result['taxonomy_term'])) {
    $centre_nid = key(array_shift($result));
    $user_groups[LANGUAGE_NONE][]['target_id'] = $centre_nid;

    // Don't do duplicates
    if ($new_group_nid !== $centre_nid) {
      $import_groups[LANGUAGE_NONE][]['target_id'] = $centre_nid;
    }
  }

  // If there are no import groups, we add the groups, the user had at import.
  // import groups will be set during this import, so next time, this should
  // not be an issue.
  // This is only done in order to migrate user groups, from users before the
  // import groups field was added.
  if ($no_import_groups) {
    $user_groups = array();
  }

  // Add back the groups we want to keep.
  foreach ($keep_groups as $group_id) {
    $user_groups[LANGUAGE_NONE][]['target_id'] = $group_id;
  }

  // @todo: check that timestamp is not today
  $termination_date_timestamp = $user['termination_date'];
  // Check if the timestamp supplied from the import is larger than
  // what unix timestamps can be.
  if ($termination_date_timestamp > 2147483647) {
    $termination_date_timestamp = 1;
  }

  // Create Opus Roles and set them on user
  $keep_opus_roles = array();
  $opus_role_tids = array();
  $opus_role_vocabulary = taxonomy_vocabulary_machine_name_load('os2intra_bi_opus_roles');
  $opus_roles = array();

  if($user['opus_roles']) {
  if ($uid) {
    foreach ($account->os2intra_users_opus_roles as $os2intra_users_opus_role) {
      foreach ($os2intra_users_opus_role as $key => $value) {
        $keep_opus_roles[] = $value;
      }
    }
  }

  foreach (explode(',', $user['opus_roles']) as $opus_role) {
    $opus_roles[] = $opus_role;
    $query = new EntityFieldQuery;
    $result = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('name', $opus_role)
      ->propertyCondition('vid', $opus_role_vocabulary->vid)
      ->execute();

    foreach ($result['taxonomy_term'] as $term) {
      $opus_role_tids[] = $term->tid;
    }
  }

  $opus_role_tids = array_diff($keep_opus_roles, $opus_role_tids);

  os2intra_user_import_create_opus_roles($opus_roles);
  }

  // User title tid
  $title_tid = os2intra_user_import_user_title($user['job_description']);

  // Get user membership to department
  $department_nid = _os2intra_user_import_get_department_nid($user['department']);

  // Populate fields
  $fields = array(

    // Set employee_id
    'field_os2intra_employee_id'      => array(LANGUAGE_NONE => array(0 => array('value' => $user['employee_id']))),

    // First Name
    'field_name_first'                => array(LANGUAGE_NONE => array(0 => array('value' => $user['first_name']))),

    // Last Name
    'field_name_last'                 => array(LANGUAGE_NONE => array(0 => array('value' => $user['last_name']))),

    // Phone
    'field_os2intra_phone'            => array(LANGUAGE_NONE => array(0 => array('value' => $user['phone']))),

    // Mobile
    'field_os2intra_mobile'            => array(LANGUAGE_NONE => array(0 => array('value' => $user['mobile']))),

    // Set birthdate
    'field_os2intra_birthdate'        => array(LANGUAGE_NONE => array(0 => array('value' => $user['birthdate']))),

    // Set department membership
    'og_user_node2'                   => array(LANGUAGE_NONE => array(0 => array('target_id' => array($department_nid)))),

    // Activate user
    'status'                          => ($account->uid != 0) ? $account->status : 1,

    'mail'                            => $user['email'],

    'init'                            => $user['email'],

    'timezone'                        => 'Europe/Copenhagen',
  );

  // Set Opus Roles
  $fields['os2intra_users_opus_roles'][LANGUAGE_NONE] = array();

  foreach ($opus_role_tids as $opus_role_tid) {
    $fields['os2intra_users_opus_roles'][LANGUAGE_NONE][]['tid'] = $opus_role_tid;
  }

  // For some reason, the first zero is chopped somewhere. Let's add it.
  if (strlen($user['birthdate']) < 6) {
    $fields['field_os2intra_birthdate'] = array(LANGUAGE_NONE => array(0 => array('value' => '0' . $user['birthdate'])));
  }

  // Job description
  if ($title_tid) {
    $fields['field_os2intra_user_titles'] = array(LANGUAGE_NONE => array(0 => array('target_id' => $title_tid)));
  }

  // Termination date
  if ($termination_date_timestamp) {
    $fields['field_os2intra_termination_date'] = array(LANGUAGE_NONE => array(0 => array('value' => $termination_date_timestamp)));
  }

  // Handle whether we're updating or creating a new user
  // if we're updating we don't generate username and sets password
  if (!is_numeric($uid)) {
    $password = user_password(8);

    // Generate username
    $fields['name'] = $user['ad_id'];
    $fields['pass'] = $password;
  }

  // Save user
  $account = user_save($account, $fields);

  // Remove all department memberships
  $gid_types = og_get_groups_by_user($account);
  foreach ($gid_types as $gid_type) {
    foreach ($gid_type as $gid) {
      og_role_revoke('node', $gid, $account->uid, variable_get('os2intra_user_import_og_role_id_primary', 16));
    }
  }

  // Set department membership and role
  $values = array(
    'entity' => $account,
    'field_name' => 'og_user_node2',
  );
  og_group('node', $department_nid, $values);
  og_role_grant('node', $department_nid, $account->uid, variable_get('os2intra_user_import_og_role_id_primary', 16));

  // Create authmap for user
  $authmap = array(
    'authname_simplesamlphp_auth' => $user['ad_id'] . variable_get('os2intra_user_import_authmap_name_suffix'),
  );

  if (!user_get_authmaps($authmap)) {
    user_set_authmaps($account, $authmap);
  }

  // Add users to parent departments
  os2intra_user_import_add_user_to_parent_departments($account);

  // Write log entry
  if ($uid) {
    os2intra_user_import_save_log($user['employee_id'], 'update user: ' . $user['employee_id'] . ' ' . $user['first_name'] . ' ' . $user['last_name'] . 'status: ' . $user['status']);
  }
  else {
    os2intra_user_import_save_log($user['employee_id'], 'create user: ' . $user['first_name'] . 'status: ' . $user['status']);
  }
}
