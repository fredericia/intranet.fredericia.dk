<?php
/**
 * @file
 * os2intra_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2intra_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'brugers_indhold';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Brugers indhold';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Se indhold';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Flags: papirkurv */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'papirkurv';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Gruppe / Afdeling */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Opdateret';
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['last_updated']['second_date_format'] = 'long';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['uid']['title'] = 'Indhold med %1 som ejer';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/indhold';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Indhold';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['brugers_indhold'] = array(
    t('Master'),
    t('Se indhold'),
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
    t('flag'),
    t('- Choose an operation -'),
    t('Type'),
    t('Title'),
    t('Gruppe / Afdeling'),
    t('Opdateret'),
    t('Alle'),
    t('Indhold med %1 som ejer'),
    t('Page'),
  );
  $export['brugers_indhold'] = $view;

  $view = new view();
  $view->name = 'forfatters_indhold';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Forfatters indhold';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Tilbage';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'changed' => 'changed',
    'created' => 'created',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
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
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettet';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'arrangement' => 'arrangement',
    'forum_post' => 'forum_post',
    'document' => 'document',
    'hearing' => 'hearing',
    'hearing_responses' => 'hearing_responses',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'forfatters-indhold';
  $handler->display->display_options['menu']['title'] = 'Indhold';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'changed' => 'changed',
    'created' => 'created',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Vælg';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettet';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Ingen indhold at vise</p>';
  $handler->display->display_options['empty']['area']['format'] = 'fuld_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Navn';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Gruppe / Afdeling */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = '';
  $handler->display->display_options['fields']['last_updated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'short';
  $handler->display->display_options['fields']['last_updated']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'post' => 'post',
    'os2intra_base_page' => 'os2intra_base_page',
    'wiki' => 'wiki',
    'os2intra_referat' => 'os2intra_referat',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    17 => 0,
    15 => 0,
    16 => 0,
    14 => 0,
    18 => 0,
    10 => 0,
    9 => 0,
    5 => 0,
    3 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Forfatter uid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['forfatters_indhold'] = array(
    t('Master'),
    t('%1'),
    t('mere'),
    t('Udfør'),
    t('Tilbage'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('author'),
    t('Type'),
    t('Updated date'),
    t('Oprettet'),
    t('Name'),
    t('Alle'),
    t('Page'),
    t('more'),
    t('Blok'),
    t('Vælg'),
    t('- Choose an operation -'),
    t('Content pane'),
    t('<p>Ingen indhold at vise</p>'),
    t('Navn'),
    t('Udgivet'),
    t('View panes'),
  );
  $export['forfatters_indhold'] = $view;

  $view = new view();
  $view->name = 'os2intra_brugervisning';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'OS2intra Brugervisning';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['id'] = 'field_os2intra_physical_location_target_id';
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['table'] = 'field_data_field_os2intra_physical_location';
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['field'] = 'field_os2intra_physical_location_target_id';
  $handler->display->display_options['relationships']['field_os2intra_physical_location_target_id']['label'] = 'Ord i ordforråd entity refereret fra field_os2intra_physical_location';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_os2intra_physical_location_target_id';
  $handler->display->display_options['relationships']['parent']['label'] = 'Overordnet element';
  /* Field: Field: Billede */
  $handler->display->display_options['fields']['field_os2intra_image']['id'] = 'field_os2intra_image';
  $handler->display->display_options['fields']['field_os2intra_image']['table'] = 'field_data_field_os2intra_image';
  $handler->display->display_options['fields']['field_os2intra_image']['field'] = 'field_os2intra_image';
  $handler->display->display_options['fields']['field_os2intra_image']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2intra_image']['element_class'] = 'pull-left profilbillede';
  $handler->display->display_options['fields']['field_os2intra_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2intra_image']['settings'] = array(
    'image_style' => 'profilbillede',
    'image_link' => '',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['element_type'] = 'h2';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Field: User: Jobtitel */
  $handler->display->display_options['fields']['field_os2intra_user_titles']['id'] = 'field_os2intra_user_titles';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['table'] = 'field_data_field_os2intra_user_titles';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['field'] = 'field_os2intra_user_titles';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_user_titles']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_user_titles']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Gruppemedlemskab */
  $handler->display->display_options['fields']['og_user_node2']['id'] = 'og_user_node2';
  $handler->display->display_options['fields']['og_user_node2']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node2']['field'] = 'og_user_node2';
  $handler->display->display_options['fields']['og_user_node2']['label'] = '';
  $handler->display->display_options['fields']['og_user_node2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_user_node2']['alter']['text'] = ' -  [og_user_node2]';
  $handler->display->display_options['fields']['og_user_node2']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_user_node2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_user_node2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_user_node2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['og_user_node2']['delta_offset'] = '0';
  /* Field: Field: Fysisk lokation */
  $handler->display->display_options['fields']['field_os2intra_physical_location']['id'] = 'field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['table'] = 'field_data_field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['field'] = 'field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_physical_location']['alter']['text'] = ' - [field_os2intra_physical_location]';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_physical_location']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1], [field_os2intra_physical_location]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['empty'] = '- [field_os2intra_physical_location]';
  $handler->display->display_options['fields']['name_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = TRUE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '<i class="fa fa-envelope"></i> [mail]';
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['link_class'] = 'btn btn-default btn-lg';
  $handler->display->display_options['fields']['mail']['element_type'] = 'div';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Telefon nummer */
  $handler->display->display_options['fields']['field_os2intra_phone']['id'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['table'] = 'field_data_field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['field'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_phone']['alter']['text'] = '<i class="fa fa-phone"></i> [field_os2intra_phone]';
  $handler->display->display_options['fields']['field_os2intra_phone']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_phone']['alter']['path'] = 'tel:[field_os2intra_phone]';
  $handler->display->display_options['fields']['field_os2intra_phone']['alter']['link_class'] = 'btn btn-default btn-lg';
  $handler->display->display_options['fields']['field_os2intra_phone']['element_label_colon'] = FALSE;
  /* Field: User: Mobil nummer */
  $handler->display->display_options['fields']['field_os2intra_mobile']['id'] = 'field_os2intra_mobile';
  $handler->display->display_options['fields']['field_os2intra_mobile']['table'] = 'field_data_field_os2intra_mobile';
  $handler->display->display_options['fields']['field_os2intra_mobile']['field'] = 'field_os2intra_mobile';
  $handler->display->display_options['fields']['field_os2intra_mobile']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_mobile']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_mobile']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_mobile']['alter']['text'] = '<i class="fa fa-mobile"></i> [field_os2intra_mobile]';
  $handler->display->display_options['fields']['field_os2intra_mobile']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_mobile']['alter']['path'] = 'tel:[field_os2intra_mobile]';
  $handler->display->display_options['fields']['field_os2intra_mobile']['alter']['link_class'] = 'btn btn-default btn-lg';
  $handler->display->display_options['fields']['field_os2intra_mobile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_mobile']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="btn-group btn-group-sm contact" role="group" aria-label="Kontakt via email eller telefon">
[mail] [field_os2intra_phone] [field_os2intra_mobile]
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: User: Kompetencer */
  $handler->display->display_options['fields']['field_os2intra_user_competences']['id'] = 'field_os2intra_user_competences';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['table'] = 'field_data_field_os2intra_user_competences';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['field'] = 'field_os2intra_user_competences';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_user_competences']['alter']['link_class'] = 'btn btn-success btn-xs';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['element_class'] = 'competences';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_user_competences']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_user_competences']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_os2intra_user_competences']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2intra_user_competences']['separator'] = ' ';
  /* Field: User: Interesser */
  $handler->display->display_options['fields']['field_os2intra_user_inter']['id'] = 'field_os2intra_user_inter';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['table'] = 'field_data_field_os2intra_user_inter';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['field'] = 'field_os2intra_user_inter';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_user_inter']['alter']['link_class'] = 'btn btn-info btn-xs';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['element_class'] = 'interests';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_user_inter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_user_inter']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_os2intra_user_inter']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2intra_user_inter']['separator'] = '';
  /* Field: User: Bio */
  $handler->display->display_options['fields']['field_os2intra_user_bio']['id'] = 'field_os2intra_user_bio';
  $handler->display->display_options['fields']['field_os2intra_user_bio']['table'] = 'field_data_field_os2intra_user_bio';
  $handler->display->display_options['fields']['field_os2intra_user_bio']['field'] = 'field_os2intra_user_bio';
  $handler->display->display_options['fields']['field_os2intra_user_bio']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_user_bio']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2intra_user_bio']['element_class'] = 'clearfix bio';
  $handler->display->display_options['fields']['field_os2intra_user_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_user_bio']['element_default_classes'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Bruger: Uid',
    ),
  );
  $translatables['os2intra_brugervisning'] = array(
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
    t('Ord i ordforråd entity refereret fra field_os2intra_physical_location'),
    t('Overordnet element'),
    t(' -  [og_user_node2]'),
    t(' - [field_os2intra_physical_location]'),
    t(' - [name_1], [field_os2intra_physical_location]'),
    t('- [field_os2intra_physical_location]'),
    t('<i class="fa fa-envelope"></i> [mail]'),
    t('<i class="fa fa-phone"></i> [field_os2intra_phone]'),
    t('<i class="fa fa-mobile"></i> [field_os2intra_mobile]'),
    t('<div class="btn-group btn-group-sm contact" role="group" aria-label="Kontakt via email eller telefon">
[mail] [field_os2intra_phone] [field_os2intra_mobile]
</div>'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['os2intra_brugervisning'] = $view;

  $view = new view();
  $view->name = 'telefonbogen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Telefonbogen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Telefonbogen';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Navn';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Telefon nummer */
  $handler->display->display_options['fields']['field_os2intra_phone']['id'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['table'] = 'field_data_field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['field'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Telefon nummer (field_os2intra_phone) */
  $handler->display->display_options['filters']['field_os2intra_phone_value']['id'] = 'field_os2intra_phone_value';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['table'] = 'field_data_field_os2intra_phone';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['field'] = 'field_os2intra_phone_value';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['operator_id'] = 'field_os2intra_phone_value_op';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['label'] = 'Telefon nummer';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['operator'] = 'field_os2intra_phone_value_op';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['identifier'] = 'field_os2intra_phone_value';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'realname' => 'realname',
    'mail' => 'mail',
    'og_org_ref' => 'og_org_ref',
    'field_os2intra_phone' => 'field_os2intra_phone',
    'field_os2intra_mobile' => 'field_os2intra_mobile',
  );
  $handler->display->display_options['style_options']['default'] = 'realname';
  $handler->display->display_options['style_options']['info'] = array(
    'realname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_org_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_phone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_mobile' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['label'] = 'Navn';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['empty'] = '<i>Ikke angivet</i>';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['empty'] = '<i>Ikke angivet</i>';
  /* Field: User: Gruppemedlemskab */
  $handler->display->display_options['fields']['og_user_node2']['id'] = 'og_user_node2';
  $handler->display->display_options['fields']['og_user_node2']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node2']['field'] = 'og_user_node2';
  $handler->display->display_options['fields']['og_user_node2']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['og_user_node2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_user_node2']['empty'] = '<i>Ikke angivet</i>';
  $handler->display->display_options['fields']['og_user_node2']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node2']['delta_offset'] = '0';
  /* Field: User: Telefon nummer */
  $handler->display->display_options['fields']['field_os2intra_phone']['id'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['table'] = 'field_data_field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['field'] = 'field_os2intra_phone';
  $handler->display->display_options['fields']['field_os2intra_phone']['label'] = 'Tlf. nr.';
  $handler->display->display_options['fields']['field_os2intra_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_phone']['empty'] = '<i>Ikke angivet</i>';
  $handler->display->display_options['fields']['field_os2intra_phone']['type'] = 'text_plain';
  /* Field: User: Mobil nummer */
  $handler->display->display_options['fields']['field_os2intra_mobile']['id'] = 'field_os2intra_mobile';
  $handler->display->display_options['fields']['field_os2intra_mobile']['table'] = 'field_data_field_os2intra_mobile';
  $handler->display->display_options['fields']['field_os2intra_mobile']['field'] = 'field_os2intra_mobile';
  $handler->display->display_options['fields']['field_os2intra_mobile']['label'] = 'Mobil tlf.';
  $handler->display->display_options['fields']['field_os2intra_mobile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_mobile']['empty'] = '<i>Ikke angivet</i>';
  $handler->display->display_options['fields']['field_os2intra_mobile']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Realname: Real name */
  $handler->display->display_options['sorts']['realname']['id'] = 'realname';
  $handler->display->display_options['sorts']['realname']['table'] = 'realname';
  $handler->display->display_options['sorts']['realname']['field'] = 'realname';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'allwords';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Telefon nummer (field_os2intra_phone) */
  $handler->display->display_options['filters']['field_os2intra_phone_value']['id'] = 'field_os2intra_phone_value';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['table'] = 'field_data_field_os2intra_phone';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['field'] = 'field_os2intra_phone_value';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2intra_phone_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['operator_id'] = 'field_os2intra_phone_value_op';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['label'] = 'Telefon nummer';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['operator'] = 'field_os2intra_phone_value_op';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['identifier'] = 'field_os2intra_phone_value';
  $handler->display->display_options['filters']['field_os2intra_phone_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'telefonbogen';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['telefonbogen'] = array(
    t('Master'),
    t('Telefonbogen'),
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
    t('Navn'),
    t('Telefon nummer'),
    t('E-mail'),
    t('Page'),
    t('<i>Ikke angivet</i>'),
    t('Afdeling'),
    t('Tlf. nr.'),
    t('Mobil tlf.'),
    t('Block'),
  );
  $export['telefonbogen'] = $view;

  return $export;
}
