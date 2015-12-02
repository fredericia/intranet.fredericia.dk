<?php
/**
 * @file
 * os2intra_frontpage.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function os2intra_frontpage_user_default_roles() {
  $roles = array();

  // Exported role: Koncernyheder.
  $roles['Koncernyheder'] = array(
    'name' => 'Koncernyheder',
    'weight' => 6,
  );

  return $roles;
}
