<?php
/**
 * @file
 * os2intra_settings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2intra_settings_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slet|user|user|form';
  $field_group->group_name = 'group_slet';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slet',
    'weight' => '1',
    'children' => array(
      0 => 'field_os2intra_organisation_ref',
      1 => 'field_os2intra_import_groups',
      2 => 'field_os2intra_department_ref',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Slet',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-slet field-group-div hidden',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_slet|user|user|form'] = $field_group;

  return $export;
}
