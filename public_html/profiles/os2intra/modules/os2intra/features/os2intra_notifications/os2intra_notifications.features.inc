<?php
/**
 * @file
 * os2intra_notifications.features.inc
 */

/**
 * Implements hook_views_api().
 */
function os2intra_notifications_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function os2intra_notifications_flag_default_flags() {
  $flags = array();
  // Exported flag: "OS2intra Flag Node Follow".
  $flags['os2intra_flag_node_follow'] = array(
    'entity_type' => 'node',
    'title' => 'OS2intra Flag Node Follow',
    'global' => 0,
    'types' => array(
      0 => 'event',
      1 => 'it_vejledning',
      2 => 'post',
      3 => 'os2intra_base_page',
      4 => 'wiki',
    ),
    'flag_short' => 'Følg',
    'flag_long' => 'Følg dette',
    'flag_message' => '',
    'unflag_short' => 'Følg ikke',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'list' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'os2intra_notifications',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "OS2intra Flag Node Like".
  $flags['os2intra_flag_node_like'] = array(
    'entity_type' => 'node',
    'title' => 'OS2intra Flag Node Like',
    'global' => 0,
    'types' => array(
      0 => 'os2intra_org_group_unit',
      1 => 'event',
      2 => 'os2intra_canteen_menu',
      3 => 'os2intra_group',
      4 => 'it_vejledning',
      5 => 'post',
      6 => 'os2intra_message_notification',
      7 => 'os2intra_base_page',
      8 => 'webform',
      9 => 'wiki',
    ),
    'flag_short' => 'Synes godt om',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Fjern Synes godt om',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
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
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'os2intra_notifications',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "OS2intra Flag Node as Old".
  $flags['os2intra_flag_node_old'] = array(
    'entity_type' => 'node',
    'title' => 'OS2intra Flag Node as Old',
    'global' => 0,
    'types' => array(
      0 => 'event',
      1 => 'it_vejledning',
      2 => 'post',
      3 => 'os2intra_base_page',
      4 => 'wiki',
    ),
    'flag_short' => 'Marker siden som forældet',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Fjern markering for forældet side',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'list' => 0,
      'includeable' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'os2intra_notifications',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Tilmeld gruppe".
  $flags['tilmeld_gruppe'] = array(
    'entity_type' => 'og_membership',
    'title' => 'Tilmeld gruppe',
    'global' => 0,
    'types' => array(
      0 => 'og_membership_type_default',
    ),
    'flag_short' => 'Tilmeld gruppe',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Afmeld gruppe',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'os2intra_notifications',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
