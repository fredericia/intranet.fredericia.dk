<?php
/**
 * @file
 * trash_can.features.inc
 */

/**
 * Implements hook_views_api().
 */
function trash_can_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function trash_can_flag_default_flags() {
  $flags = array();
  // Exported flag: "Papirkurv".
  $flags['papirkurv'] = array(
    'entity_type' => 'node',
    'title' => 'Papirkurv',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Flyt til papirkurv',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Gendan fra papirkurv',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'list' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => 'own',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Er du sikker på du vil flytte [node:title] til papirkurven?',
    'unflag_confirmation' => 'Er du sikker på du til gendanne[node:title]?',
    'module' => 'trash_can',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
