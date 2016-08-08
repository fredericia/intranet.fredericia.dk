<?php
/**
 * Helper function to parse file contents to array with relevant info
 */
function _os2intra_user_import_process_file($file_path) {

  // CSV field mapping
  // rewrite for settings page?
  $map = array(
    variable_get('os2intra_mapping_ad_id')                => 'ad_id',
    variable_get('os2intra_mapping_employee_id')          => 'employee_id',
    variable_get('os2intra_mapping_first_name')           => 'first_name',
    variable_get('os2intra_mapping_last_name')            => 'last_name',
    variable_get('os2intra_mapping_department')           => 'department',
    variable_get('os2intra_mapping_department_shortname') => 'department_shortname',
    variable_get('os2intra_mapping_centre')               => 'centre',
    variable_get('os2intra_mapping_job_description')      => 'job_description',
    variable_get('os2intra_mapping_termination_date')     => 'termination_date',
    variable_get('os2intra_mapping_phone')                => 'phone',
    variable_get('os2intra_mapping_mobile')               => 'mobile',
    variable_get('os2intra_mapping_email')                => 'email',
    variable_get('os2intra_mapping_birthdate')            => 'birthdate',
    variable_get('os2intra_mapping_department_name')      => 'department_name',
  );

  // Load data from file
  $csv = array_map(function($d) {
    return str_getcsv($d, variable_get('os2intra_user_import_delimiter'));
  }, file($file_path));
  $at_content = FALSE;

  foreach ($csv as $row) {

    // Look for where headings start and ignore everything before the headings.
    if (!$at_content
      && (!array_key_exists(variable_get('os2intra_mapping_ad_id'), $row)
     || $row[variable_get('os2intra_mapping_ad_id')] =! 'AD-ID')) {

      continue;
    }
    else {
      $at_content = TRUE;
    }

    // SKip if row has no user name
    if ($row[variable_get('os2intra_mapping_ad_id')] == '') {
      continue;
    }

    // Parse mapping
    foreach ($row as $key => $field) {
      // If there is a mapping for the key
      if ($map[$key]) {
        $mapped_row[$map[$key]] = _os2intra_user_import_sanitize_int($field);
      }
    }
    $rows[] = $mapped_row;
  }

  // Skip first row, headers
  unset($rows[0]);
  return $rows;
}
