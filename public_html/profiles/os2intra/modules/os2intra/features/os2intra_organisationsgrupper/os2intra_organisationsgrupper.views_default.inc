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
  $view->name = 'os2intra_afdelingsindhold';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Afdelingsindhold';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Afdelingsindhold';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = 'Indhold fra %1';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Afdelingsindhold */
  $handler = $view->new_display('page', 'Afdelingsindhold', 'page');
  $handler->display->display_options['path'] = 'node/%/afdelingsindhold';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Afdelingsindhold';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Afdelingsværktøjer */
  $handler = $view->new_display('page', 'Afdelingsværktøjer', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Afdelingsværktøjer */
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['id'] = 'field_os2intra_dept_tools';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['table'] = 'field_data_field_os2intra_dept_tools';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['field'] = 'field_os2intra_dept_tools';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 værktøjer';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'og';
  $handler->display->display_options['path'] = 'node/%/tools';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Værktøjer';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['os2intra_afdelingsindhold'] = array(
    t('Master'),
    t('Afdelingsindhold'),
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
    t('OG membership from node'),
    t('Title'),
    t('Alle'),
    t('Indhold fra %1'),
    t('Afdelingsværktøjer'),
    t('%1 værktøjer'),
  );
  $export['os2intra_afdelingsindhold'] = $view;

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
