<?php

/**
 * System settings form.
 */
function trash_can_settings_form() {
  $form = array();

  $form['trash_can_days_expire'] = array(
    '#title' => 'Antal dage før indhold i papirkurven slettes permanent.',
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => variable_get('trash_can_days_expire', TRASH_CAN_DEFAULT_EXPIRE),
  );
  return system_settings_form($form);
}