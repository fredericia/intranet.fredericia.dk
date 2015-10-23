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

  // Exported format: Kommentar.
  $formats['kommentar'] = array(
    'format' => 'kommentar',
    'name' => 'Kommentar',
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
      'filter_html_escape' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
