<?php
/**
 * @file
 * os2intra_frontpage.features.inc
 */

/**
 * Implements hook_views_api().
 */
function os2intra_frontpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_homebox().
 */
function os2intra_frontpage_homebox() {
  $homeboxes = array();

  $homeboxes['intra'] = array(
    'regions' => 2,
    'cache' => 0,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'views_os2intra_forside_views-block_1' => array(
        'module' => 'views',
        'delta' => 'os2intra_forside_views-block_1',
        'region' => 2,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -23,
      ),
      'views_os2intra_forside_views-block' => array(
        'module' => 'views',
        'delta' => 'os2intra_forside_views-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -22,
      ),
      'homebox_custom' => array(
        'module' => 'homebox',
        'delta' => 'custom',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -20,
      ),
      'views_os2intra_vigtige_beskeder-block' => array(
        'module' => 'views',
        'delta' => 'os2intra_vigtige_beskeder-block',
        'region' => 1,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -15,
      ),
      'views_05c9b062e59c366c742de6b83c6f9d33' => array(
        'module' => 'views',
        'delta' => '05c9b062e59c366c742de6b83c6f9d33',
        'region' => 1,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -14,
      ),
      'views_os2intra_markedspladsen-block' => array(
        'module' => 'views',
        'delta' => 'os2intra_markedspladsen-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -21,
      ),
    ),
    'widths' => array(),
    'title' => 'intranet',
    'path' => 'intra',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'authenticated user',
    ),
  );


  return $homeboxes;
}
