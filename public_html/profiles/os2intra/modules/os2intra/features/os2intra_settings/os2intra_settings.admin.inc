<?php
/**
 * @file
 * This file describes the admin form for os2intra
 */

function os2intra_settings_settings_form($form, $form_state) {
  $form['dummy'] = array(
    '#type' => 'markup',
    '#value' => 'Placeholder until more settings are needed.',
  );

  return system_settings_form($form);
}
