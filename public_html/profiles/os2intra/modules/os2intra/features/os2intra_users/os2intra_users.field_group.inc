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
    'label' => 'Brugerkonto',
    'weight' => '4',
    'children' => array(
      0 => 'ckeditor',
      1 => 'mimemail',
      2 => 'account',
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
    'label' => 'Billede',
    'weight' => '2',
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
    'label' => 'Grupper',
    'weight' => '5',
    'children' => array(
      0 => 'og_user_node',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-grupper field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
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
    'label' => 'Navn og stilling',
    'weight' => '1',
    'children' => array(
      0 => 'field_name_first',
      1 => 'field_name_last',
      2 => 'field_os2intra_user_titles',
      3 => 'field_os2intra_phone',
      4 => 'field_os2intra_physical_location',
      5 => 'field_os2intra_mobile',
      6 => 'field_os2intra_birthdate',
      7 => 'field_os2intra_phone_private',
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
    'label' => 'Profil info',
    'weight' => '3',
    'children' => array(
      0 => 'field_os2intra_user_bio',
      1 => 'field_os2intra_user_competences',
      2 => 'field_os2intra_user_inter',
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
    'label' => 'Slet',
    'weight' => '1',
    'children' => array(
      0 => 'field_os2intra_organisation_ref',
      1 => 'field_os2intra_department_ref',
      2 => 'field_os2intra_import_groups',
      3 => 'og_org_ref',
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
    'label' => 'System',
    'weight' => '6',
    'children' => array(
      0 => 'field_os2intra_employee_id',
      1 => 'field_os2intra_termination_date',
      2 => 'message_subscribe_email',
      3 => 'og_user_node2',
      4 => 'os2intra_users_opus_roles',
      5 => 'masquerade',
      6 => 'piwik',
      7 => 'timezone',
      8 => 'locale',
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
    'label' => 'Værktøjer',
    'weight' => '8',
    'children' => array(
      0 => 'field_node_basket_toolboxes',
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
    'label' => 'Bruger',
    'weight' => '0',
    'children' => array(
      0 => 'group_account',
      1 => 'group_billede',
      2 => 'group_grupper',
      3 => 'group_name',
      4 => 'group_profile',
      5 => 'group_system',
      6 => 'group_tools',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
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
