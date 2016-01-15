<?php
/**
 * @file
 * os2intra_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2intra_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field_name_first] [user:field_name_last]';
  $export['realname_pattern'] = $strongarm;

  return $export;
}
