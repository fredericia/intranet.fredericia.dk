<?php
/**
 * @file
 * os2intra_users.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os2intra_users_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_real-name:admin/config/people/realname.
  $menu_links['management_real-name:admin/config/people/realname'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/realname',
    'router_path' => 'admin/config/people/realname',
    'link_title' => 'Real name',
    'options' => array(
      'attributes' => array(
        'title' => 'Use tokens to configure how user names are displayed.',
      ),
      'identifier' => 'management_real-name:admin/config/people/realname',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_people:admin/config/people',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Real name');

  return $menu_links;
}
