<?php
/**
 * @file
 * os2intra_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2intra_users_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2intra_users_image_default_styles() {
  $styles = array();

  // Exported image style: profilbillede.
  $styles['profilbillede'] = array(
    'label' => 'Profilbillede',
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 520,
          'height' => 520,
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

  // Exported image style: profile_image_small.
  $styles['profile_image_small'] = array(
    'label' => 'Profile image - small',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 58,
          'height' => 58,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
