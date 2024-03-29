<?php

/**
 * @file
 * os2intra_users.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function os2intra_users_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'Menuen <em>Management</em> indeholder links til administrative opgaver.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('Menuen <em>Management</em> indeholder links til administrative opgaver.');

  return $menus;
}
