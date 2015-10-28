<?php
/**
 * @file
 * os2intra_panels.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2intra_panels_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2intra_node_panes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2intra Node Panes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Spotbokse */
  $handler = $view->new_display('panel_pane', 'Spotbokse', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Spotbokse */
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['id'] = 'field_os2intra_base_spotboxes';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['table'] = 'field_data_field_os2intra_base_spotboxes';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['field'] = 'field_os2intra_base_spotboxes';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['separator'] = '';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['field_api_classes'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Kategorier */
  $handler = $view->new_display('panel_pane', 'Kategorier', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['link_class'] = 'btn btn-default btn-xs';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = '';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'os2web_base_tax_site_structure' => 0,
    'os2web_taxonomies_tax_comittee' => 0,
    'os2web_taxonomies_tax_places' => 0,
    'os2intra_canteen' => 0,
    'os2web_taxonomies_tax_kle' => 0,
    'os2web_taxonomies_tax_org' => 0,
    'os2web_taxonomies_tax_politics' => 0,
    'os2web_taxonomies_tax_portal_cat' => 0,
    'os2web_taxonomies_tax_editor_tag' => 0,
    'tags' => 0,
    'topics' => 0,
    'os2web_taxonomies_tax_user_pos' => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Afdeling */
  $handler = $view->new_display('panel_pane', 'Afdeling', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Afdeling */
  $handler->display->display_options['fields']['field_os2intra_afdeling']['id'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['field'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_afdeling']['alter']['link_class'] = 'btn btn-quinary btn-lg';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_afdeling']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Gruppe */
  $handler = $view->new_display('panel_pane', 'Gruppe', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );

  /* Display: Adresse */
  $handler = $view->new_display('panel_pane', 'Adresse', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Adresse';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['id'] = 'field_os2intra_physical_location_target_id';
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['table'] = 'field_data_field_os2intra_physical_location';
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['field'] = 'field_os2intra_physical_location_target_id';
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['label'] = 'Ord i ordforråd entity referenced from field_os2intra_physical_location';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: GIS adresse */
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['id'] = 'field_os2web_taxonomies_address';
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['table'] = 'field_data_field_os2web_taxonomies_address';
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['field'] = 'field_os2web_taxonomies_address';
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['relationship'] = 'field_os2intra_physical_location_target_id';
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_taxonomies_address']['field_api_classes'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['os2intra_node_panes'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Alle'),
    t('Spotbokse'),
    t('View panes'),
    t('Kategorier'),
    t('Afdeling'),
    t('Gruppe'),
    t('Adresse'),
    t('Ord i ordforråd entity referenced from field_os2intra_physical_location'),
  );
  $export['os2intra_node_panes'] = $view;

  return $export;
}
