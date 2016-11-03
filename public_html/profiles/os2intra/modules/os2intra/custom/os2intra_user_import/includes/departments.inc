<?php
/**
 * Create department terms
 *
 * @param
 *  array of users with organisations
 */
function os2intra_user_import_groups($users) {
  // Array holding created terms. For email use later.
  $created_terms = array();
  $line =3;
  os2intra_user_import_save_log('', 'Import organisation');

  $vocab = taxonomy_vocabulary_machine_name_load('os2intra_organisation_tax');
  $tree = taxonomy_get_tree($vocab->vid);

  // find first term with no parents
  // used as default parent tid later

  if (!$tree) {
     os2intra_user_import_save_log('', 'No default parent - please create one parent in os2intra organisation');
     die(); 
  }
  foreach ($tree as $term) {
    if ($term->parents[0] == 0) {
      $default_parent_tid = $term->tid;
      break;
    }
  }

  foreach ($users as $user) {
    // variable is the same as field_os2intra_department_id on a Taxonomy
    // In the below example the value of Department should be "889020"
    $group = $user['department'];
    error_log(print_r($user,true));
    /* A typical user array looks like this
	Array
	(
	    [ad_id] => pa632
	    [first_name] => Pernille Storm Abildtrup
	    [termination_date] => 2114377200
	    [department] => 889020
	    [centre] => 53919
	    [job_description] => Socialrådgiver
	    [department_name] => Ungdomsrådgivningen
	    [department_shortname] => UNGERADG
	    [email] => pernille.abildtrup@fredericia.dk
	    [last_name] => Wraa
	    [employee_id] => 64686
	    [phone] => 
	    [birthdate] => 40887
	    [mobile] => 25341542
	)

    */
    // From the example above the parent id should be the "centre" eg. 53919. We set that later.
    $parent_tid = $default_parent_tid;
    error_log('Default_parent: ' . $parent_tid);
    // Check if term already exists
    $result = os2intra_user_import_query_term_by_department($group);
    #error_log(print_r($result,TRUE));

    // Term already exists
    if (!empty($result)) {
      // Rename group term if needed
      $term = taxonomy_term_load(key($result['taxonomy_term']));
error_log(print_r($term,TRUE));
      $term->name = $user['department_name'];
      os2intra_user_import_create_department($term->tid, $user['department'], $user['department_name']);
      // Search for parent tid for department
      if($user['centre']) {
        $centre = $user['centre'];
        $result_parent = os2intra_user_import_query_term_by_department($centre);
        # error_log(print_r($result_parent,TRUE));
        if (!empty($result_parent)) {
          $parent_term = taxonomy_term_load(key($result_parent['taxonomy_term']));
          $parent_tid = $parent_term->tid;
          if (isset($term->parent)) {
	  } else {
	    $term->parent = array($parent_tid);
	  }
        } else {
        }
      } else {
	error_log('centre: ' . $centre);
      }
      os2intra_user_import_save_log('', 'Group / Department exists: "' . $user['department_name'] . '" import line no. ' . $line . 'dep: ' . $term->tid . 'parent: ' .$parent_tid);
    #  error_log(print_r($term,TRUE));
      taxonomy_term_save($term);
    }
    else {
      // Create taxonomy terms
      os2intra_user_import_save_log('', 'Group / Department DOES NOT exist - creating: "' . $user['department_name'] . '" line no. ' . $line);

      // Search for parent tid for department
      
      $result = os2intra_user_import_query_term_by_department($user['centre']);
      
      if (!empty($result)) {
        $parent_term = taxonomy_term_load(key($result['taxonomy_term']));
        $parent_tid = $parent_term->tid;
      } 
      else {
	$parent_tid = $default_parent_tid;
      } 
      $term = new stdClass();
      $term->name = $user['department_name'];
      $term->parent = $parent_tid;
      $term->field_os2intra_department_id[LANGUAGE_NONE][0]['value'] = $group;
      $term->field_os2intra_shortname[LANGUAGE_NONE][0]['value'] = $user['department_shortname'];
      $term->vid = $vocab->vid;
#      error_log(print_r($term,TRUE));
      error_log('parent ' . print_r($term->parent,true) . ' other parent: '. $parent_tid);
      taxonomy_term_save($term);
      $created_terms[] = $term;

      os2intra_user_import_create_department($term->tid, $user['department'], $user['department_name']);
    }
    $line++;
  }
  os2intra_user_import_save_log('', 'Finished importing groups');

  // Send email that new groups has been created
  if (count($created_terms > 0)) {
    _os2intra_user_import_send_email($created_terms);
  }
}

