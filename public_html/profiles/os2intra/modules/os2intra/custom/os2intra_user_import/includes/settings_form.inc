<?php
/**
 * Form callback for settings
 */
function os2intra_user_import_settings() {
  $csv_cols = array(
    'none' => t('None'),
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    13,
    14,
    15,
    16,
  );

  $form['placeholder'] = array(
    '#type'   => 'item',
    '#markup' => t('This module does not provide a cron hook. This has to be set up manually, by adding the import script to the crontab'),
  );

  $form['os2intra_user_import_enable'] = array(
    '#title'         => t('Enable user import'),
    '#type'          => 'checkbox',
    '#default_value' => variable_get('os2intra_user_import_enable', FALSE)
  );

  $form['os2intra_user_import_dir'] = array(
    '#title'         => t('Directory containing CSV with users'),
    '#type'          => 'textfield',
    '#required'      => TRUE,
    '#description'   => t('ex. private://user_import'),
    '#default_value' => variable_get('os2intra_user_import_dir', 'private://user_import')
  );
  $form['os2intra_user_import_file_name'] = array(
    '#title'         => t('CSV file name'),
    '#type'          => 'textfield',
    '#required'      => TRUE,
    '#description'   => t('ex. FK-user_import (without extension .csv, without space)'),
    '#default_value' => variable_get('os2intra_user_import_file_name', 'FK-user_import'),
  );
  $form['os2intra_user_import_delimiter'] = array(
    '#title'         => t('CSV delimiter'),
    '#type'          => 'textfield',
    '#description'   => t('The delimiter used to separate values in the CSV, ex. a semicolon, a comma or \t (tab)'),
    '#default_value' => variable_get('os2intra_user_import_delimiter', ';'),
  );

  $form['os2intra_user_default_groups'] = array(
    '#title'         => t('Node ids (nid) of default OG groups, that should be added to every imported used'),
    '#type'          => 'textfield',
    '#description'   => t('CSV, ex. 1,2,3'),
    '#default_value' => variable_get('os2intra_user_default_groups')
  );

  $form['os2intra_user_notification_email'] = array(
    '#title'         => t('Email address that should be notified when new departments are created'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('os2intra_user_notification_email', variable_get('site_mail')),
  );

  $form['os2intra_user_import_og_role_id_parent'] = array(
    '#title'         => t('Parent OG Role Grant ID'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('os2intra_user_import_og_role_id_parent', 14),
    '#description'   => t('ID of the group role to grant the user, when added to parent groups.'),
  );

  $form['os2intra_user_import_og_role_id_user'] = array(
    '#title'         => t('Primary OG Role Grant ID'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('os2intra_user_import_og_role_id_primary', 16),
    '#description'   => t('ID of the group role to grant the user, when added to primary group.'),
  );

  $form['os2intra_user_import_og_role_id_manager'] = array(
    '#title'         => t('Manager OG Role Grant ID'),
    '#type'          => 'textfield',
    '#default_value' => variable_get('os2intra_user_import_og_role_id_manager', 15),
    '#description'   => t('ID of the group role to grant the user, when added to manager group.'),
  );

  $form['os2intra_user_import_authmap_name_suffix'] = array(
    '#title'         => t("Suffix used on the column 'authname' in the authmap table"),
    '#type'          => 'textfield',
    '#default_value' => variable_get('os2intra_user_import_authmap_name_suffix'),
    '#description'   => t("For example '@fredericia.dk'"),
  );

  $form['mapping'] = array(
    '#type'        => 'fieldset',
    '#title'       => t('Mapping'),
    '#collapsible' => FALSE,
  );

  $form['mapping']['description'] = array(
    '#type'   => 'item',
    '#markup' => t('Select columns in the CSV file corresponding to the data'),
  );

  $form['mapping']['os2intra_mapping_ad_id'] = array(
    '#type'          => 'select',
    '#title'         => t('AD id'),
    '#required'      => TRUE,
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_ad_id'),
  );

  $form['mapping']['os2intra_mapping_first_name'] = array(
    '#type'          => 'select',
    '#title'         => t('Firstname'),
    '#required'      => TRUE,
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_first_name'),
  );

  $form['mapping']['os2intra_mapping_last_name'] = array(
    '#type'          => 'select',
    '#title'         => t('Lastname'),
    '#required'      => TRUE,
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_last_name'),
  );

  $form['mapping']['os2intra_mapping_department'] = array(
    '#type'          => 'select',
    '#title'         => t('Department'),
    '#required'      => TRUE,
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_department'),
  );

  $form['mapping']['os2intra_mapping_department_shortname'] = array(
    '#type'          => 'select',
    '#title'         => t('Department short name'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_department_shortname'),
  );

  $form['mapping']['os2intra_mapping_centre'] = array(
    '#type'          => 'select',
    '#title'         => t('Centre'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_centre'),
  );

  $form['mapping']['os2intra_mapping_employee_id'] = array(
    '#type'          => 'select',
    '#title'         => t('Employee id'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_employee_id'),
  );

  $form['mapping']['os2intra_mapping_job_description'] = array(
    '#type'          => 'select',
    '#title'         => t('Job description'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_job_description'),
  );

  $form['mapping']['os2intra_mapping_termination_date'] = array(
    '#type'          => 'select',
    '#title'         => t('Termination date'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_termination_date'),
  );

  $form['mapping']['os2intra_mapping_phone'] = array(
    '#type'          => 'select',
    '#title'         => t('Phone Number'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_phone'),
  );

  $form['mapping']['os2intra_mapping_mobile'] = array(
    '#type'          => 'select',
    '#title'         => t('Mobile Number'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_mobile'),
  );

  $form['mapping']['os2intra_mapping_email'] = array(
    '#type'          => 'select',
    '#title'         => t('Email Address'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_email'),
  );

  $form['mapping']['os2intra_mapping_birthdate'] = array(
    '#type'          => 'select',
    '#title'         => t('Birthdate'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_birthdate'),
  );

  $form['mapping']['os2intra_mapping_department_name'] = array(
    '#type'          => 'select',
    '#title'         => t('Department name'),
    '#options'       => $csv_cols,
    '#default_value' => variable_get('os2intra_mapping_department_name'),
  );

  $form['cleanup_help_block'] = array(
    '#type'   => 'item',
    '#title'  => t('Cleanup script'),
    '#markup' => '<ul><li>Deletes all terms in the vocabulary "os2intra_organization_tax"</li><li>Deletes all users with only one role "authenticated user"</li></ul><br>Run using: Run using drush scr ../scripts/delete_imported_data.php',
  );
  return system_settings_form($form);
}

/**
 * Implements hook_form_validate()
 */
function os2intra_user_import_settings_validate(&$form, &$form_state) {
  $values = array();
  foreach ($form_state['values'] as $field => $value) {
    if (strstr($field, 'os2intra_mapping')) {
      // If same column is selected twice throw error
      if (in_array($value, $values) && $value != 'none') {
        form_set_error($field, t('Cannot use column twice'));
      }

      $values[] = $value;
    }
  }

  if ($form_state['values']['os2intra_user_default_groups']) {
    $default_groups = explode(',', $form_state['values']['os2intra_user_default_groups']);
    foreach ($default_groups as $group) {
      $node = node_load($group);
      if (!$node || $node->type != 'os2intra_org_group_unit') {
        form_set_error('os2intra_user_default_groups', t('Must be a valid NID of type organic groups (OG)'));
      }
    }
  }
}
