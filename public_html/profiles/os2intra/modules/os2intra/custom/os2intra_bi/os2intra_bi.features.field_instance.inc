<?php
/**
 * @file
 * os2intra_bi.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2intra_bi_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-os2intra_bi_opus_roles-field_os2intra_bi_machine_name'.
  $field_instances['taxonomy_term-os2intra_bi_opus_roles-field_os2intra_bi_machine_name'] = array(
    'bundle' => 'os2intra_bi_opus_roles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_os2intra_bi_machine_name',
    'label' => 'Machine name',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Machine name');

  return $field_instances;
}
