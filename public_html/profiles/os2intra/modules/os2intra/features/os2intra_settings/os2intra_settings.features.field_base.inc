<?php
/**
 * @file
 * os2intra_settings.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2intra_settings_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_os2intra_organisation_ref'.
  $field_bases['field_os2intra_organisation_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2intra_organisation_ref',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'og',
      'handler_settings' => array(
        'behaviors' => array(
          'og_behavior' => array(
            'status' => TRUE,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
      ),
      'target_type' => 'og_membership',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
