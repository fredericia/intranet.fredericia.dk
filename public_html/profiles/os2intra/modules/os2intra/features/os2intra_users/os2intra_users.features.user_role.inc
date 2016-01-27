<?php
/**
 * @file
 * os2intra_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function os2intra_users_user_default_roles() {
  $roles = array();

  // Exported role: Intranet-redaktør.
  $roles['Intranet-redaktør'] = array(
    'name' => 'Intranet-redaktør',
    'weight' => 4,
  );

  return $roles;
}
