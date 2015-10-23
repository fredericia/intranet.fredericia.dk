<?php
/**
 * @file
 * os2intra_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function os2intra_content_types_node_info() {
  $items = array(
    'it_vejledning' => array(
      'name' => t('IT-vejledning'),
      'base' => 'node_content',
      'description' => t('Skabelon til brug af vedledninger'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'os2intra_base_page' => array(
      'name' => t('Intranet side'),
      'base' => 'node_content',
      'description' => t('Almindelige sider på intranettet'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'os2intra_canteen_menu' => array(
      'name' => t('Dagens ret/menu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'os2web_base_selfservice_link' => array(
      'name' => t('Selvbetjeningslinks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'spotbox' => array(
      'name' => t('spotbox'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Emne'),
      'help' => '',
    ),
    'wiki' => array(
      'name' => t('Wiki'),
      'base' => 'node_content',
      'description' => t('Indhold hvor flere kan redigere indholdet.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}