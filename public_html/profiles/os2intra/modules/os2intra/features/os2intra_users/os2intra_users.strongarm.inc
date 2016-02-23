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
  $strongarm->name = 'pathauto_taxonomy_term_os2intra_organisation_tax_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_os2intra_organisation_tax_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_user_hobbies_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_user_hobbies_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_user_jobtitle_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_user_jobtitle_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_user_skills_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_user_skills_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:field_name_first] [user:field_name_last]';
  $export['realname_pattern'] = $strongarm;

  return $export;
}
