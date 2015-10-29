<?php
include( dirname(__FILE__) . '/include/menu.inc');
include( dirname(__FILE__) . '/include/settings.inc');

/**
 * Implements theme_preprocess_html().
 */
function bellcom_preprocess_html(&$variables) {
  $current_theme = variable_get('theme_default','none');

  // Paths
  $variables['path_js']   = base_path() . drupal_get_path('theme', $current_theme) . '/dist/js';
  $variables['path_img']  = base_path() . drupal_get_path('theme', $current_theme) . '/dist/img';
  $variables['path_css']  = base_path() . drupal_get_path('theme', $current_theme) . '/dist/css';
  $variables['path_font'] = base_path() . drupal_get_path('theme', $current_theme) . '/dist/font';
}

/*
 * Implements theme_preprocess_page().
 */
function bellcom_preprocess_page(&$variables) {
  $current_theme = variable_get('theme_default','none');
  $primary_navigation_name = variable_get('menu_main_links_source', 'main-menu');
  $secondary_navigation_name = variable_get('menu_secondary_links_source', 'user-menu');

  // Navigation
  $variables['primary_navigation'] = _bellcom_generate_menu($primary_navigation_name, 'full', 'main-navigation');
  $variables['secondary_navigation'] = _bellcom_generate_menu($secondary_navigation_name, 'full', 'main-navigation');
  $variables['sidebar_primary_navigation'] = _bellcom_generate_menu($primary_navigation_name, 'full', 'sidebar');
  $variables['sidebar_secondary_navigation'] = _bellcom_generate_menu($secondary_navigation_name, 'full', 'sidebar');

  // Paths
  $variables['path_js']   = base_path() . drupal_get_path('theme', $current_theme) . '/dist/js';
  $variables['path_img']  = base_path() . drupal_get_path('theme', $current_theme) . '/dist/img';
  $variables['path_css']  = base_path() . drupal_get_path('theme', $current_theme) . '/dist/css';
  $variables['path_font'] = base_path() . drupal_get_path('theme', $current_theme) . '/dist/font';

  // Theme settings
  $variables['theme_settings'] = _bellcom_collect_theme_settings();
}

/**
 * Implements template_preprocess_node().
 */
function bellcom_preprocess_node(&$variables) {

  // Add node--view_mode.tpl.php suggestions.
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['view_mode'];

  // Make "node--NODETYPE--VIEWMODE.tpl.php" templates available for nodes.
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

  // Add a class for the view mode.
  $variables['classes_array'][] = 'view-mode-' . $variables['view_mode'];

  // Add css class "node--NODETYPE--VIEWMODE" to nodes.
  $variables['classes_array'][] = 'node--' . $variables['type'] . '--' . $variables['view_mode'];

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_node_page() or foo_preprocess_node_story().
  $function = __FUNCTION__ . '__' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables);
  }
}

/*
 * Implements template_preprocess_field().
 */
function bellcom_preprocess_field(&$variables, $hook) {
}

/*
 * Implements hook_preprocess_region().
 */
function bellcom_preprocess_region(&$variables, $hook) {
}

/*
 * Implements theme_preprocess_block().
 */
function bellcom_preprocess_block(&$variables) {

  $variables ['classes_array'][] = drupal_html_class('block-' . $variables ['block']->module);
}

/*
 * Implements theme_menu_tree().
 */
function bellcom_menu_tree__main_menu__main_navigation(&$variables) {
  return '<ul class="main-navigation-list">' . $variables['tree'] . '</ul>';
}
function bellcom_menu_tree__user_menu__main_navigation(&$variables) {
  return '<ul class="main-navigation-list main-navigation-right">' . $variables['tree'] . '</ul>';
}
function bellcom_menu_tree__main_menu__sidebar(&$variables) {
  return '<ul class="sidebar-nav">' . $variables['tree'] . '</ul>';
}
function bellcom_menu_tree__user_menu__sidebar(&$variables) {
  return '<ul class="sidebar-nav">' . $variables['tree'] . '</ul>';
}

/*
 * Implements theme_menu_link().
 */
function bellcom_menu_link__main_navigation(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth']))) {

      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="main-navigation-list-dropdown-menu">' . drupal_render($element['#below']) . '</ul>';

      // Generate as dropdown.
      $element['#attributes']['class'][] = 'main-navigation-list-dropdown';
      $element['#localized_options']['html'] = TRUE;
    }
  }
  else {
    $element['#attributes']['class'][] = 'main-navigation-list-link';
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/*
 * Implements theme_menu_link().
 */
function bellcom_menu_link__sidebar(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth']))) {

      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="sidebar-nav-dropdown-menu">' . drupal_render($element['#below']) . '</ul>';

      // Generate as dropdown.
      $element['#title'] .= ' <span class="sidebar-nav-dropdown-toggle"></span>';
      $element['#attributes']['class'][] = 'sidebar-nav-dropdown';
      $element['#localized_options']['html'] = TRUE;
    }
  }
  else {
    $element['#attributes']['class'][] = 'sidebar-nav-link';
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'sidebar-nav-active';
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
