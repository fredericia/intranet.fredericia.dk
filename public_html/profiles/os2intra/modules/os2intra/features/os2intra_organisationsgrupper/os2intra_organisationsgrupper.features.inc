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
 * Implements hook_views_api().
 */
function os2intra_organisationsgrupper_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2intra_organisationsgrupper_image_default_styles() {
  $styles = array();

  // Exported image style: group_logo.
  $styles['group_logo'] = array(
    'label' => 'Group logo',
    'effects' => array(
      4 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 550,
          'height' => 200,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
      'title_label' => t('Navn'),
      'help' => '',
    ),
    'os2intra_referat' => array(
      'name' => t('Referat'),
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

/**
 * Implements hook_default_og_membership_type().
 */
function os2intra_organisationsgrupper_default_og_membership_type() {
  $items = array();
  $items['organisatorisk'] = entity_import('og_membership_type', '{
    "name" : "organisatorisk",
    "description" : "organisatorisk",
    "language" : ""
  }');
  return $items;
}
