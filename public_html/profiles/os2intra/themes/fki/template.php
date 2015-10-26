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
 * Spotbox
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__spotbox(&$variables) {
  if ($variables['elements']['#view_mode'] == 'teaser') {

    // Image
    if ($field_image = field_get_items('node', $variables['node'], 'field_spotbox_image')) {
      if (!empty($field_image)) {
        $variables['classes_array'][] = 'fki-spotbox-' . $variables['elements']['#view_mode'] . '-variant-with-image';
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
