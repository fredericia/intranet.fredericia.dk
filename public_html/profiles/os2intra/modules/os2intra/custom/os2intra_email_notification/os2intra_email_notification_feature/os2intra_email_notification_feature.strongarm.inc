<?php

/**
 * @file
 * os2intra_email_notification_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2intra_email_notification_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__os2intra_msgtp_afdelingsindhold';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
      ),
      'form' => array(),
    ),
    'view_modes' => array(),
  );
  $export['field_bundle_settings_message__os2intra_msgtp_afdelingsindhold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_message__os2intra_msgtp_afdelingsindhold_indhold_opdateret';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'message__message_text__0' => array(
          'message_notify_email_body' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
          'message_notify_email_subject' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
        ),
        'message__message_text__1' => array(
          'message_notify_email_body' => array(
            'visible' => TRUE,
            'weight' => 0,
          ),
          'message_notify_email_subject' => array(
            'visible' => FALSE,
            'weight' => 0,
          ),
        ),
      ),
      'form' => array(),
    ),
    'view_modes' => array(),
  );
  $export['field_bundle_settings_message__os2intra_msgtp_afdelingsindhold_indhold_opdateret'] = $strongarm;

  return $export;
}
