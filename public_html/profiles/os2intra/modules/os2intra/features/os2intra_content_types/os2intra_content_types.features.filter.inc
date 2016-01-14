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

  // Exported format: Emails.
  $formats['emails'] = array(
    'format' => 'emails',
    'name' => 'Emails',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
    'filters' => array(
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
      'wordfilter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Fuld HTML.
  $formats['fuld_html'] = array(
    'format' => 'fuld_html',
    'name' => 'Fuld HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(),
  );

  // Exported format: indhold.
  $formats['indhold'] = array(
    'format' => 'indhold',
    'name' => 'indhold',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'media_filter' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Kommentar.
  $formats['kommentar'] = array(
    'format' => 'kommentar',
    'name' => 'Kommentar',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <ul> <ol> <li> <dl> <dt> <dd> <p> <div> ',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
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
      'wordfilter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
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
