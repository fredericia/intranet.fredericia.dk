<?php

/**
 * Implements hook_preprocess_panelizer_view_mode().
 */
function intranet_theme_preprocess_panelizer_view_mode(&$variables, $hook) {
  // Add classed to identity the entity type being overridden.
  $variables['classes_array'][] = drupal_html_class('panelizer-' . $variables['element']['#entity_type']);
  $variables['title_attributes_array']['class'][] = drupal_html_class($variables['element']['#entity_type'] . '-title');
  $variables['title_attributes_array']['class'][] = drupal_html_class('panelizer-' . $variables['element']['#entity_type'] . '-title');

  // Add some extra theme hooks for the subthemers.
  $variables['hook_theme_suggestions'][] = $hook . '__' . $variables['element']['#entity_type'];
  $variables['hook_theme_suggestions'][] = $hook . '__' . $variables['element']['#entity_type'] . '__' . $variables['element']['#bundle'];
}

/**
 * Implements hook_preprocess_panels_pane().
 */
function intranet_theme_preprocess_panels_pane(&$variables, $hook) {
  $pane = $variables['pane'];

  // Add pod styling to some of the panels panes.
  $not_pods = array(
    'commons_events-commons_events_create_event_link',
  );
  $content_pods = array(
    'commons_question_answers-panel_pane_1',
  );
  if (($pane->panel == 'two_66_33_second' && !in_array($pane->subtype, $not_pods)) || in_array($pane->subtype, $content_pods)) {
    $variables['attributes_array']['class'][] = 'commons-pod';
  }

  // Mimic the class for the facetapi blocks on the panel variant.
  if (strpos($pane->subtype, 'facetapi-') === 0) {
    $variables['attributes_array']['class'][] = 'block-facetapi';
  }

  // Hide the pane title for the group contributor count.
  if ($pane->subtype == 'node:commons-groups-group-contributors-count-topics') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }

  // Apply common classes to the recent items related to a group.
  static $recent_count = 0;
  if ($pane->subtype == 'commons_groups_recent_content' || $pane->subtype == 'commons_contributors_group-panel_pane_1') {
    $variables['attributes_array']['class'][] = 'group-recent-data';
    $variables['attributes_array']['class'][] = $recent_count % 2 == 0 ? 'group-recent-data-even' : 'group-recent-data-odd';
    $recent_count++;
  }

  // Hide the groups view title since it is redundant.
  if ($pane->subtype == 'commons_groups_directory-panel_pane_1') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Overrides theme_panels_default_style_render_region();
 */
function intranet_theme_panels_default_style_render_region($variables) {
  $output = '';
  // Remove the empty panels-separator div.
  $output .= implode("\n", $variables['panes']);
  return $output;
}
