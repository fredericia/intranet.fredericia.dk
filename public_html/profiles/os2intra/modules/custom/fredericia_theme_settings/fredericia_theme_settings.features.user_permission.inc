<?php
/**
 * @file
 * fredericia_theme_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fredericia_theme_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer select2'.
  $permissions['administer select2'] = array(
    'name' => 'administer select2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'select2',
  );

  return $permissions;
}
