<?php
/**
 * @file
 * os2intra_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2intra_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_1|field_collection_item|field_os2intra_base_vejledning|form';
  $field_group->group_name = 'group_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vejledning';
  $field_group->data = array(
    'label' => '1',
    'weight' => '7',
    'children' => array(
      0 => 'field_os2intra_itvejledning_hand',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-1 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_1|field_collection_item|field_os2intra_base_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2|field_collection_item|field_os2intra_base_vejledning|form';
  $field_group->group_name = 'group_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vejledning';
  $field_group->data = array(
    'label' => '2',
    'weight' => '8',
    'children' => array(
      0 => 'field_os2intra_itvejledninger_4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-2 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_2|field_collection_item|field_os2intra_base_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_3|field_collection_item|field_os2intra_base_vejledning|form';
  $field_group->group_name = 'group_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vejledning';
  $field_group->data = array(
    'label' => '3',
    'weight' => '9',
    'children' => array(
      0 => 'field_os2intra_itvejledning_img',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '3',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-3 field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_3|field_collection_item|field_os2intra_base_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afsnit|node|it_vejledning|form';
  $field_group->group_name = 'group_afsnit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_itvejledning';
  $field_group->data = array(
    'label' => 'Afsnit',
    'weight' => '14',
    'children' => array(
      0 => 'field_os2intra_paragraph',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afsnit field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afsnit|node|it_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afsnit|node|os2intra_base_page|form';
  $field_group->group_name = 'group_afsnit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_form';
  $field_group->data = array(
    'label' => 'Afsnit',
    'weight' => '3',
    'children' => array(
      0 => 'field_os2intra_paragraph',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afsnit field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afsnit|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afsnit|node|wiki|form';
  $field_group->group_name = 'group_afsnit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wiki';
  $field_group->data = array(
    'label' => 'Afsnit',
    'weight' => '19',
    'children' => array(
      0 => 'field_os2intra_paragraph',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afsnit field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_afsnit|node|wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_besked|node|os2intra_message_notification|form';
  $field_group->group_name = 'group_besked';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_message_notification';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vigtigt';
  $field_group->data = array(
    'label' => 'Vigtig besked',
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
        'classes' => 'group-besked field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_besked|node|os2intra_message_notification|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|post|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_post';
  $field_group->data = array(
    'label' => 'Indhold',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'field_os2web_base_field_kle_ref',
      2 => 'field_os2web_base_field_edi_tags',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|event|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Begivenhed',
    'weight' => '0',
    'children' => array(
      0 => 'group_indstillinger',
      1 => 'group_media',
      2 => 'group_relationer',
      3 => 'group_spots',
      4 => 'group_tekst',
      5 => 'group_tilmelding',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event field-group-htabs',
      ),
    ),
  );
  $field_groups['group_event|node|event|form'] = $field_group;

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
      0 => 'group_spotsnforms',
      1 => 'group_afsnit',
      2 => 'group_media',
      3 => 'group_meta2',
      4 => 'group_meta',
      5 => 'group_tekst',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-form field-group-htabs',
      ),
    ),
  );
  $field_groups['group_form|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstilliger|node|os2web_base_selfservice_link|form';
  $field_group->group_name = 'group_indstilliger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_selfservice_link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_link';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '12',
    'children' => array(
      0 => 'scheduler_settings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indstilliger field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_indstilliger|node|os2web_base_selfservice_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|event|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '54',
    'children' => array(
      0 => 'field_os2web_base_field_promote',
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
  $field_groups['group_indstillinger|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|it_vejledning|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_itvejledning';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '18',
    'children' => array(
      0 => 'scheduler_settings',
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
  $field_groups['group_indstillinger|node|it_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|post|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_post';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '18',
    'children' => array(
      0 => 'field_os2web_base_field_promote',
      1 => 'group_content_access',
      2 => 'field_able_to_like_content',
      3 => 'flag',
      4 => 'scheduler_settings',
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
  $field_groups['group_indstillinger|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|wiki|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wiki';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '20',
    'children' => array(
      0 => 'group_content_access',
      1 => 'field_os2web_base_field_promote',
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
  $field_groups['group_indstillinger|node|wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_itvejledning|node|it_vejledning|form';
  $field_group->group_name = 'group_itvejledning';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ITVejledning',
    'weight' => '0',
    'children' => array(
      0 => 'group_indstillinger',
      1 => 'group_meta',
      2 => 'group_tekst',
      3 => 'group_vejledning',
      4 => 'group_spotsnforms',
      5 => 'group_media',
      6 => 'group_afsnit',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-itvejledning field-group-htabs',
      ),
    ),
  );
  $field_groups['group_itvejledning|node|it_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kolonne1|field_collection_item|field_os2intra_base_vejledning|default';
  $field_group->group_name = 'group_kolonne1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Kolonne 1',
    'weight' => '6',
    'children' => array(
      0 => 'field_os2intra_itvejledning_hand',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Kolonne 1',
      'instance_settings' => array(
        'classes' => 'col-sm-3',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_kolonne1|field_collection_item|field_os2intra_base_vejledning|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kolonne2|field_collection_item|field_os2intra_base_vejledning|default';
  $field_group->group_name = 'group_kolonne2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Kolonne 2',
    'weight' => '8',
    'children' => array(
      0 => 'field_os2intra_itvejledning_img',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Kolonne 2',
      'instance_settings' => array(
        'classes' => 'col-sm-3',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_kolonne2|field_collection_item|field_os2intra_base_vejledning|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kolonne3|field_collection_item|field_os2intra_base_vejledning|default';
  $field_group->group_name = 'group_kolonne3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Kolonne 3',
    'weight' => '7',
    'children' => array(
      0 => 'field_os2intra_itvejledninger_4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Kolonne 3',
      'instance_settings' => array(
        'classes' => 'col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_kolonne3|field_collection_item|field_os2intra_base_vejledning|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_linkset|node|os2web_base_selfservice_link|form';
  $field_group->group_name = 'group_linkset';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_selfservice_link';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_link';
  $field_group->data = array(
    'label' => 'Selvbetjeningslink',
    'weight' => '10',
    'children' => array(
      0 => 'field_os2web_base_field_kle_ref',
      1 => 'field_os2web_base_field_source',
      2 => 'field_os2web_base_field_type',
      3 => 'field_urlos2intra_selvbetje_link',
      4 => 'field_urlos2intra_selvbetje_int',
      5 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-linkset field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_linkset|node|os2web_base_selfservice_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|os2web_base_selfservice_link|form';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_selfservice_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Selvbetjeningslink',
    'weight' => '0',
    'children' => array(
      0 => 'group_indstilliger',
      1 => 'group_linkset',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-link field-group-htabs',
      ),
    ),
  );
  $field_groups['group_link|node|os2web_base_selfservice_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|event|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '51',
    'children' => array(
      0 => 'field_os2intra_image',
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
  $field_groups['group_media|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|it_vejledning|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_itvejledning';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '15',
    'children' => array(
      0 => 'field_os2intra_images',
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
  $field_groups['group_media|node|it_vejledning|form'] = $field_group;

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
      0 => 'field_os2intra_images',
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
  $field_groups['group_media|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|wiki|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wiki';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '16',
    'children' => array(
      0 => 'field_os2intra_images',
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
  $field_groups['group_media|node|wiki|form'] = $field_group;

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
    'label' => 'Indstillinger',
    'weight' => '7',
    'children' => array(
      0 => 'field_synlighed',
      1 => 'scheduler_settings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Indstillinger',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-meta2 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_meta2|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|event|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '52',
    'children' => array(),
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
  $field_groups['group_meta|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|it_vejledning|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_itvejledning';
  $field_group->data = array(
    'label' => 'Referencer',
    'weight' => '17',
    'children' => array(
      0 => 'field_os2intra_related_ref',
      1 => 'field_os2intra_selvbetjening_ref',
      2 => 'field_os2web_base_field_hidlinks',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Referencer',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-meta field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_meta|node|it_vejledning|form'] = $field_group;

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
    'label' => 'Referencer',
    'weight' => '5',
    'children' => array(
      0 => 'field_os2web_base_field_hidlinks',
      1 => 'field_os2web_base_field_ref',
      2 => 'field_os2intra_selvbetjening_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Referencer',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_meta|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|wiki|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wiki';
  $field_group->data = array(
    'label' => 'Meta',
    'weight' => '17',
    'children' => array(
      0 => 'field_os2intra_outdated_date',
      1 => 'field_radioactivity',
      2 => 'field_topics',
      3 => 'group_content_access',
      4 => 'og_group_ref',
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
  $field_groups['group_meta|node|wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modtagere|node|os2intra_message_notification|form';
  $field_group->group_name = 'group_modtagere';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_message_notification';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vigtigt';
  $field_group->data = array(
    'label' => 'Modtagere',
    'weight' => '2',
    'children' => array(
      0 => 'field_os2intra_physical_location',
      1 => 'field_os2intra_organisation_tref',
      2 => 'field_os2intra_organisation_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-modtagere field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_modtagere|node|os2intra_message_notification|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_planlaeg|node|os2intra_message_notification|form';
  $field_group->group_name = 'group_planlaeg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_message_notification';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vigtigt';
  $field_group->data = array(
    'label' => 'Planlæg',
    'weight' => '3',
    'children' => array(
      0 => 'scheduler_settings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-planlaeg field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_planlaeg|node|os2intra_message_notification|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_post|node|post|form';
  $field_group->group_name = 'group_post';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Post',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_indstillinger',
      2 => 'group_spotsnforms',
      3 => 'group_media',
      4 => 'group_meta',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-post field-group-htabs',
      ),
    ),
  );
  $field_groups['group_post|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationer|node|event|form';
  $field_group->group_name = 'group_relationer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Relationer',
    'weight' => '53',
    'children' => array(
      0 => 'field_os2intra_related_ref',
      1 => 'field_os2intra_selvbetjening_ref',
      2 => 'og_group_ref',
      3 => 'field_os2web_base_field_hidlinks',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relationer field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_relationer|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationer|node|wiki|form';
  $field_group->group_name = 'group_relationer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wiki';
  $field_group->data = array(
    'label' => 'Relationer',
    'weight' => '18',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_os2intra_physical_location',
      2 => 'field_os2intra_selvbetjening_ref',
      3 => 'field_os2web_base_field_ref',
      4 => 'field_os2web_base_field_hidlinks',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relationer field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_relationer|node|wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|field_collection_item|field_os2intra_base_vejledning|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_kolonne1',
      1 => 'group_kolonne2',
      2 => 'group_kolonne3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-row field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row|field_collection_item|field_os2intra_base_vejledning|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spotsnforms|node|it_vejledning|form';
  $field_group->group_name = 'group_spotsnforms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_itvejledning';
  $field_group->data = array(
    'label' => 'Spotbokse / webform',
    'weight' => '16',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
      1 => 'field_os2web_webform_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-spotsnforms field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_spotsnforms|node|it_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spotsnforms|node|os2intra_base_page|form';
  $field_group->group_name = 'group_spotsnforms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_base_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_form';
  $field_group->data = array(
    'label' => 'Spotbokse / webform',
    'weight' => '4',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
      1 => 'field_os2web_webform_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-spotsnforms field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_spotsnforms|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spotsnforms|node|post|form';
  $field_group->group_name = 'group_spotsnforms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'post';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_post';
  $field_group->data = array(
    'label' => 'Spotbokse / webform',
    'weight' => '14',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
      1 => 'field_os2web_webform_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-spotsnforms field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_spotsnforms|node|post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spotsnforms|node|wiki|form';
  $field_group->group_name = 'group_spotsnforms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wiki';
  $field_group->data = array(
    'label' => 'Spotbokse / webform',
    'weight' => '17',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
      1 => 'field_os2web_webform_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-spotsnforms field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_spotsnforms|node|wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_spots|node|event|form';
  $field_group->group_name = 'group_spots';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Spotbokse',
    'weight' => '52',
    'children' => array(
      0 => 'field_os2intra_base_spotboxes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-spots field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_spots|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tekst|node|event|form';
  $field_group->group_name = 'group_tekst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '49',
    'children' => array(
      0 => 'body',
      1 => 'field_os2intra_date',
      2 => 'field_os2intra_physical_location',
      3 => 'field_os2web_base_field_edi_tags',
      4 => 'field_os2web_base_field_kle_ref',
      5 => 'field_os2intra_event_type',
      6 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tekst field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tekst|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tekst|node|it_vejledning|form';
  $field_group->group_name = 'group_tekst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_itvejledning';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '12',
    'children' => array(
      0 => 'body',
      1 => 'field_os2intra_base_structure',
      2 => 'field_os2web_base_field_edi_tags',
      3 => 'field_os2web_base_field_kle_ref',
      4 => 'field_os2web_base_field_intro',
      5 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tekst field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tekst|node|it_vejledning|form'] = $field_group;

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
      1 => 'field_os2intra_base_structure',
      2 => 'field_os2web_base_field_edi_tags',
      3 => 'field_os2web_base_field_intro',
      4 => 'field_os2web_base_field_kle_ref',
      5 => 'title',
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
  $field_groups['group_tekst|node|os2intra_base_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tekst|node|wiki|form';
  $field_group->group_name = 'group_tekst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wiki';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '15',
    'children' => array(
      0 => 'body',
      1 => 'field_os2web_base_field_kle_ref',
      2 => 'field_os2web_base_field_edi_tags',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tekst field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tekst|node|wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tilmelding|node|event|form';
  $field_group->group_name = 'group_tilmelding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Tilmelding',
    'weight' => '50',
    'children' => array(
      0 => 'field_os2web_webform_ref',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tilmelding field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tilmelding|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vejledning|field_collection_item|field_os2intra_base_vejledning|form';
  $field_group->group_name = 'group_vejledning';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_os2intra_base_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vejledning',
    'weight' => '0',
    'children' => array(
      0 => 'group_1',
      1 => 'group_2',
      2 => 'group_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Vejledning',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-vejledning field-group-div row',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vejledning|field_collection_item|field_os2intra_base_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vejledning|node|it_vejledning|form';
  $field_group->group_name = 'group_vejledning';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'it_vejledning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_itvejledning';
  $field_group->data = array(
    'label' => 'Vejledning',
    'weight' => '13',
    'children' => array(
      0 => 'field_os2intra_base_vejledning',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vejledning field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vejledning|node|it_vejledning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vigtigt|node|os2intra_message_notification|form';
  $field_group->group_name = 'group_vigtigt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2intra_message_notification';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'vigtigt',
    'weight' => '0',
    'children' => array(
      0 => 'group_besked',
      1 => 'group_planlaeg',
      2 => 'group_modtagere',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-vigtigt field-group-htabs',
      ),
    ),
  );
  $field_groups['group_vigtigt|node|os2intra_message_notification|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wiki|node|wiki|form';
  $field_group->group_name = 'group_wiki';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wiki',
    'weight' => '0',
    'children' => array(
      0 => 'group_indstillinger',
      1 => 'group_media',
      2 => 'group_relationer',
      3 => 'group_spotsnforms',
      4 => 'group_tekst',
      5 => 'group_afsnit',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-wiki field-group-htabs',
      ),
    ),
  );
  $field_groups['group_wiki|node|wiki|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(1);
  t(2);
  t(3);
  t('Afsnit');
  t('Begivenhed');
  t('Formular');
  t('ITVejledning');
  t('Indhold');
  t('Indstillinger');
  t('Kolonne 1');
  t('Kolonne 2');
  t('Kolonne 3');
  t('Media');
  t('Meta');
  t('Modtagere');
  t('Planlæg');
  t('Post');
  t('Referencer');
  t('Relationer');
  t('Row');
  t('Selvbetjeningslink');
  t('Spotbokse');
  t('Spotbokse / webform');
  t('Tekst');
  t('Tilmelding');
  t('Vejledning');
  t('Vigtig besked');
  t('vigtigt');
  t('wiki');

  return $field_groups;
}
