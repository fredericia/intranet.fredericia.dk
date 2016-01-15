<?php
/**
 * @file
 * os2intra_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2intra_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer realname'.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(),
    'module' => 'realname',
  );

  return $permissions;
}
