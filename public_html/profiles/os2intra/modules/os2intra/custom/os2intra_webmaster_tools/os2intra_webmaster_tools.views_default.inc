<?php

/**
 * @file
 * os2intra_webmaster_tools.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2intra_webmaster_tools_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_adminviews_users_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'OS2web adminviews (Users)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OS2web adminviews (Users)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
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
    'counter' => 'counter',
    'name' => 'name',
    'status' => 'status',
    'mail' => 'mail',
    'og_user_node2' => 'og_user_node2',
    'field_os2intra_user_titles' => 'field_os2intra_user_titles',
    'field_os2intra_employee_id' => 'field_os2intra_employee_id',
    'edit_node' => 'edit_node',
    'access' => 'access',
    'field_os2intra_physical_location' => 'field_os2intra_physical_location',
    'field_os2intra_termination_date' => 'field_os2intra_termination_date',
    'field_os2intra_user_disable_date' => 'field_os2intra_user_disable_date',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
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
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_user_node2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_user_titles' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_employee_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_physical_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_termination_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2intra_user_disable_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['og_user_node2_target_id']['id'] = 'og_user_node2_target_id';
  $handler->display->display_options['relationships']['og_user_node2_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_user_node2_target_id']['field'] = 'og_user_node2_target_id';
  $handler->display->display_options['relationships']['og_user_node2_target_id']['label'] = 'Bro til afdeling';
  /* Felt: Global: View resultattæller */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Felt: Bruger: Active status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Felt: Bruger: Gruppemedlemskab */
  $handler->display->display_options['fields']['og_user_node2']['id'] = 'og_user_node2';
  $handler->display->display_options['fields']['og_user_node2']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node2']['field'] = 'og_user_node2';
  /* Felt: Bruger: Jobtitel */
  $handler->display->display_options['fields']['field_os2intra_user_titles']['id'] = 'field_os2intra_user_titles';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['table'] = 'field_data_field_os2intra_user_titles';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['field'] = 'field_os2intra_user_titles';
  /* Felt: Bruger: MedarbejderID */
  $handler->display->display_options['fields']['field_os2intra_employee_id']['id'] = 'field_os2intra_employee_id';
  $handler->display->display_options['fields']['field_os2intra_employee_id']['table'] = 'field_data_field_os2intra_employee_id';
  $handler->display->display_options['fields']['field_os2intra_employee_id']['field'] = 'field_os2intra_employee_id';
  $handler->display->display_options['fields']['field_os2intra_employee_id']['label'] = 'ID';
  /* Felt: Bruger: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Felt: Bruger: Seneste tilgang */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['label'] = '';
  $handler->display->display_options['fields']['access']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Felt: Felt: Fysisk lokation */
  $handler->display->display_options['fields']['field_os2intra_physical_location']['id'] = 'field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['table'] = 'field_data_field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['field'] = 'field_os2intra_physical_location';
  /* Sorteringskriterie: Bruger: Seneste tilgang */
  $handler->display->display_options['sorts']['access']['id'] = 'access';
  $handler->display->display_options['sorts']['access']['table'] = 'users';
  $handler->display->display_options['sorts']['access']['field'] = 'access';
  $handler->display->display_options['sorts']['access']['order'] = 'DESC';
  /* Filterkriterie: Bruger: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Aktiv';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Realname: Navn */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
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
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'og_user_node2_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Afdeling (indeholder)';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: E-mail */
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
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: Navn (rå data) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'AD-ID';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'adid';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: MedarbejderID (field_os2intra_employee_id) */
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['id'] = 'field_os2intra_employee_id_value';
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['table'] = 'field_data_field_os2intra_employee_id';
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['field'] = 'field_os2intra_employee_id_value';
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['expose']['operator_id'] = 'field_os2intra_employee_id_value_op';
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['expose']['label'] = 'Medarbejder ID';
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['expose']['operator'] = 'field_os2intra_employee_id_value_op';
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['expose']['identifier'] = 'field_os2intra_employee_id_value';
  $handler->display->display_options['filters']['field_os2intra_employee_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: Navn */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
  );

  /* Display: Brugere */
  $handler = $view->new_display('page', 'Brugere', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Global: View resultattæller */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Felt: Bruger: Active status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Felt: Bruger: Gruppemedlemskab */
  $handler->display->display_options['fields']['og_user_node2']['id'] = 'og_user_node2';
  $handler->display->display_options['fields']['og_user_node2']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node2']['field'] = 'og_user_node2';
  /* Felt: Bruger: Jobtitel */
  $handler->display->display_options['fields']['field_os2intra_user_titles']['id'] = 'field_os2intra_user_titles';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['table'] = 'field_data_field_os2intra_user_titles';
  $handler->display->display_options['fields']['field_os2intra_user_titles']['field'] = 'field_os2intra_user_titles';
  /* Felt: Bruger: MedarbejderID */
  $handler->display->display_options['fields']['field_os2intra_employee_id']['id'] = 'field_os2intra_employee_id';
  $handler->display->display_options['fields']['field_os2intra_employee_id']['table'] = 'field_data_field_os2intra_employee_id';
  $handler->display->display_options['fields']['field_os2intra_employee_id']['field'] = 'field_os2intra_employee_id';
  $handler->display->display_options['fields']['field_os2intra_employee_id']['label'] = 'ID';
  /* Felt: Bruger: Link to edit user */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Felt: Bruger: Seneste tilgang */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['label'] = '';
  $handler->display->display_options['fields']['access']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['access']['date_format'] = 'short';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Felt: Felt: Fysisk lokation */
  $handler->display->display_options['fields']['field_os2intra_physical_location']['id'] = 'field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['table'] = 'field_data_field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['field'] = 'field_os2intra_physical_location';
  /* Felt: Bruger: os2intra_termination_date */
  $handler->display->display_options['fields']['field_os2intra_termination_date']['id'] = 'field_os2intra_termination_date';
  $handler->display->display_options['fields']['field_os2intra_termination_date']['table'] = 'field_data_field_os2intra_termination_date';
  $handler->display->display_options['fields']['field_os2intra_termination_date']['field'] = 'field_os2intra_termination_date';
  $handler->display->display_options['fields']['field_os2intra_termination_date']['label'] = 'Fratræder';
  $handler->display->display_options['fields']['field_os2intra_termination_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Felt: Bruger: Deactivation date */
  $handler->display->display_options['fields']['field_os2intra_user_disable_date']['id'] = 'field_os2intra_user_disable_date';
  $handler->display->display_options['fields']['field_os2intra_user_disable_date']['table'] = 'field_data_field_os2intra_user_disable_date';
  $handler->display->display_options['fields']['field_os2intra_user_disable_date']['field'] = 'field_os2intra_user_disable_date';
  $handler->display->display_options['fields']['field_os2intra_user_disable_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['path'] = 'admin/people/os2web-adminpages-users';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Brugere';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Brugere u afdeling */
  $handler = $view->new_display('page', 'Brugere u afdeling', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Aktiv';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Realname: Navn */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
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
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: Bruger ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'og_user_node2_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Afdeling (indeholder)';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: E-mail */
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
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: Navn (rå data) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'AD-ID';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'adid';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filterkriterie: Bruger: Roller */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roller';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filterkriterie: Bruger: Gruppemedlemskab (og_user_node2) */
  $handler->display->display_options['filters']['og_user_node2_target_id']['id'] = 'og_user_node2_target_id';
  $handler->display->display_options['filters']['og_user_node2_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_user_node2_target_id']['field'] = 'og_user_node2_target_id';
  $handler->display->display_options['filters']['og_user_node2_target_id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'admin/people/os2web-adminpages-users-no-department';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Brugere u afdeling';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['os2web_adminviews_users_'] = array(
    t('Master'),
    t('OS2web adminviews (Users)'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
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
    t('Bro til afdeling'),
    t('Navn'),
    t('Active status'),
    t('E-mail'),
    t('Gruppemedlemskab'),
    t('Jobtitel'),
    t('ID'),
    t('Link to edit user'),
    t('Fysisk lokation'),
    t('Aktiv'),
    t('Afdeling (indeholder)'),
    t('AD-ID'),
    t('Medarbejder ID'),
    t('Brugere'),
    t('Fratræder'),
    t('Deactivation date'),
    t('Brugere u afdeling'),
    t('Roller'),
  );
  $export['os2web_adminviews_users_'] = $view;

  return $export;
}
