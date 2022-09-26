<?php

/**
 * @file
 * os2intra_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2intra_users_field_group_info() {
  $field_groups = array();

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
    'children' => array(
      0 => 'ckeditor',
      1 => 'mimemail',
      2 => 'account',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-account field-group-htab',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Brugerkonto',
    'weight' => '4',
  );
  $field_groups['group_account|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_os2intra_image',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-billede field-group-htab',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Billede',
    'weight' => '2',
  );
  $field_groups['group_billede|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grupper|user|user|form';
  $field_group->group_name = 'group_grupper';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'children' => array(
      0 => 'og_user_node',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-grupper field-group-htab',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Grupper',
    'weight' => '5',
  );
  $field_groups['group_grupper|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_name_first',
      1 => 'field_name_last',
      2 => 'field_os2intra_user_titles',
      3 => 'field_os2intra_phone',
      4 => 'field_os2intra_physical_location',
      5 => 'field_os2intra_mobile',
      6 => 'field_os2intra_birthdate',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Navn og stilling',
    'weight' => '1',
  );
  $field_groups['group_name|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_os2intra_user_bio',
      1 => 'field_os2intra_user_competences',
      2 => 'field_os2intra_user_inter',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-profile field-group-htab',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Profil info',
    'weight' => '3',
  );
  $field_groups['group_profile|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_os2intra_organisation_ref',
      1 => 'field_os2intra_department_ref',
      2 => 'field_os2intra_import_groups',
      3 => 'og_org_ref',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-slet field-group-div hidden',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'Slet',
    ),
    'format_type' => 'div',
    'label' => 'Slet',
    'weight' => '1',
  );
  $field_groups['group_slet|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'field_os2intra_employee_id',
      1 => 'field_os2intra_termination_date',
      2 => 'message_subscribe_email',
      3 => 'og_user_node2',
      4 => 'os2intra_users_opus_roles',
      5 => 'field_os2intra_user_disable_date',
      6 => 'masquerade',
      7 => 'timezone',
      8 => 'locale',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'System',
    'weight' => '6',
  );
  $field_groups['group_system|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tools|user|user|form';
  $field_group->group_name = 'group_tools';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'children' => array(
      0 => 'field_node_basket_toolboxes',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-tools field-group-htab',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Værktøjer',
    'weight' => '8',
  );
  $field_groups['group_tools|user|user|form'] = $field_group;

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
    'children' => array(
      0 => 'group_account',
      1 => 'group_billede',
      2 => 'group_grupper',
      3 => 'group_name',
      4 => 'group_profile',
      5 => 'group_system',
      6 => 'group_tools',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
    'format_type' => 'htabs',
    'label' => 'Bruger',
    'weight' => '0',
  );
  $field_groups['group_user|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Billede');
  t('Bruger');
  t('Brugerkonto');
  t('Grupper');
  t('Navn og stilling');
  t('Profil info');
  t('Slet');
  t('System');
  t('Værktøjer');

  return $field_groups;
}
