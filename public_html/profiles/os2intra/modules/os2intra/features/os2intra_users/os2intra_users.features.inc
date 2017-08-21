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
      2 => array(
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
            'fallback' => 1,
          ),
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 520,
          'height' => 520,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: profile_image_small.
  $styles['profile_image_small'] = array(
    'label' => 'Profile image - small',
    'effects' => array(
      5 => array(
        'name' => 'epsacrop_crop_reuse',
        'data' => array(
          'jcrop_reuse' => 'profilbillede',
        ),
        'weight' => -10,
      ),
      4 => array(
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
