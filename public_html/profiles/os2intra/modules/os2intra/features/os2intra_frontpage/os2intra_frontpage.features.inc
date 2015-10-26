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

  $homeboxes['os2intra_homebox_front'] = array (
    'regions' => 2,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
      0 => '#ffffff',
      1 => '#ffffff',
      2 => '#ffffff',
      3 => '#ffffff',
      4 => '#ffffff',
      5 => '#ffffff',
    ),
    'blocks' => 
    array (
      'homebox_custom' => 
      array (
        'module' => 'homebox',
        'delta' => 'custom',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Mine notater',
        'weight' => -34,
      ),
      'views_os2intra_users_content-block' => 
      array (
        'module' => 'views',
        'delta' => 'os2intra_users_content-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => 'Indlæg du har oprettet',
        'weight' => -28,
      ),
    ),
    'widths' => 
    array (
      1 => 50,
      2 => 50,
    ),
    'title' => 'Din forside',
    'path' => 'front',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );


  return $homeboxes;
}
