<?php
/**
 * @file
 * os2intra_elasticsearch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2intra_elasticsearch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elasticsearch_connector_get_default_connector';
  $strongarm->value = 'elasticsearch_cluster';
  $export['elasticsearch_connector_get_default_connector'] = $strongarm;

  return $export;
}
