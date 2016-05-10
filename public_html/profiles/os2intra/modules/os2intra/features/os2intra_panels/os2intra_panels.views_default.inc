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
  $view->name = 'os2intra_afdlingsorganisation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2intra Afdlingsorganisation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'nid';
  $handler->display->display_options['style_options']['parent_field'] = 'nid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'os2intra_organisation_tax' => 'os2intra_organisation_tax',
    'os2web_base_tax_site_structure' => 0,
    'os2web_taxonomies_tax_comittee' => 0,
    'begivenhedstyper' => 0,
    'user_hobbies' => 0,
    'user_jobtitle' => 0,
    'user_skills' => 0,
    'os2web_taxonomies_tax_places' => 0,
    'indlaegstyper' => 0,
    'os2intra_canteen' => 0,
    'os2web_taxonomies_tax_kle' => 0,
    'os2web_taxonomies_tax_org' => 0,
    'os2web_base_tax_promoteto' => 0,
    'os2web_taxonomies_tax_politics' => 0,
    'os2web_taxonomies_tax_portal_cat' => 0,
    'os2web_taxonomies_tax_editor_tag' => 0,
    'tags' => 0,
    'topics' => 0,
    'os2web_taxonomies_tax_user_pos' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['nid']['label'] = 'indhold m overterm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'afd-[field_os2intra_afdeling] nid-[nid] org2-[field_os2intra_organisation] org2-[field_os2intra_organisation_1]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_os2intra_organisation']['id'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['field'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_organisation']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_os2intra_organisation']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['id'] = 'field_os2intra_organisation_1';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['field'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'includeable';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'os2intra_organisation_tax' => 'os2intra_organisation_tax',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2intra_org_group_unit' => 'os2intra_org_group_unit',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'os2-organisation-tree';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_os2intra_organisation']['id'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['field'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_organisation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_organisation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_organisation']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_os2intra_organisation']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'includeable';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: rep nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'rep nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2intra_org_group_unit' => 'os2intra_org_group_unit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID (med dybde)',
    ),
  );
  $translatables['os2intra_afdlingsorganisation'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term'),
    t('Parent'),
    t('indhold m overterm'),
    t('Nid'),
    t('Organisation'),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('.'),
    t('View panes'),
  );
  $export['os2intra_afdlingsorganisation'] = $view;

  $view = new view();
  $view->name = 'os2intra_gruppe_indhold';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'OS2intra gruppe indhold';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Gem';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorter efter';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There is no content in this group.';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Content: Afdelingsværktøjer */
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['id'] = 'field_os2intra_dept_tools';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['table'] = 'field_data_field_os2intra_dept_tools';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['field'] = 'field_os2intra_dept_tools';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_os2intra_dept_tools']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'post' => 'post',
    'wiki' => 'wiki',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2intra_org_group_unit' => 'os2intra_org_group_unit',
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
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Kommende aktiviteter */
  $handler = $view->new_display('panel_pane', 'Kommende aktiviteter', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommende Aktiviteter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'list';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dato -  start date (field_os2intra_date) */
  $handler->display->display_options['sorts']['field_os2intra_date_value']['id'] = 'field_os2intra_date_value';
  $handler->display->display_options['sorts']['field_os2intra_date_value']['table'] = 'field_data_field_os2intra_date';
  $handler->display->display_options['sorts']['field_os2intra_date_value']['field'] = 'field_os2intra_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Dato - end date (field_os2intra_date:value2) */
  $handler->display->display_options['filters']['field_os2intra_date_value2']['id'] = 'field_os2intra_date_value2';
  $handler->display->display_options['filters']['field_os2intra_date_value2']['table'] = 'field_data_field_os2intra_date';
  $handler->display->display_options['filters']['field_os2intra_date_value2']['field'] = 'field_os2intra_date_value2';
  $handler->display->display_options['filters']['field_os2intra_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2intra_date_value2']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Afdelingsværktøjer */
  $handler = $view->new_display('panel_pane', 'Afdelingsværktøjer', 'panel_pane_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['os2intra_gruppe_indhold'] = array(
    t('Defaults'),
    t('more'),
    t('Gem'),
    t('Gendan'),
    t('Sorter efter'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There is no content in this group.'),
    t('OG membership from node'),
    t('All'),
    t('Type'),
    t('Content pane'),
    t('View panes'),
    t('Kommende aktiviteter'),
    t('Kommende Aktiviteter'),
    t('Afdelingsværktøjer'),
    t('Alle'),
  );
  $export['os2intra_gruppe_indhold'] = $view;

  $view = new view();
  $view->name = 'os2intra_gruppe_medlemmer';
  $view->description = 'Newest group members.';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = 'OS2intra gruppe medlemmer';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'user';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  /* Sort criterion: OG membership: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 members';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Gruppens medlemmer */
  $handler = $view->new_display('panel_pane', 'Gruppens medlemmer', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'OS2intra Gruppe medlemmer';
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Afdelingens medlemmer */
  $handler = $view->new_display('panel_pane', 'Afdelingens medlemmer', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = 'Medarbejdere i %1';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['pane_title'] = 'OS2intra Afdelings medlemmer';
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $translatables['os2intra_gruppe_medlemmer'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('OG membership from user'),
    t('All'),
    t('%1 members'),
    t('Block'),
    t('Gruppens medlemmer'),
    t('OS2intra Gruppe medlemmer'),
    t('OS2intra'),
    t('Afdelingens medlemmer'),
    t('Alle'),
    t('Medarbejdere i %1'),
    t('OS2intra Afdelings medlemmer'),
  );
  $export['os2intra_gruppe_medlemmer'] = $view;

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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Spotbokse */
  $handler = $view->new_display('panel_pane', 'Spotbokse', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_os2intra_base_spotboxes_node']['id'] = 'reverse_field_os2intra_base_spotboxes_node';
  $handler->display->display_options['relationships']['reverse_field_os2intra_base_spotboxes_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_os2intra_base_spotboxes_node']['field'] = 'reverse_field_os2intra_base_spotboxes_node';
  $handler->display->display_options['relationships']['reverse_field_os2intra_base_spotboxes_node']['label'] = 'Indhold refererer til Indhold fra field_os2intra_base_spotboxes';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spotbokse */
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['id'] = 'field_os2intra_base_spotboxes';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['table'] = 'field_data_field_os2intra_base_spotboxes';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['field'] = 'field_os2intra_base_spotboxes';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2intra_base_spotboxes']['element_label_type'] = '0';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_os2intra_base_spotboxes_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
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
    'os2intra_organisation_tax' => 0,
    'os2web_taxonomies_tax_politics' => 0,
    'os2web_taxonomies_tax_portal_cat' => 0,
    'os2web_taxonomies_tax_editor_tag' => 0,
    'tags' => 0,
    'topics' => 0,
    'os2web_taxonomies_tax_user_pos' => 0,
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ovenstående afdeling';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_os2intra_afdeling']['id'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['field'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_afdeling']['alter']['link_class'] = 'btn btn-quinary btn-lg';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['element_label_colon'] = FALSE;
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
  /* Field: Content: Gruppe / Afdeling */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'view_mode' => 'list',
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
  /* Field: Field: Fysisk lokation */
  $handler->display->display_options['fields']['field_os2intra_physical_location']['id'] = 'field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['table'] = 'field_data_field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['field'] = 'field_os2intra_physical_location';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_physical_location']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_os2intra_physical_location']['settings'] = array(
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

  /* Display: Filer */
  $handler = $view->new_display('panel_pane', 'Filer', 'panel_pane_6');
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
    'os2intra_organisation_tax' => 0,
    'os2web_taxonomies_tax_politics' => 0,
    'os2web_taxonomies_tax_portal_cat' => 0,
    'os2web_taxonomies_tax_editor_tag' => 0,
    'tags' => 0,
    'topics' => 0,
    'os2web_taxonomies_tax_user_pos' => 0,
  );
  /* Field: Content: Filer */
  $handler->display->display_options['fields']['field_os2web_base_field_media']['id'] = 'field_os2web_base_field_media';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['table'] = 'field_data_field_os2web_base_field_media';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['field'] = 'field_os2web_base_field_media';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_media']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_media']['field_api_classes'] = TRUE;
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

  /* Display: Afsnit */
  $handler = $view->new_display('panel_pane', 'Afsnit', 'panel_pane_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
  $handler->display->display_options['style_options']['title_field'] = 'field_os2intra_paragraph_title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Afsnit (field_os2intra_paragraph) */
  $handler->display->display_options['relationships']['field_os2intra_paragraph_value']['id'] = 'field_os2intra_paragraph_value';
  $handler->display->display_options['relationships']['field_os2intra_paragraph_value']['table'] = 'field_data_field_os2intra_paragraph';
  $handler->display->display_options['relationships']['field_os2intra_paragraph_value']['field'] = 'field_os2intra_paragraph_value';
  $handler->display->display_options['relationships']['field_os2intra_paragraph_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Afsnit */
  $handler->display->display_options['fields']['field_os2intra_paragraph']['id'] = 'field_os2intra_paragraph';
  $handler->display->display_options['fields']['field_os2intra_paragraph']['table'] = 'field_data_field_os2intra_paragraph';
  $handler->display->display_options['fields']['field_os2intra_paragraph']['field'] = 'field_os2intra_paragraph';
  $handler->display->display_options['fields']['field_os2intra_paragraph']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_paragraph']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_paragraph']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2intra_paragraph']['settings'] = array(
    'edit' => 'Redigér',
    'delete' => 'Slet',
    'add' => 'Tilføj',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_os2intra_paragraph']['delta_offset'] = '0';
  /* Field: Field collection item: Afsnit */
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['id'] = 'field_os2intra_paragraph_text';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['table'] = 'field_data_field_os2intra_paragraph_text';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['field'] = 'field_os2intra_paragraph_text';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['relationship'] = 'field_os2intra_paragraph_value';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_paragraph_text']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Overskrift */
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['id'] = 'field_os2intra_paragraph_title';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['table'] = 'field_data_field_os2intra_paragraph_title';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['field'] = 'field_os2intra_paragraph_title';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['relationship'] = 'field_os2intra_paragraph_value';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_paragraph_title']['element_label_colon'] = FALSE;
  /* Field: Field: Indlejr webform */
  $handler->display->display_options['fields']['field_os2web_webform_ref']['id'] = 'field_os2web_webform_ref';
  $handler->display->display_options['fields']['field_os2web_webform_ref']['table'] = 'field_data_field_os2web_webform_ref';
  $handler->display->display_options['fields']['field_os2web_webform_ref']['field'] = 'field_os2web_webform_ref';
  $handler->display->display_options['fields']['field_os2web_webform_ref']['relationship'] = 'field_os2intra_paragraph_value';
  $handler->display->display_options['fields']['field_os2web_webform_ref']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_webform_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_webform_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_webform_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_os2web_webform_ref']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    t('Indhold refererer til Indhold fra field_os2intra_base_spotboxes'),
    t('View panes'),
    t('Kategorier'),
    t('Afdeling'),
    t('Ovenstående afdeling'),
    t('Gruppe'),
    t('Adresse'),
    t('Ord i ordforråd entity referenced from field_os2intra_physical_location'),
    t('Filer'),
    t('Afsnit'),
    t('field collection item from field_os2intra_paragraph'),
  );
  $export['os2intra_node_panes'] = $view;

  $view = new view();
  $view->name = 'os2intra_og_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2intra OG Info';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'os2intra_organisation_tax' => 'os2intra_organisation_tax',
    'os2web_base_tax_site_structure' => 0,
    'os2web_taxonomies_tax_comittee' => 0,
    'begivenhedstyper' => 0,
    'user_hobbies' => 0,
    'user_jobtitle' => 0,
    'user_skills' => 0,
    'os2web_taxonomies_tax_places' => 0,
    'indlaegstyper' => 0,
    'os2intra_canteen' => 0,
    'os2web_taxonomies_tax_kle' => 0,
    'media_folders' => 0,
    'os2web_taxonomies_tax_org' => 0,
    'os2web_base_tax_promoteto' => 0,
    'os2web_taxonomies_tax_politics' => 0,
    'os2web_taxonomies_tax_portal_cat' => 0,
    'os2web_taxonomies_tax_editor_tag' => 0,
    'tags' => 0,
    'topics' => 0,
    'os2web_taxonomies_tax_user_pos' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['parent']['label'] = 'Overordnet element';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_os2intra_organisation_node']['id'] = 'reverse_field_os2intra_organisation_node';
  $handler->display->display_options['relationships']['reverse_field_os2intra_organisation_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_os2intra_organisation_node']['field'] = 'reverse_field_os2intra_organisation_node';
  $handler->display->display_options['relationships']['reverse_field_os2intra_organisation_node']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['reverse_field_os2intra_organisation_node']['label'] = 'Indhold refererer til Ord i ordforråd fra field_os2intra_organisation';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_os2intra_organisation_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2intra_org_group_unit' => 'os2intra_org_group_unit',
  );

  /* Display: Overordnet afdeling */
  $handler = $view->new_display('panel_pane', 'Overordnet afdeling', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organisation';
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
  $translatables['os2intra_og_info'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Overordnet element'),
    t('Indhold refererer til Ord i ordforråd fra field_os2intra_organisation'),
    t('Alle'),
    t('Overordnet afdeling'),
    t('Organisation'),
    t('View panes'),
  );
  $export['os2intra_og_info'] = $view;

  $view = new view();
  $view->name = 'os2intra_organisation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'OS2intra Organisation';
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
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['label'] = 'Overordnet element';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'os2intra_organisation_tax' => 'os2intra_organisation_tax',
  );

  /* Display: Vist org niveau */
  $handler = $view->new_display('panel_pane', 'Vist org niveau', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Ovenstående org niveau */
  $handler = $view->new_display('panel_pane', 'Ovenstående org niveau', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ovenstående org niveau';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'os2intra_organisation_tax' => 'os2intra_organisation_tax',
  );
  /* Filter criterion: Taxonomy term: Vis i oversigt (field_os2intra_org_presented) */
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['id'] = 'field_os2intra_org_presented_value';
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['table'] = 'field_data_field_os2intra_org_presented';
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['field'] = 'field_os2intra_org_presented_value';
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Underliggende org niveau */
  $handler = $view->new_display('panel_pane', 'Underliggende org niveau', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Underliggende org niveau';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'os2intra_organisation_tax' => 'os2intra_organisation_tax',
  );
  /* Filter criterion: Taxonomy term: Vis i oversigt (field_os2intra_org_presented) */
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['id'] = 'field_os2intra_org_presented_value';
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['table'] = 'field_data_field_os2intra_org_presented';
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['field'] = 'field_os2intra_org_presented_value';
  $handler->display->display_options['filters']['field_os2intra_org_presented_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['os2intra_organisation'] = array(
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
    t('Overordnet element'),
    t('Alle'),
    t('Vist org niveau'),
    t('OS2intra'),
    t('Ovenstående org niveau'),
    t('Underliggende org niveau'),
  );
  $export['os2intra_organisation'] = $view;

  $view = new view();
  $view->name = 'os2intra_organisation_afdelinger';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2intra Organisation Afdelinger';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_os2intra_afdeling',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_os2intra_organisation_target_id']['id'] = 'field_os2intra_organisation_target_id';
  $handler->display->display_options['relationships']['field_os2intra_organisation_target_id']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['relationships']['field_os2intra_organisation_target_id']['field'] = 'field_os2intra_organisation_target_id';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_os2intra_organisation_target_id';
  $handler->display->display_options['relationships']['parent']['label'] = 'Overordnet element';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_os2intra_afdeling']['id'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['field'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_afdeling']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2intra_organisation_target_id';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['arguments']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent_1']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent_1']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['parent_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['parent_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'field_os2intra_organisation_target_id';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2intra_org_group_unit' => 'os2intra_org_group_unit',
  );

  /* Display: Afdelingspræsentation */
  $handler = $view->new_display('panel_pane', 'Afdelingspræsentation', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'parent' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Overordnet ord',
    ),
  );
  $translatables['os2intra_organisation_afdelinger'] = array(
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
    t('Taxonomy term entity referenced from field_os2intra_organisation'),
    t('Overordnet element'),
    t('Term ID'),
    t('.'),
    t('Alle'),
    t('Afdelingspræsentation'),
    t('OS2intra'),
  );
  $export['os2intra_organisation_afdelinger'] = $view;

  $view = new view();
  $view->name = 'os2intra_personale';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'OS2intra Personale';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_os2intra_afdeling',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: Group User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user_group']['id'] = 'og_membership_related_user_group';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['field'] = 'og_membership_related_user_group';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_os2intra_afdeling']['id'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['field'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';

  /* Display: Afdelingspersonale */
  $handler = $view->new_display('panel_pane', 'Afdelingspersonale', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'none',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Afdelingspersonale - ovenstående */
  $handler = $view->new_display('panel_pane', 'Afdelingspersonale - ovenstående', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['id'] = 'field_os2intra_afdeling_target_id';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['field'] = 'field_os2intra_afdeling_target_id';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2intra_afdeling_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_os2intra_afdeling_target_id' => array(
      'type' => 'user',
      'context' => 'entity:blame.bid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Ovenstående Afdeling (field_os2intra_afdeling)',
    ),
  );

  /* Display: Afdelingspersonale - ovenståendes term */
  $handler = $view->new_display('panel_pane', 'Afdelingspersonale - ovenståendes term', 'panel_pane_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user_group']['id'] = 'og_membership_related_user_group';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['field'] = 'og_membership_related_user_group';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['id'] = 'og_membership_related_node_group_1';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['label'] = 'Term fra ovenstående';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_os2intra_afdeling']['id'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['field'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_afdeling']['element_label_colon'] = FALSE;
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_os2intra_organisation']['id'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['field'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_os2intra_organisation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_organisation']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_os2intra_organisation']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['id'] = 'field_os2intra_organisation_1';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['field'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['relationship'] = 'og_membership_related_node_group_1';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['label'] = 'Ovenstående Organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Organisation (field_os2intra_organisation) */
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['id'] = 'field_os2intra_organisation_target_id';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['field'] = 'field_os2intra_organisation_target_id';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['relationship'] = 'og_membership_related_node_group_1';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2intra_organisation_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_os2intra_organisation_target_id' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Organisation (field_os2intra_organisation)',
    ),
  );

  /* Display: Afdelingspersonale - ovenståendes terms ovenstående term */
  $handler = $view->new_display('panel_pane', 'Afdelingspersonale - ovenståendes terms ovenstående term', 'panel_pane_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user_group']['id'] = 'og_membership_related_user_group';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['field'] = 'og_membership_related_user_group';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['id'] = 'og_membership_related_node_group_1';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group_1']['label'] = 'Term fra ovenstående';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'os2intra_organisation_tax' => 'os2intra_organisation_tax',
    'os2web_base_tax_site_structure' => 0,
    'os2web_taxonomies_tax_comittee' => 0,
    'begivenhedstyper' => 0,
    'user_hobbies' => 0,
    'user_jobtitle' => 0,
    'user_skills' => 0,
    'os2web_taxonomies_tax_places' => 0,
    'indlaegstyper' => 0,
    'os2intra_canteen' => 0,
    'os2web_taxonomies_tax_kle' => 0,
    'os2web_taxonomies_tax_org' => 0,
    'os2web_base_tax_promoteto' => 0,
    'os2web_taxonomies_tax_politics' => 0,
    'os2web_taxonomies_tax_portal_cat' => 0,
    'os2web_taxonomies_tax_editor_tag' => 0,
    'tags' => 0,
    'topics' => 0,
    'os2web_taxonomies_tax_user_pos' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['parent']['label'] = 'Overordnet element';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['label'] = 'Overordnet element';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_os2intra_afdeling']['id'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['table'] = 'og_membership';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['field'] = 'field_os2intra_afdeling';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['label'] = '';
  $handler->display->display_options['fields']['field_os2intra_afdeling']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_afdeling']['element_label_colon'] = FALSE;
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_os2intra_organisation']['id'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['field'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_os2intra_organisation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_organisation']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_os2intra_organisation']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['id'] = 'field_os2intra_organisation_1';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['table'] = 'field_data_field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['field'] = 'field_os2intra_organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['relationship'] = 'og_membership_related_node_group_1';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['label'] = 'Ovenstående Organisation';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_os2intra_organisation_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'OS2intra';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'parent' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Overordnet ord',
    ),
  );

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user_group']['id'] = 'og_membership_related_user_group';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user_group']['field'] = 'og_membership_related_user_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Rendered User */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $translatables['os2intra_personale'] = array(
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
    t('Group user from OG membership'),
    t('Group node from OG membership'),
    t('Nid'),
    t('Alle'),
    t('Afdelingspersonale'),
    t('OS2intra'),
    t('Afdelingspersonale - ovenstående'),
    t('Afdelingspersonale - ovenståendes term'),
    t('Term fra ovenstående'),
    t('Organisation'),
    t('Ovenstående Organisation'),
    t('Afdelingspersonale - ovenståendes terms ovenstående term'),
    t('term'),
    t('Overordnet element'),
    t('Term ID'),
    t('.'),
    t(','),
    t('Blok'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('‹ forrige'),
    t('næste ›'),
  );
  $export['os2intra_personale'] = $view;

  $view = new view();
  $view->name = 'termpanel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Termpanel';
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
  $handler->display->display_options['style_options']['row_class'] = 'fki-box';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['label'] = 'Repræsentativ node';
  $handler->display->display_options['relationships']['tid_representative']['required'] = TRUE;
  $handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.nid';
  $handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'os2web_base_tax_site_structure' => 'os2web_base_tax_site_structure',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'parent' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Overordnet ord',
    ),
  );
  $translatables['termpanel'] = array(
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
    t('Repræsentativ node'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['termpanel'] = $view;

  return $export;
}
