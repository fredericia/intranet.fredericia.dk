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
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function os2intra_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: 4_col_image_-_520x220.
  $styles['4_col_image_-_520x220'] = array(
    'label' => 'Medium billede',
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 520,
          'height' => 220,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => '#FFF',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 520,
          'height' => 220,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: normal.
  $styles['normal'] = array(
    'label' => 'Normal billede',
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1068,
          'height' => 600,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => '#fff',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1068,
          'height' => 600,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: profile_image_default.
  $styles['profile_image_default'] = array(
    'label' => 'Profile image default',
    'effects' => array(
      1 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 58,
          'height' => 58,
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

  // Exported image style: spotboks.
  $styles['spotboks'] = array(
    'label' => 'Spotboks',
    'effects' => array(
      5 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 246,
          'height' => 140,
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
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 246,
          'height' => 140,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: taxonomy_teaser.
  $styles['taxonomy_teaser'] = array(
    'label' => 'Taxonomy teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 90,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_image.
  $styles['teaser_image'] = array(
    'label' => 'Teaser image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_spotbox.
  $styles['teaser_spotbox'] = array(
    'label' => 'Teaser - spotbox',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 176,
          'height' => 100,
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
function os2intra_content_types_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Begivenhed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'it_vejledning' => array(
      'name' => t('IT-vejledning'),
      'base' => 'node_content',
      'description' => t('Skabelon til brug af vedledninger'),
      'has_title' => '1',
      'title_label' => t('Titel'),
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
    'os2intra_message_notification' => array(
      'name' => t('Intranet Vigtig besked'),
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
      'name' => t('Lokal side'),
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
