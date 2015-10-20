<?php
/**
 * @file
 * os2intra_content_types.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2intra_content_types_filter_default_formats() {
  $formats = array();

  // Exported format: Fuld HTML.
  $formats['fuld_html'] = array(
    'format' => 'fuld_html',
    'name' => 'Fuld HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  // Exported format: indhold.
  $formats['indhold'] = array(
    'format' => 'indhold',
    'name' => 'indhold',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
