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
 * Implements hook_flag_default_flags().
 */
function os2intra_frontpage_flag_default_flags() {
  $flags = array();
  // Exported flag: "Info til alle".
  $flags['os2intra_flag_info_til_alle'] = array(
    'entity_type' => 'node',
    'title' => 'Fællesnyt',
    'global' => 0,
    'types' => array(
      0 => 'event',
      1 => 'post',
      2 => 'wiki',
    ),
    'flag_short' => 'Vis i Fællesnyt',
    'flag_long' => '',
    'flag_message' => 'Bliver nu vist i Fællesnyt',
    'unflag_short' => 'Fjern fra Fællesnyt',
    'unflag_long' => '',
    'unflag_message' => 'Er nu fjernet fra Fællesnyt',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'list' => 0,
      'includeable' => 0,
      'print' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'os2intra_frontpage',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

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
        'weight' => -27,
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
        'weight' => -27,
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
        'weight' => -26,
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
        'weight' => -26,
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
        'weight' => -25,
      ),
      'fb_likebox_0' => array(
        'module' => 'fb_likebox',
        'delta' => 0,
        'region' => 2,
        'movable' => 1,
        'status' => 0,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -24,
      ),
      'homebox_custom' => array(
        'module' => 'homebox',
        'delta' => 'custom',
        'region' => 2,
        'movable' => 1,
        'status' => 0,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -23,
      ),
      'views_info_til_alle-block' => array(
        'module' => 'views',
        'delta' => 'info_til_alle-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -28,
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
