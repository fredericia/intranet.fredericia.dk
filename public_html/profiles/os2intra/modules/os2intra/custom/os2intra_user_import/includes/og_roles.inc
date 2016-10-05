<?php
/**
 * Give department managers 'manager-role' to the departments children
 */
function os2intra_user_import_add_managers_to_departments($form, &$form_state) {
  $department = entity_metadata_wrapper('taxonomy_term', $form['#term']['tid']);

  // Get department children
  $department_children = taxonomy_get_tree(16, $department->tid->value());

  // Get department managers
  foreach ($department->field_os2intra_manager_id->getIterator() as $user) {
    $manager_uids[] = $user->uid->value();
  }

  // Add user to their primary department and give them the 'manager' role
  if (!empty($manager_uids)) {
    foreach ($manager_uids as $manager_uid) {
      if (!in_array($manager_uid, $department->field_os2intra_manager_id->raw())) {
        $department->field_os2intra_manager_id[] = $manager_uid;
      }
      $account = user_load($manager_uid);
      // Add user to their primary department and give them the 'manager' role
      $values = array(
        'entity' => $account,
        'field_name' => 'og_org_ref',
      );
      if (!empty($department->field_os2intra_department_id->value())) {
        $department_nid = _os2intra_user_import_get_department_nid($department->field_os2intra_department_id->value());
        if ($department_nid) {
          og_group('node', $department_nid, $values);
          og_role_grant('node', $department_nid, $account->uid, variable_get('os2intra_user_import_og_role_id_manager', 15));
        }
      }
    }
  }

  $department->save();

  // Do the same thing for children departments
  foreach ($department_children as $child) {
    $child = entity_metadata_wrapper('taxonomy_term', $child->tid);

    if (!empty($manager_uids)) {
      foreach ($manager_uids as $manager_uid) {
        if (!in_array($manager_uid, $child->field_os2intra_manager_id->raw())) {
          $child->field_os2intra_manager_id[] = $manager_uid;
        }
        $account = user_load($manager_uid);
        // Add user to their primary department and give them the 'manager' role
        $values = array(
          'entity' => $account,
          'field_name' => 'og_org_ref',
        );
        if (!empty($child->field_os2intra_department_id->value())) {
          $department_nid = _os2intra_user_import_get_department_nid($child->field_os2intra_department_id->value());
          if ($department_nid) {
            og_group('node', $department_nid, $values);
            og_role_grant('node', $department_nid, $account->uid, variable_get('os2intra_user_import_og_role_id_manager', 15));
          }
        }
      }
    }

    $child->save();
  }
}
