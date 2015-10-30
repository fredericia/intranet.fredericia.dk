<?php
/**
 * @file
 * os2intra_settings.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function os2intra_settings_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Info til alle',
    'description' => '',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => '84cf4040-2b8c-4979-b01d-06f1f82e9a8f',
    'vocabulary_machine_name' => 'os2web_base_tax_promoteto',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
