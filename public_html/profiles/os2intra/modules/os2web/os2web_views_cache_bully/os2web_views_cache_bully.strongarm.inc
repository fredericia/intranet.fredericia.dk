<?php
/**
 * @file
 * os2web_views_cache_bully.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_views_cache_bully_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_cache_bully_output_lifespan';
  $strongarm->value = '300';
  $export['views_cache_bully_output_lifespan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_cache_bully_results_lifespan';
  $strongarm->value = '60';
  $export['views_cache_bully_results_lifespan'] = $strongarm;

  return $export;
}
