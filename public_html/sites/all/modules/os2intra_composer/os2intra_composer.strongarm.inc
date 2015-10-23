<?php
/**
 * @file
 * os2intra_composer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2intra_composer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'composer_manager_vendor_dir';
  $strongarm->value = '../vendor';
  $export['composer_manager_vendor_dir'] = $strongarm;

  return $export;
}
