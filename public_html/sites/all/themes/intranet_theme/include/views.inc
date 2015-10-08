<?php



/**
 * Implements hook_preprocess_views_view_unformatted().
 */
function intranet_theme_preprocess_views_view_unformatted(&$variables, $hook) {
  $view = $variables['view'];

  // Prevent the avatars in the activity stream blocks from bleeding into the
  // rows below them.
  if ($view->name == 'commons_activity_streams_activity') {
    foreach ($variables['classes_array'] as &$classes) {
      $classes .= ' clearfix';
    }
  }

  // Add a class to rows designating the node type for the rows that give us the
  // node type information.
  foreach ($view->result as $id => $result) {
    if (isset($result->node_type)) {
      $variables['classes_array'][$id] .= ' ' . drupal_html_class('row-type-' . $result->node_type);
    }
    else if (($view->name == 'commons_events_upcoming' && $view->override_path != 'events') || $view->name == 'commons_events_user_upcoming_events') {
      $variables['classes_array'][$id] .= ' ' . drupal_html_class('row-type-event');
    }
  }
}

/**
 * Implements hook_preprocess_views_view().
 */
function intranet_theme_preprocess_views_view(&$variables, $hook) {
  $view = $variables['view'];

  // Wrap page views in pod styling.
  if ($view->display_handler->plugin_name == 'page') {
    $variables['classes_array'][] = 'commons-pod';
    $variables['classes_array'][] = 'clearfix';
  }

  // Style some views without bottom borders and padding.
  $plain = array(
    'commons_groups_directory' => array('panel_pane_1'),
    'commons_groups_recent_content' => array('block'),
    'commons_groups_user_groups' => array('panel_pane_1'),
    'commons_radioactivity_groups_active_in_group' => array('panel_pane_1'),
  );
  if (isset($plain[$variables['name']]) && in_array($variables['display_id'], $plain[$variables['name']])) {
    $variables['classes_array'][] = 'view-plain';
  }
}
