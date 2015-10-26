<?php
/**
 * @file
 * os2intra_settings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2intra_settings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_os2intra_organisation_ref'.
  $field_instances['user-user-field_os2intra_organisation_ref'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_os2intra_organisation_ref',
    'label' => 'Organisation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Organisation');

  return $field_instances;
}
