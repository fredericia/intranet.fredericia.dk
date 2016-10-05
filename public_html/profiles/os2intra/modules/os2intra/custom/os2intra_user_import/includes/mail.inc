<?php
/**
 * Implements hook_mail().
 */
function os2intra_user_import_mail($key, &$message, $params) {
  switch ($key) {
    case 'os2intra_user_notification_email':

      $message['subject'] = $params['subject'];
      $message['body'][] = $params['body'];
      break;
  }
}

/**
 * Notify via email that new departments has been created.
 */
function _os2intra_user_import_send_email($terms) {

  global $base_url;

  $body = "The list below contains name and URL of created departments:\n\n";

  // Loop through terms and build email body
  foreach ($terms as $term) {
    $body.= $term->name . ' ' . $base_url . '/' . drupal_get_path_alias('taxonomy/term/' . $term->tid) . "\n";
  }

  // Build and send email to administrator, that a new department has been created.
  $params = array(
    'subject' => t('New department has been created'),
    'body' => $body,
  );
  $to = variable_get('os2intra_user_notification_email', variable_get('site_mail'));

  drupal_mail('os2intra_user_import', 'os2intra_user_notification_email', $to, language_default(), $params);
}
