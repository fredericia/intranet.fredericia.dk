<?php
/**
 * @file
 * os2intra_message_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_message_notify_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2intra_message_notify_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2intra_message_notify_node_info() {
  $items = array(
    'os2intra_message_notification' => array(
      'name' => t('Intranet Vigtig besked'),
      'base' => 'node_content',
      'description' => t('Beskeder på intranettet der vises i toppen af forsiden og som Pop-up.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
