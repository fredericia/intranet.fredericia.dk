<?php
/**
 * User activation form
 */
function os2intra_user_import_activate_form($form_state) {
  switch (variable_get('os2intra_user_import_activate_identification')) {
    case 'ad_id':
      $form['ad_id'] = array(
        '#type'  => 'textfield',
        '#title' => t('AD Id'),
      );
      break;

    case 'employee_id':
      $form['employee_id'] = array(
        '#type'  => 'textfield',
        '#title' => t('Employee Id'),
      );
      break;
  }

  if (variable_get('os2intra_user_import_activate_email')) {
    $form['mail'] = array(
      '#type'  => 'textfield',
      '#title' => t('E-mail adress'),
    );
  }

  if (variable_get('os2intra_user_import_activate_birthday')) {
    $form['birthdate'] = array(
      '#type'        => 'textfield',
      '#title'       => t('Birthdate'),
      '#description' => t('First 6 characters of your CPR-number (format: 070593)'),
    );
  }

  $form['submit'] = array(
    '#type'  => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Implements hook_form_validate()
 */
function os2intra_user_import_activate_form_validate($form, &$form_state) {
  $identification_method = variable_get('os2intra_user_import_activate_identification');
  $error = FALSE;

  // Check if employee is valid
  if ($identification_method == 'employee_id') {

    // Check by employee id
    $employee_id = (int) $form_state['values']['employee_id'];

    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'user');
    $query->propertyCondition('status', 1);
    $query->fieldCondition('field_os2intra_employee_id', 'value', $employee_id, 'LIKE');
    $tmp_result = $query->execute();
    $result = array_shift($tmp_result);

    if (!$result) {
      $error = TRUE;
      form_set_error('employee_id', t('Invalid employee id'));
    }
  }
  elseif ($identification_method == 'ad_id') {

    // Check by AD id
    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'user');
    $query->propertyCondition('status', 1);
    $query->propertyCondition('name', $form_state['values']['ad_id'], 'LIKE');
    $tmp_result = $query->execute();
    $result = array_shift($tmp_result);

    if (!$result) {
      $error = TRUE;
      form_set_error('ad_id', t('Invalid AD id'));
    }
  }

  if (!$error) {
    $form_state['uid'] = key($result);
    $user = user_load($form_state['uid']);

    // We check if user is already activated by looking at the last login date.
    if (is_object($user)) {
      if ($user->login > 0) {
        form_set_error('employee_id', t('Employee already activated'));
      }

      // Check if we should validate by birthday
      if (variable_get('os2intra_user_import_activate_birthday')) {

        // Check if birthdate is valid format
        $input_birthday = $form_state['values']['birthdate'];
        if (!ctype_digit($input_birthday) && strlen($input_birthday) !== 6) {
          form_set_error('birthdate', t('Birthdate: Invalid format.'));
        }

        // Check if it matches the users birthday field
        $birthday_field = field_get_items('user', $user, 'field_os2intra_birthdate');
        if ($input_birthday !== $birthday_field[0]['value']) {
          form_set_error('form', 'Please check your input.');
        }
      }

      // Check if we should validate by email
      if (variable_get('os2intra_user_import_activate_email')) {

        // Check if email address is valid and not empty
        if (!valid_email_address($form_state['values']['mail']) || empty(($form_state['values']['mail']))) {
          form_set_error('mail', t('Invalid email address.'));
        }
      }
    }
  }
}

/**
 * Implements hook_form_submit()
 */
function os2intra_user_import_activate_form_submit($form, &$form_state) {
  $password = user_password(8);

  $change = array(
    'mail' => $form_state['values']['mail'],
    'pass' => $password
  );
  $user = user_load($form_state['uid']);

  user_save($user, $change);

  if (_user_mail_notify('register_no_approval_required', $user)) {
    drupal_set_message(t('A mail has been sent to: ') . $form_state['values']['mail']);
  }
}

/**
 * Page callback for user activation
 */
function os2intra_user_import_activate() {
  return drupal_get_form('os2intra_user_import_activate_form');
}
