<?php
/**
 * @file
 * os2intra_organisationsgrupper.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2intra_organisationsgrupper_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tools|node|os2intra_org_group_unit|form';
  $field_group->group_name = 'group_tools';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_org_group_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afdeling';
  $field_group->data = array(
    'label' => 'Værktøjer',
    'weight' => '15',
    'children' => array(
      0 => 'field_os2intra_dept_tools',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tools field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tools|node|os2intra_org_group_unit|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Værktøjer');

  return $field_groups;
}
