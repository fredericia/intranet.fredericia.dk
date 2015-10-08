<?php
/**
 * @file
 * commons_activity_streams.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function commons_activity_streams_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'commons_activity_streams_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'message';
  $view->human_name = 'Commons Activity Streams - Activity (Site-wide)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste aktiviteter';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No activity matched the filters you selected.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['id'] = 'field_target_nodes_target_id';
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['table'] = 'field_data_field_target_nodes';
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['field'] = 'field_target_nodes_target_id';
  /* Felt: Meddelelse: Rendered Meddelelse */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  /* Felt: Meddelelse: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time_ago_dynamic';
  /* Sorteringskriterie: Meddelelse: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Kontekstuelt filter: Meddelelse: Meddelelse ID */
  $handler->display->display_options['arguments']['mid']['id'] = 'mid';
  $handler->display->display_options['arguments']['mid']['table'] = 'message';
  $handler->display->display_options['arguments']['mid']['field'] = 'mid';
  $handler->display->display_options['arguments']['mid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['mid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['mid']['default_argument_type'] = 'commons_follow_message';
  $handler->display->display_options['arguments']['mid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['mid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['mid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['mid']['break_phrase'] = TRUE;
  /* Filterkriterie: Indholdsadgang: Adgang */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_access';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_target_nodes_target_id';
  /* Filterkriterie: Indhold: Udgivet eller administrator */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_target_nodes_target_id';
  /* Filterkriterie: Meddelelse: User Follow */
  $handler->display->display_options['filters']['cf_user_follow_message']['id'] = 'cf_user_follow_message';
  $handler->display->display_options['filters']['cf_user_follow_message']['table'] = 'message';
  $handler->display->display_options['filters']['cf_user_follow_message']['field'] = 'cf_user_follow_message';
  $handler->display->display_options['filters']['cf_user_follow_message']['value'] = '0';
  $handler->display->display_options['filters']['cf_user_follow_message']['exposed'] = TRUE;
  $handler->display->display_options['filters']['cf_user_follow_message']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['cf_user_follow_message']['expose']['label'] = 'Vis';
  $handler->display->display_options['filters']['cf_user_follow_message']['expose']['operator'] = 'cf_user_follow_message_op';
  $handler->display->display_options['filters']['cf_user_follow_message']['expose']['identifier'] = 'following';
  $handler->display->display_options['filters']['cf_user_follow_message']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['cf_user_follow_message']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['cf_user_follow_message']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filterkriterie: Meddelelse: Message category */
  $handler->display->display_options['filters']['type_category']['id'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['table'] = 'message';
  $handler->display->display_options['filters']['type_category']['field'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['value'] = array(
    'message_type' => 'message_type',
  );

  /* Display: Activity (Sidebar) */
  $handler = $view->new_display('panel_pane', 'Activity (Sidebar)', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['link_url'] = 'activity';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['id'] = 'field_target_nodes_target_id';
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['table'] = 'field_data_field_target_nodes';
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['field'] = 'field_target_nodes_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Meddelelse: Message category */
  $handler->display->display_options['filters']['type_category']['id'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['table'] = 'message';
  $handler->display->display_options['filters']['type_category']['field'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['value'] = array(
    'message_type' => 'message_type',
  );
  /* Filterkriterie: Indhold: Udgivet eller administrator */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_target_nodes_target_id';
  /* Filterkriterie: Indholdsadgang: Adgang */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_access';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_target_nodes_target_id';
  $handler->display->display_options['pane_category']['name'] = 'Commons';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Activity - Full view */
  $handler = $view->new_display('panel_pane', 'Activity - Full view', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Commons';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['commons_activity_streams_activity'] = array(
    t('Master'),
    t('Seneste aktiviteter'),
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
    t('No activity matched the filters you selected.'),
    t('Indhold entity refereret fra field_target_nodes'),
    t('Alle'),
    t('Vis'),
    t('Activity (Sidebar)'),
    t('Commons'),
    t('Activity - Full view'),
  );
  $export['commons_activity_streams_activity'] = $view;

  $view = new view();
  $view->name = 'commons_activity_streams_user_activity';
  $view->description = '';
  $view->tag = 'commons';
  $view->base_table = 'message';
  $view->human_name = 'Commons Activity Streams (User-specific activity)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Seneste aktiviteter';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Du har ikke nogen aktivitet på denne side 

';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['id'] = 'field_target_nodes_target_id';
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['table'] = 'field_data_field_target_nodes';
  $handler->display->display_options['relationships']['field_target_nodes_target_id']['field'] = 'field_target_nodes_target_id';
  /* Forbindelse: Indhold: Votes */
  $handler->display->display_options['relationships']['votingapi_vote']['id'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_vote']['field'] = 'votingapi_vote';
  $handler->display->display_options['relationships']['votingapi_vote']['relationship'] = 'field_target_nodes_target_id';
  $handler->display->display_options['relationships']['votingapi_vote']['label'] = 'Stemmer';
  $handler->display->display_options['relationships']['votingapi_vote']['votingapi'] = array(
    'value_type' => '',
    'tag' => 'commons_like',
  );
  $handler->display->display_options['relationships']['votingapi_vote']['current_user'] = 0;
  /* Felt: Meddelelse: Rendered Meddelelse */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_message';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  /* Felt: Meddelelse: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'message';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time_ago_dynamic';
  /* Felt: Indhold: Kommentarantal */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['relationship'] = 'field_target_nodes_target_id';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_wrapper_class'] = 'comment-count-indicator';
  /* Felt: Stemmer: Værdi */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_vote';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_vote';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['element_wrapper_class'] = 'voting-count-indicator';
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Sorteringskriterie: Meddelelse: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'message';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Kontekstuelt filter: Meddelelse: Bruger uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'message';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['user']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indholdsadgang: Adgang */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node_access';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'field_target_nodes_target_id';
  /* Filterkriterie: Indhold: Udgivet eller administrator */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_target_nodes_target_id';
  /* Filterkriterie: Meddelelse: Message category */
  $handler->display->display_options['filters']['type_category']['id'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['table'] = 'message';
  $handler->display->display_options['filters']['type_category']['field'] = 'type_category';
  $handler->display->display_options['filters']['type_category']['value'] = array(
    'message_type' => 'message_type',
  );

  /* Display: Activity (Sidebar) */
  $handler = $view->new_display('panel_pane', 'Activity (Sidebar)', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['pane_category']['name'] = 'Commons';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'user' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Message: User uid',
    ),
  );

  /* Display: Activity - Full view */
  $handler = $view->new_display('panel_pane', 'Activity - Full view', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Commons';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['commons_activity_streams_user_activity'] = array(
    t('Master'),
    t('Seneste aktiviteter'),
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
    t('Du har ikke nogen aktivitet på denne side 

'),
    t('Indhold entity refereret fra field_target_nodes'),
    t('Stemmer'),
    t('.'),
    t(','),
    t('Alle'),
    t('Activity (Sidebar)'),
    t('Commons'),
    t('Activity - Full view'),
  );
  $export['commons_activity_streams_user_activity'] = $view;

  return $export;
}
