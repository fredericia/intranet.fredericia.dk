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
  $field_group->identifier = 'group_form|node|os2intra_base_page|form';
  $field_group->group_name = 'group_form';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Formular',
    'weight' => '0',
    'children' => array(
      0 => 'group_media',
      1 => 'group_meta2',
      2 => 'group_meta',
      3 => 'group_tekst',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-form field-group-htabs',
      ),
    ),
  );
  $export['group_form|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|os2intra_base_page|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_form';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_os2intra_base_images',
      1 => 'field_os2web_base_field_media',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_media|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta2|node|os2intra_base_page|form';
  $field_group->group_name = 'group_meta2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_form';
  $field_group->data = array(
    'label' => 'Meta2',
    'weight' => '4',
    'children' => array(
      0 => 'field_os2intra_outdated_date',
      1 => 'field_os2web_base_field_hidlinks',
      2 => 'field_os2web_base_field_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta2 field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_meta2|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|os2intra_base_page|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_form';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '3',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
      1 => 'field_os2web_base_field_edi_tags',
      2 => 'field_os2web_base_field_kle_ref',
      3 => 'field_synlighed',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_meta|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tekst|node|os2intra_base_page|form';
  $field_group->group_name = 'group_tekst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_form';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tekst|node|os2intra_base_page|form'] = $field_group;

  return $export;
}
