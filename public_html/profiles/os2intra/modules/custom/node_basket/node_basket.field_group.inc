<?php
/**
 * @file
 * node_basket.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function node_basket_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beskrivelse|node|node_basket|form';
  $field_group->group_name = 'group_beskrivelse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'node_basket';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kurv';
  $field_group->data = array(
    'label' => 'Beskrivelse',
    'weight' => '10',
    'children' => array(
      0 => 'field_node_basket_description',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-beskrivelse field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_beskrivelse|node|node_basket|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ekstlinks|node|node_basket|form';
  $field_group->group_name = 'group_ekstlinks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'node_basket';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kurv';
  $field_group->data = array(
    'label' => 'Eksterne links',
    'weight' => '12',
    'children' => array(
      0 => 'field_node_basket_links',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ekstlinks field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ekstlinks|node|node_basket|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intlinks|node|node_basket|form';
  $field_group->group_name = 'group_intlinks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'node_basket';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kurv';
  $field_group->data = array(
    'label' => 'Interne links',
    'weight' => '11',
    'children' => array(
      0 => 'field_node_basket_references',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-intlinks field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_intlinks|node|node_basket|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kurv|node|node_basket|form';
  $field_group->group_name = 'group_kurv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'node_basket';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'kurv',
    'weight' => '0',
    'children' => array(
      0 => 'group_beskrivelse',
      1 => 'group_intlinks',
      2 => 'group_ekstlinks',
      3 => 'group_system',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-kurv field-group-htabs',
      ),
    ),
  );
  $field_groups['group_kurv|node|node_basket|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_system|node|node_basket|form';
  $field_group->group_name = 'group_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'node_basket';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kurv';
  $field_group->data = array(
    'label' => 'System',
    'weight' => '13',
    'children' => array(
      0 => 'field_node_basket_type',
      1 => 'path',
      2 => 'redirect',
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
  $field_groups['group_system|node|node_basket|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Beskrivelse');
  t('Eksterne links');
  t('Interne links');
  t('System');
  t('kurv');

  return $field_groups;
}
