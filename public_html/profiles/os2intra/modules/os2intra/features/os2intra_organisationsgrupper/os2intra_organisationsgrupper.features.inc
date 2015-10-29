<?php
/**
 * @file
 * os2intra_organisationsgrupper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_organisationsgrupper_ctools_plugin_api($module = NULL, $api = NULL) {
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
function os2intra_organisationsgrupper_node_info() {
  $items = array(
    'os2intra_group' => array(
      'name' => t('Gruppe'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'os2intra_org_group_unit' => array(
      'name' => t('Afdeling'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Indlæg'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
