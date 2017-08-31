<?php
/**
 * @file
 * os2intra_bi.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2intra_bi_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2intra_bi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'os2intra_bi';
  $view->human_name = 'OS2intra BI';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer os2intra_bi content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'title' => 'title',
    'type' => 'type',
    'status' => 'status',
    'modified_1' => 'modified_1',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = 'type';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'modified_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: OS2intra BI: BI Plugin ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: OS2intra BI: BI plugin title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'os2intra-bi/[id]';
  /* Field: OS2intra BI: BI Plugin type (bundle) */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  $handler->display->display_options['fields']['type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['path'] = 'admin/structure/os2intra-bi/manage/[type]';
  /* Field: OS2intra BI: BI plugin status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* Field: OS2intra BI: BI plugin modified timestamp */
  $handler->display->display_options['fields']['modified_1']['id'] = 'modified_1';
  $handler->display->display_options['fields']['modified_1']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['modified_1']['field'] = 'modified';
  $handler->display->display_options['fields']['modified_1']['label'] = 'Fil sidst ændret';
  $handler->display->display_options['fields']['modified_1']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['modified_1']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/os2intra-bi/[id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'os2intra-bi/[id]/delete';
  /* Contextual filter: OS2intra BI: BI Plugin type (bundle) */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'os2intra_bi';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['exception']['title'] = 'alle';
  $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['title'] = 'Viser %1 OS2intra plugins';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['type']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/structure/os2intra-bi/types/%';
  $handler->display->display_options['menu']['title'] = 'OS2intra BI';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['os2intra_bi'] = array(
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
    t('.'),
    t('Title'),
    t('Type'),
    t('Status'),
    t('Fil sidst ændret'),
    t('Edit'),
    t('Delete'),
    t('alle'),
    t('Viser %1 OS2intra plugins'),
    t('Page'),
  );
  $export['os2intra_bi'] = $view;

  $view = new view();
  $view->name = 'os2intra_bi_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'OS2intra BI block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OS2intra BI';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: User Opus Roles (os2intra_users_opus_roles) */
  $handler->display->display_options['relationships']['os2intra_users_opus_roles_tid']['id'] = 'os2intra_users_opus_roles_tid';
  $handler->display->display_options['relationships']['os2intra_users_opus_roles_tid']['table'] = 'field_data_os2intra_users_opus_roles';
  $handler->display->display_options['relationships']['os2intra_users_opus_roles_tid']['field'] = 'os2intra_users_opus_roles_tid';
  $handler->display->display_options['relationships']['os2intra_users_opus_roles_tid']['label'] = 'term fra os2intra_users_opus_roles';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_os2intra_bi_opus_roles_os2intra_bi']['id'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['relationships']['reverse_os2intra_bi_opus_roles_os2intra_bi']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_os2intra_bi_opus_roles_os2intra_bi']['field'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['relationships']['reverse_os2intra_bi_opus_roles_os2intra_bi']['relationship'] = 'os2intra_users_opus_roles_tid';
  $handler->display->display_options['relationships']['reverse_os2intra_bi_opus_roles_os2intra_bi']['label'] = 'OS2intra BI refererer til Ord i ordforråd fra os2intra_bi_opus_roles';
  /* Field: OS2intra BI: BI Plugin ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: OS2intra BI: BI plugin title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'os2intra-bi/[id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: OS2intra BI: Import file */
  $handler->display->display_options['fields']['os2intra_bi_import_file']['id'] = 'os2intra_bi_import_file';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['table'] = 'field_data_os2intra_bi_import_file';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['field'] = 'os2intra_bi_import_file';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['relationship'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['label'] = '';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['os2intra_bi_import_file']['type'] = 'tablefield_preview';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Full */
  $handler = $view->new_display('block', 'Full', 'block');

  /* Display: Titles */
  $handler = $view->new_display('block', 'Titles', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'OS2intra BI';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: OS2intra BI: BI Plugin ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: OS2intra BI: BI plugin title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'os2intra_bi';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'os2intra-bi/[id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: OS2intra BI: Import file */
  $handler->display->display_options['fields']['os2intra_bi_import_file']['id'] = 'os2intra_bi_import_file';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['table'] = 'field_data_os2intra_bi_import_file';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['field'] = 'os2intra_bi_import_file';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['relationship'] = 'reverse_os2intra_bi_opus_roles_os2intra_bi';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['label'] = '';
  $handler->display->display_options['fields']['os2intra_bi_import_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['os2intra_bi_import_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['os2intra_bi_import_file']['type'] = 'tablefield_preview';
  $translatables['os2intra_bi_block'] = array(
    t('Master'),
    t('OS2intra BI'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term fra os2intra_users_opus_roles'),
    t('OS2intra BI refererer til Ord i ordforråd fra os2intra_bi_opus_roles'),
    t('.'),
    t(','),
    t('Full'),
    t('Titles'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« first'),
    t('‹'),
    t('›'),
    t('last »'),
  );
  $export['os2intra_bi_block'] = $view;

  return $export;
}
