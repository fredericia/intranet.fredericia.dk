<?php
/**
 * @file
 * os2web_audit.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_audit_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blame_exclude_form_ids';
  $strongarm->value = array(
    0 => 'blame_settings_form',
  );
  $export['blame_exclude_form_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blame_ignore_uids';
  $strongarm->value = array();
  $export['blame_ignore_uids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blame_pages';
  $strongarm->value = 'admin/*';
  $export['blame_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blame_pages_in_ex';
  $strongarm->value = '1';
  $export['blame_pages_in_ex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blame_track_uids';
  $strongarm->value = array();
  $export['blame_track_uids'] = $strongarm;

  return $export;
}
