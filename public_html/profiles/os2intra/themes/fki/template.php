<?php

/**
 * Implements theme_preprocess_html().
 */
function fki_preprocess_html(&$variables) {
  $theme_path = path_to_theme();

  // Add conditional stylesheets for IE9 and lower.
  drupal_add_css($theme_path . '/dist/css/stylesheet.css', array(
    'group'      => CSS_THEME,
  ));
  drupal_add_css($theme_path . '/dist/css/stylesheet-ie9-1.css', array(
    'group'      => CSS_THEME,
    'browsers'   => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));
  drupal_add_css($theme_path . '/dist/css/stylesheet-ie9-2.css', array(
    'group'      => CSS_THEME,
    'browsers'   => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));
  drupal_add_js($theme_path . '/dist/js/modernizr.js', array(
    'group'      => JS_LIBRARY,
  ));
  drupal_add_js($theme_path . '/dist/js/app.js', array(
    'group'      => JS_THEME,
  ));
  drupal_add_js($theme_path . '/dist/js/ie9.js', array(
    'group'      => JS_THEME,
    'browsers'   => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));

  // Add out fonts from Google Fonts API.
  drupal_add_html_head(array(
    '#tag'        => 'link',
    '#attributes' => array(
      'href' => 'https://fonts.googleapis.com/css?family=Montserrat:400,700|Open+Sans:300,400,700',
      'rel'  => 'stylesheet',
      'type' => 'text/css',
    ),
  ), 'google_font_fki');

  // Body classes
  $variables['classes_array'][] = 'footer-attached';

  $variables['classes_array'][] = 'sidebar-content-off-canvas-xs';
  $variables['classes_array'][] = 'sidebar-left-hidden-xs';
  $variables['classes_array'][] = 'sidebar-left-enabled-xs';

  $variables['classes_array'][] = 'sidebar-content-off-canvas-sm';
  $variables['classes_array'][] = 'sidebar-left-hidden-sm';
  $variables['classes_array'][] = 'sidebar-left-enabled-sm';

  $variables['classes_array'][] = 'sidebar-content-shrink-md';
  $variables['classes_array'][] = 'sidebar-left-static-md';
  $variables['classes_array'][] = 'sidebar-left-enabled-md';

  $variables['classes_array'][] = 'sidebar-content-shrink-lg';
  $variables['classes_array'][] = 'sidebar-left-static-lg';
  $variables['classes_array'][] = 'sidebar-left-enabled-lg';

  $variables['classes_array'][] = 'simple-navigation-enabled-xs';
  $variables['classes_array'][] = 'simple-navigation-enabled-sm';

  $variables['classes_array'][] = 'main-navigation-enabled-md';
  $variables['classes_array'][] = 'main-navigation-enabled-lg';

  // Load jQuery UI
  drupal_add_library('system', 'ui');
}

/*
 * Implements theme_preprocess_page().
 */
function fki_preprocess_page(&$variables) {

  // Search form
  $variables['main_navigation_search'] = drupal_get_form('search_form');
}

/**
 * Implements template_preprocess_node.
 */
function fki_preprocess_node(&$variables) {

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_node_page() or foo_preprocess_node_story().
  $function = __FUNCTION__ . '__' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables);
  }
}

/*
 * Sales ad
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__sales_ad(&$variables) {
  if ($variables['elements']['#view_mode'] != 'page') {

    // Litter
    if ($field_litter = field_get_items('node', $variables['node'], 'field_litter_id')) {
      $node_litter = node_load($field_litter[0]['target_id']);

      // Birthdate
      if ($field_litter_birthdate = field_get_items('node', $node_litter, 'field_birthdate')) {
        $variables['litter_birthdate'] = field_view_value('node', $node_litter, 'field_birthdate', $field_litter_birthdate[0], array('settings' => array('format_type' => 'custom_short')));
      }

      // Animal
      if ($field_animal = field_get_items('node', $node_litter, 'field_animal_id')) {
        $node_animal = node_load($field_animal[0]['target_id']);

        // Breed
        if ($field_breed = field_get_items('node', $node_animal, 'field_breed_id')) {
          $variables['animal_breed'] = field_view_value('node', $node_animal, 'field_breed_id', $field_breed[0], array(
            'type' => 'taxonomy_term_reference_plain',
          ));
        }
      }
    }

    // User
    if ($node_creator = ha_user_get_raw_information($variables['user']->uid)) {

      // Location
      if (isset($node_creator['location'])) {
        $variables['user_location'] = $node_creator['location'];
      }
    }
  }
}


function fki_theme(&$existing, $type, $theme, $path) {
  $hooks = array();

  $hooks['main_navigation_search_form'] = array(
    'render element' => 'element',
  );

  return $hooks;
}

/**
 * Implements hook_form_alter().
 */
function fki_form_alter(array &$form, array &$form_state = array(), $form_id = NULL) {
  if ($form_id) {
    switch ($form_id) {

      case 'search_form':
        $form['basic']['keys']['#theme_wrappers'] = array('main_navigation_search_form');
        break;
    }
  }
}

function fki_main_navigation_search_form($variables) {
  $output = '<div class="input-group">';
  $output .= $variables['element']['#children'];
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-secondary"><span class="icon"></span></button>';
  $output .= '</span>';
  $output .= '</div>';
  return $output;
}
