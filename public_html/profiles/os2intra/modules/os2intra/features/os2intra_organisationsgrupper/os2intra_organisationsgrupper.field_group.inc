<?php
/**
 * @file
 * os2intra_organisationsgrupper.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2intra_organisationsgrupper_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afdeling|node|os2intra_org_group_unit|form';
  $field_group->group_name = 'group_afdeling';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_org_group_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afdeling',
    'weight' => '0',
    'children' => array(
      0 => 'group_info',
      1 => 'group_system',
      2 => 'group_meta',
      3 => 'group_billede',
      4 => 'group_tools',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-afdeling field-group-htabs',
      ),
    ),
  );
  $export['group_afdeling|node|os2intra_org_group_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billede|node|os2intra_org_group_unit|form';
  $field_group->group_name = 'group_billede';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_org_group_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afdeling';
  $field_group->data = array(
    'label' => 'Billede',
    'weight' => '15',
    'children' => array(
      0 => 'field_os2intra_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-billede field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_billede|node|os2intra_org_group_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|os2intra_org_group_unit|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_org_group_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afdeling';
  $field_group->data = array(
    'label' => 'Afdelingsinfo',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_info|node|os2intra_org_group_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|post|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_post';
  $field_group->data = array(
    'label' => 'Billeder',
    'weight' => '15',
    'children' => array(
      0 => 'field_os2intra_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Billeder',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-media field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_media|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|os2intra_org_group_unit|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_org_group_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afdeling';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '16',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
      1 => 'field_os2intra_promoted_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_meta|node|os2intra_org_group_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|post|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_post';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '16',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_os2intra_base_spotboxes',
      2 => 'field_os2intra_physical_location',
      3 => 'field_os2web_base_field_ref',
      4 => 'field_os2intra_promoteto',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_meta|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_system|node|os2intra_org_group_unit|form';
  $field_group->group_name = 'group_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_org_group_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_afdeling';
  $field_group->data = array(
    'label' => 'System',
    'weight' => '17',
    'children' => array(
      0 => 'field_os2intra_afdeling',
      1 => 'group_group',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-system field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_system|node|os2intra_org_group_unit|form'] = $field_group;

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
    'weight' => '14',
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
  $export['group_tools|node|os2intra_org_group_unit|form'] = $field_group;

  return $export;
}
