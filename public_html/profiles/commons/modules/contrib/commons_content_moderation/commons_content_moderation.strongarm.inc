<?php
/**
 * @file
 * commons_content_moderation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function commons_content_moderation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_abuse_flags';
  $strongarm->value = array(
    'inappropriate_node' => 'inappropriate_node',
    'os2intra_flag_outdated' => 'os2intra_flag_outdated',
    'inappropriate_comment' => 'inappropriate_comment',
    'commons_follow_user' => 0,
    'email_group' => 0,
    'commons_follow_node' => 0,
    'commons_follow_term' => 0,
    'abuse_user' => 0,
    'email_term' => 0,
    'email_node' => 0,
    'commons_follow_group' => 0,
    'email_user' => 0,
    'subscribe_node' => 0,
    'subscribe_term' => 0,
    'subscribe_user' => 0,
    'subscribe_og' => 0,
    'email_og' => 0,
  );
  $export['flag_abuse_flags'] = $strongarm;

  return $export;
}