/**
 * Create department nodes
 */
function os2intra_user_import_create_department($tid, $department, $department_name) {

  // Check if department node already exists.
  $nid = _os2intra_user_import_get_department_nid($department);
  if ($nid) {
    // Rename group node name if needed
    $nid = _os2intra_user_import_get_department_nid($department);
    $node = node_load($nid);
    $node->title = $department_name;
    node_save($node);
    return;
  }

  // Find term title
  $term = taxonomy_term_load($tid);
  $name = $term->name;

  // Create group nodes
  $node = new stdClass();

  // Title and type
  $node->title = $name;
  $node->type = 'os2intra_org_group_unit';

  // Generic node stuff
  node_object_prepare($node);

  $node->language = 'da';
  $node->uid = 1;
  $node->status = 1;

  // For some reason, we need to save the node and load it again, before we can assign values to fields
  $node = node_submit($node);
  node_save($node);

  // Set organization term
  $node->field_os2intra_organisation[LANGUAGE_NONE][]['target_id'] = $tid;

  // Save department id on node
  if (field_info_instance('taxonomy_term', 'field_os2intra_department_id', 'os2intra_org_group_unit')) {
    $node->field_os2intra_department_id[LANGUAGE_NONE][0]['value'] = $department;
  }

  // Group type "Organisation"
  // Todo: make more generic
  if (field_info_instance('node', 'field_os2intra_grouptype', 'os2intra_org_group_unit')) {
    $node->field_os2intra_grouptype[LANGUAGE_NONE][0]['tid'] = 6;
  }

  // Closed group, require invitation
  if (field_info_instance('node', 'field_og_subscribe_settings', 'os2intra_org_group_unit')) {
    $node->field_og_subscribe_settings[LANGUAGE_NONE][0]['value'] = 'invitation';
  }

  $node = node_submit($node);
  node_save($node);
}

/**
 * Add user to parent departments
 */
function os2intra_user_import_add_user_to_parent_departments($account) {
  $og_department_node = node_load(field_get_items('user', $account, 'og_user_node2')[0]['target_id']);
  if (empty($og_department_node)) {
    return;
  }
  $organisation_tid = field_get_items('node', $og_department_node, 'field_os2intra_organisation')[0]['target_id'];

  // Add user to their primary department and give them the 'medarbejder' role
  $values = array(
    'entity' => $account,
    'field_name' => 'og_org_ref',
  );
  og_group('node', $og_department_node->nid, $values);
  og_role_grant('node', $og_department_node->nid, $account->uid, variable_get('os2intra_user_import_og_role_id_primary', 16));

  // Add user to all parent departments and give 'organisatorisk' role on them.
  $parent_terms = taxonomy_get_parents_all($organisation_tid);

  foreach ($parent_terms as $parent_term) {
    $parent_tids[] = $parent_term->tid;
  }

  // Find the node ID for each department in parent terms
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node');
  $query->entityCondition('bundle', 'os2intra_org_group_unit');
  $query->fieldCondition('field_os2intra_organisation', 'target_id', $parent_tids, 'IN');
  $results = $query->execute();

  if (isset($results['node'])) {
    foreach ($results['node'] as $result) {
      $og_group_node_ids[] = $result->nid;
    }

    $values = array(
      'entity' => $account,
      'field_name' => 'og_org_ref',
    );

    foreach ($og_group_node_ids as $nid) {
      // Add the user to the group and set role.
      og_group('node', $nid, $values);
      og_role_grant('node', $nid, $account->uid, variable_get('os2intra_user_import_og_role_id_parent', 14));
    }
  }
}
