<?php
/**
 * @file
 * os2intra_bi.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2intra_bi_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'os2intra_bi_machine_name'.
  $field_bases['os2intra_bi_machine_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'os2intra_bi_machine_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
