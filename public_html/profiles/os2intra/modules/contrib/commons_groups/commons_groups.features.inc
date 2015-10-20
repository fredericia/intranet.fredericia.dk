<?php
/**
 * @file
 * commons_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commons_groups_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function commons_groups_image_default_styles() {
  $styles = array();

  // Exported image style: 35x35.
  $styles['35x35'] = array(
    'label' => '35x35',
    'name' => '35x35',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 35,
          'height' => 35,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 50x50.
  $styles['50x50'] = array(
    'name' => '50x50',
    'label' => '50x50',
    'effects' => array(
      9 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
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
function commons_groups_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Gruppe'),
      'base' => 'node_content',
      'description' => t('Grupper er til gruppering af indhold og personer'),
      'has_title' => '1',
      'title_label' => t('Gruppe navn'),
      'help' => '',
    ),
  );
  return $items;
}
