<?php
/**
 * @file
 * matomo_fredericia_prod_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function matomo_fredericia_prod_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'matomo_site_id';
  $strongarm->value = '1';
  $export['matomo_site_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'matomo_url_http';
  $strongarm->value = 'http://piwik.fredericia.bellcom.dk/';
  $export['matomo_url_http'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'matomo_url_https';
  $strongarm->value = 'https://piwik.fredericia.bellcom.dk/';
  $export['matomo_url_https'] = $strongarm;

  return $export;
}
