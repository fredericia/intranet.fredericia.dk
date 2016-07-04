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
      0 => 'group_billede',
      1 => 'group_info',
      2 => 'group_meta',
      3 => 'group_system',
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
  $field_groups['group_afdeling|node|os2intra_org_group_unit|form'] = $field_group;

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
    'weight' => '14',
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
  $field_groups['group_billede|node|os2intra_org_group_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deltagere|node|os2intra_referat|form';
  $field_group->group_name = 'group_deltagere';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_referat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_referatform';
  $field_group->data = array(
    'label' => 'Mødedeltagere',
    'weight' => '13',
    'children' => array(
      0 => 'field_os2intra_referat_deltagere',
      1 => 'field_os2intra_referat_afbud',
      2 => 'field_os2intra_referat_moedelede',
      3 => 'field_os2intra_referat_refernt',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-deltagere field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_deltagere|node|os2intra_referat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_detaljer|node|os2intra_referat|form';
  $field_group->group_name = 'group_detaljer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_referat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_referatform';
  $field_group->data = array(
    'label' => 'Detaljer',
    'weight' => '12',
    'children' => array(
      0 => 'field_os2intra_referat_moedetype',
      1 => 'field_os2intra_referat_moedested',
      2 => 'field_os2intra_referat_dato',
      3 => 'field_os2intra_referat_event',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-detaljer field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_detaljer|node|os2intra_referat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|node|os2intra_group|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indstillinger';
  $field_group->data = array(
    'label' => 'Synlighed',
    'weight' => '8',
    'children' => array(
      0 => 'group_access',
      1 => 'group_content_access',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Synlighed',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_group|node|os2intra_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gruppered|node|os2intra_group|form';
  $field_group->group_name = 'group_gruppered';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gruppe redigering',
    'weight' => '0',
    'children' => array(
      0 => 'group_gruppe',
      1 => 'group_indstillinger',
      2 => 'group_logo',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-gruppered field-group-htabs',
      ),
    ),
  );
  $field_groups['group_gruppered|node|os2intra_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gruppe|node|os2intra_group|form';
  $field_group->group_name = 'group_gruppe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gruppered';
  $field_group->data = array(
    'label' => 'Gruppe',
    'weight' => '10',
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
  $field_groups['group_gruppe|node|os2intra_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|os2intra_group|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gruppered';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '12',
    'children' => array(
      0 => 'group_group',
      1 => 'field_os2intra_base_spotboxes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indstillinger field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_indstillinger|node|os2intra_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|os2intra_referat|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_referat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_referatform';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '14',
    'children' => array(
      0 => 'field_os2web_base_field_media',
      1 => 'group_content_access',
      2 => 'scheduler_settings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indstillinger field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_indstillinger|node|os2intra_referat|form'] = $field_group;

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
  $field_groups['group_info|node|os2intra_org_group_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logo|node|os2intra_group|form';
  $field_group->group_name = 'group_logo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_group';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gruppered';
  $field_group->data = array(
    'label' => 'Logo',
    'weight' => '11',
    'children' => array(
      0 => 'field_os2intra_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-logo field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_logo|node|os2intra_group|form'] = $field_group;

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
  $field_groups['group_media|node|post|form'] = $field_group;

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
    'label' => 'Forfremmet',
    'weight' => '16',
    'children' => array(
      0 => 'field_os2intra_promoted_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Forfremmet',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-meta field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_meta|node|os2intra_org_group_unit|form'] = $field_group;

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
    'label' => 'Relationer',
    'weight' => '16',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_os2intra_physical_location',
      2 => 'field_os2intra_related_ref',
      3 => 'field_os2intra_selvbetjening_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Relationer',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-meta field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_meta|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_referatform|node|os2intra_referat|form';
  $field_group->group_name = 'group_referatform';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_referat';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referatform',
    'weight' => '0',
    'children' => array(
      0 => 'group_deltagere',
      1 => 'group_detaljer',
      2 => 'group_indstillinger',
      3 => 'group_referat',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-referatform field-group-htabs',
      ),
    ),
  );
  $field_groups['group_referatform|node|os2intra_referat|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_referat|node|os2intra_referat|form';
  $field_group->group_name = 'group_referat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_referat';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_referatform';
  $field_group->data = array(
    'label' => 'Referat',
    'weight' => '11',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'body',
      2 => 'field_os2intra_referat_type',
      3 => 'field_os2web_base_field_edi_tags',
      4 => 'field_os2web_base_field_kle_ref',
      5 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-referat field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_referat|node|os2intra_referat|form'] = $field_group;

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
      0 => 'group_group',
      1 => 'field_os2intra_base_spotboxes',
      2 => 'field_os2intra_organisation',
      3 => 'og_roles_permissions',
      4 => 'og_group_ref',
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
  $field_groups['group_system|node|os2intra_org_group_unit|form'] = $field_group;

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
  t('Afdeling');
  t('Afdelingsinfo');
  t('Billede');
  t('Billeder');
  t('Detaljer');
  t('Forfremmet');
  t('Gruppe');
  t('Gruppe redigering');
  t('Indstillinger');
  t('Logo');
  t('Mødedeltagere');
  t('Referat');
  t('Referatform');
  t('Relationer');
  t('Synlighed');
  t('System');
  t('Værktøjer');

  return $field_groups;
}
