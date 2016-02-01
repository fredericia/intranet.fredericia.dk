<?php
/**
 * @file
 * fredericia_user_import_mapping.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fredericia_user_import_mapping_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_ad_id';
  $strongarm->value = '1';
  $export['os2intra_mapping_ad_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_birthday';
  $strongarm->value = 'none';
  $export['os2intra_mapping_birthday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_centre';
  $strongarm->value = '6';
  $export['os2intra_mapping_centre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_department';
  $strongarm->value = '5';
  $export['os2intra_mapping_department'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_department_shortname';
  $strongarm->value = '9';
  $export['os2intra_mapping_department_shortname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_email';
  $strongarm->value = '10';
  $export['os2intra_mapping_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_employee_id';
  $strongarm->value = '12';
  $export['os2intra_mapping_employee_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_first_name';
  $strongarm->value = '2';
  $export['os2intra_mapping_first_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_job_description';
  $strongarm->value = '7';
  $export['os2intra_mapping_job_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_last_name';
  $strongarm->value = '11';
  $export['os2intra_mapping_last_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_phone';
  $strongarm->value = '13';
  $export['os2intra_mapping_phone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_mapping_termination_date';
  $strongarm->value = '3';
  $export['os2intra_mapping_termination_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_user_import_activate_birthday';
  $strongarm->value = 1;
  $export['os2intra_user_import_activate_birthday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_user_import_activate_email';
  $strongarm->value = 1;
  $export['os2intra_user_import_activate_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_user_import_activate_identification';
  $strongarm->value = 'employee_id';
  $export['os2intra_user_import_activate_identification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2intra_user_import_authmap_name_suffix';
  $strongarm->value = '@fredericia.dk';
  $export['os2intra_user_import_authmap_name_suffix'] = $strongarm;

  return $export;
}
