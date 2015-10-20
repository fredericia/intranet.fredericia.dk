<?php
/**
 * @file
 * os2intra_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2intra_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|os2intra_base_page|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '3',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
      1 => 'field_os2web_base_field_edi_tags',
      2 => 'field_os2web_base_field_kle_ref',
      3 => 'field_synlighed',
      4 => 'group_meta2',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-meta field-group-htabs',
      ),
    ),
  );
  $export['group_meta|node|os2intra_base_page|form'] = $field_group;

  return $export;
}
