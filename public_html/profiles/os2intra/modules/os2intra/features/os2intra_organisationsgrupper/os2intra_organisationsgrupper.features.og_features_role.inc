<?php
/**
 * @file
 * os2intra_organisationsgrupper.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function os2intra_organisationsgrupper_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:os2intra_org_group_unit:superuser'.
  $roles['node:os2intra_org_group_unit:superuser'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'os2intra_org_group_unit',
    'name' => 'superuser',
  );

  return $roles;
}
