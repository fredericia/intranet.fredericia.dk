<?php
/**
 * @file
 * os2intra_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2intra_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Brugerkonto',
    'weight' => '8',
    'children' => array(
      0 => 'account',
      1 => 'locale',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-account field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billede|user|user|form';
  $field_group->group_name = 'group_billede';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Billede',
    'weight' => '6',
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
  $export['group_billede|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|user|user|form';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Navn og stilling',
    'weight' => '5',
    'children' => array(
      0 => 'field_name_first',
      1 => 'field_name_last',
      2 => 'field_os2intra_user_titles',
      3 => 'field_os2intra_medarbejder_mobil',
      4 => 'field_os2intra_medarbejder_tel',
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
  $export['group_name|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'Profil info',
    'weight' => '7',
    'children' => array(
      0 => 'og_user_node',
      1 => 'field_os2intra_user_bio',
      2 => 'field_os2intra_user_competences',
      3 => 'field_os2intra_user_inter',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_system|user|user|form';
  $field_group->group_name = 'group_system';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'System',
    'weight' => '9',
    'children' => array(
      0 => 'field_os2intra_organisation_ref',
      1 => 'field_os2intra_canteen_canteen',
      2 => 'field_os2intra_medarbejder_nr',
      3 => 'timezone',
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
  $export['group_system|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user|user|user|form';
  $field_group->group_name = 'group_user';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bruger',
    'weight' => '0',
    'children' => array(
      0 => 'group_system',
      1 => 'group_name',
      2 => 'group_profile',
      3 => 'group_account',
      4 => 'group_billede',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_user|user|user|form'] = $field_group;

  return $export;
}
