<?php
/**
 * @file
 * os2intra_organisationsgrupper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2intra_organisationsgrupper_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2intra_paragraphs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'OS2intra Paragraphs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
  $handler->display->display_options['style_options']['title_field'] = 'field_os2intra_paragraph_title';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Afsnit (field_os2intra_paragraph) */
  $handler->display->display_options['relationships']['field_os2intra_paragraph_node']['id'] = 'field_os2intra_paragraph_node';
  $handler->display->display_options['relationships']['field_os2intra_paragraph_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_os2intra_paragraph_node']['field'] = 'field_os2intra_paragraph_node';
  $handler->display->display_options['relationships']['field_os2intra_paragraph_node']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Field collection item: Afsnit */
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['id'] = 'field_os2intra_paragraph_text';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['table'] = 'field_data_field_os2intra_paragraph_text';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['field'] = 'field_os2intra_paragraph_text';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Overskrift */
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['id'] = 'field_os2intra_paragraph_title';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['table'] = 'field_data_field_os2intra_paragraph_title';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['field'] = 'field_os2intra_paragraph_title';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['field_api_classes'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_os2intra_paragraph_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
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
  $translatables['os2intra_paragraphs'] = array(
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
    t('field_os2intra_paragraph'),
    t('Field collection item ID'),
    t('.'),
    t(','),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['os2intra_paragraphs'] = $view;

  return $export;
}
