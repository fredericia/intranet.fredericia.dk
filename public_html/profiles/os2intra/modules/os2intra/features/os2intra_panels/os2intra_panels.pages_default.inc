<?php
/**
 * @file
 * os2intra_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2intra_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_05b75a06-455d-4044-97c5-4197f5b8b891';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Opret indhold',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba27bf64-babf-45a5-a59e-769f3cdaf541';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d89f8e2-4f77-44cb-a7ea-03f043ce6803';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d89f8e2-4f77-44cb-a7ea-03f043ce6803';
    $display->content['new-0d89f8e2-4f77-44cb-a7ea-03f043ce6803'] = $pane;
    $display->panels['center'][0] = 'new-0d89f8e2-4f77-44cb-a7ea-03f043ce6803';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0d89f8e2-4f77-44cb-a7ea-03f043ce6803';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_05b75a06-455d-4044-97c5-4197f5b8b891'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__afdeling';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Afdeling',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'afdeling',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2intra_org_group_unit' => 'os2intra_org_group_unit',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'column-left' => NULL,
      'column-center' => NULL,
      'column-right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'da7b3ac8-f3ed-46d0-9a0e-145f5ac8f1ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9be1f78d-8ad1-4a23-9efa-9d79cc46c89b';
    $pane->panel = 'content';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'event' => 'event',
        'wiki' => 'wiki',
        'os2intra_referat' => 'os2intra_referat',
        'post' => 'post',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%node:title',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'createlinks',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9be1f78d-8ad1-4a23-9efa-9d79cc46c89b';
    $display->content['new-9be1f78d-8ad1-4a23-9efa-9d79cc46c89b'] = $pane;
    $display->panels['content'][0] = 'new-9be1f78d-8ad1-4a23-9efa-9d79cc46c89b';
    $pane = new stdClass();
    $pane->pid = 'new-e86b9cef-1b7b-435e-a90c-051babda9146';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-3376adf101a7391e97b73e666de55e7e';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e86b9cef-1b7b-435e-a90c-051babda9146';
    $display->content['new-e86b9cef-1b7b-435e-a90c-051babda9146'] = $pane;
    $display->panels['content'][1] = 'new-e86b9cef-1b7b-435e-a90c-051babda9146';
    $pane = new stdClass();
    $pane->pid = 'new-8791be9c-07e4-47a6-89bc-829bdf5627e9';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_gruppe_indhold-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8791be9c-07e4-47a6-89bc-829bdf5627e9';
    $display->content['new-8791be9c-07e4-47a6-89bc-829bdf5627e9'] = $pane;
    $display->panels['content'][2] = 'new-8791be9c-07e4-47a6-89bc-829bdf5627e9';
    $pane = new stdClass();
    $pane->pid = 'new-e6f46596-5956-4ff3-8a0d-bd2819afd3c9';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2intra_afdeling';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'list',
        'links' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Ovenstående afdeling',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e6f46596-5956-4ff3-8a0d-bd2819afd3c9';
    $display->content['new-e6f46596-5956-4ff3-8a0d-bd2819afd3c9'] = $pane;
    $display->panels['sidebar'][0] = 'new-e6f46596-5956-4ff3-8a0d-bd2819afd3c9';
    $pane = new stdClass();
    $pane->pid = 'new-2400f305-6625-406a-8207-a17aa75ebb25';
    $pane->panel = 'sidebar';
    $pane->type = 'views';
    $pane->subtype = 'os2intra_forside_views';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Fællesnyt',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'os2-box-quinary',
      'template_suggestion' => 'views',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2400f305-6625-406a-8207-a17aa75ebb25';
    $display->content['new-2400f305-6625-406a-8207-a17aa75ebb25'] = $pane;
    $display->panels['sidebar'][1] = 'new-2400f305-6625-406a-8207-a17aa75ebb25';
    $pane = new stdClass();
    $pane->pid = 'new-16b12952-ceb3-4769-8aba-d774bae55ab6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_gruppe_indhold-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'os2-box-tertiary',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '16b12952-ceb3-4769-8aba-d774bae55ab6';
    $display->content['new-16b12952-ceb3-4769-8aba-d774bae55ab6'] = $pane;
    $display->panels['sidebar'][2] = 'new-16b12952-ceb3-4769-8aba-d774bae55ab6';
    $pane = new stdClass();
    $pane->pid = 'new-92c7b5ee-85d4-4759-999a-ce8adc5212cd';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_gruppe_indhold-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '92c7b5ee-85d4-4759-999a-ce8adc5212cd';
    $display->content['new-92c7b5ee-85d4-4759-999a-ce8adc5212cd'] = $pane;
    $display->panels['sidebar'][3] = 'new-92c7b5ee-85d4-4759-999a-ce8adc5212cd';
    $pane = new stdClass();
    $pane->pid = 'new-c6b18870-41da-4b73-9464-4ae2f6b25065';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c6b18870-41da-4b73-9464-4ae2f6b25065';
    $display->content['new-c6b18870-41da-4b73-9464-4ae2f6b25065'] = $pane;
    $display->panels['sidebar'][4] = 'new-c6b18870-41da-4b73-9464-4ae2f6b25065';
    $pane = new stdClass();
    $pane->pid = 'new-cb1c6588-7c7f-4f8a-b515-e2d474385fb6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'cb1c6588-7c7f-4f8a-b515-e2d474385fb6';
    $display->content['new-cb1c6588-7c7f-4f8a-b515-e2d474385fb6'] = $pane;
    $display->panels['sidebar'][5] = 'new-cb1c6588-7c7f-4f8a-b515-e2d474385fb6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__afdeling'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__intranetside';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Intranetside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'intranetside',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2intra_base_page' => 'os2intra_base_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd636802a-6871-41c0-969c-64242d2b28c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1be22f35-56be-4f8c-8f41-f70eb9c30028';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1be22f35-56be-4f8c-8f41-f70eb9c30028';
    $display->content['new-1be22f35-56be-4f8c-8f41-f70eb9c30028'] = $pane;
    $display->panels['content'][0] = 'new-1be22f35-56be-4f8c-8f41-f70eb9c30028';
    $pane = new stdClass();
    $pane->pid = 'new-4c2952f7-5d11-4569-8c3d-9ec78131cd71';
    $pane->panel = 'content';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4c2952f7-5d11-4569-8c3d-9ec78131cd71';
    $display->content['new-4c2952f7-5d11-4569-8c3d-9ec78131cd71'] = $pane;
    $display->panels['content'][1] = 'new-4c2952f7-5d11-4569-8c3d-9ec78131cd71';
    $pane = new stdClass();
    $pane->pid = 'new-82f3a08f-fce7-4927-a04b-ed4830162b1a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2intra_related_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'fences_wrapper' => 'ul',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '82f3a08f-fce7-4927-a04b-ed4830162b1a';
    $display->content['new-82f3a08f-fce7-4927-a04b-ed4830162b1a'] = $pane;
    $display->panels['sidebar'][0] = 'new-82f3a08f-fce7-4927-a04b-ed4830162b1a';
    $pane = new stdClass();
    $pane->pid = 'new-c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2intra_selvbetjening_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'fences_wrapper' => 'ul',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $display->content['new-c183b6eb-7f4e-47ad-bc30-9c35882641e6'] = $pane;
    $display->panels['sidebar'][1] = 'new-c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $pane = new stdClass();
    $pane->pid = 'new-83e3ada4-96e7-4712-ac29-d6e848ea2de7';
    $pane->panel = 'sidebar';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '0',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Kategorier',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '83e3ada4-96e7-4712-ac29-d6e848ea2de7';
    $display->content['new-83e3ada4-96e7-4712-ac29-d6e848ea2de7'] = $pane;
    $display->panels['sidebar'][2] = 'new-83e3ada4-96e7-4712-ac29-d6e848ea2de7';
    $pane = new stdClass();
    $pane->pid = 'new-317d21ed-4da7-4b12-931c-be881ccbd952';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '317d21ed-4da7-4b12-931c-be881ccbd952';
    $display->content['new-317d21ed-4da7-4b12-931c-be881ccbd952'] = $pane;
    $display->panels['sidebar'][3] = 'new-317d21ed-4da7-4b12-931c-be881ccbd952';
    $pane = new stdClass();
    $pane->pid = 'new-09c75238-5cb9-4d2a-a33f-7479101758ff';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'masquerade-masquerade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '09c75238-5cb9-4d2a-a33f-7479101758ff';
    $display->content['new-09c75238-5cb9-4d2a-a33f-7479101758ff'] = $pane;
    $display->panels['sidebar'][4] = 'new-09c75238-5cb9-4d2a-a33f-7479101758ff';
    $pane = new stdClass();
    $pane->pid = 'new-f9b92292-ea03-414d-bbb2-ff3ba066bada';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Vedhæftede filer',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'os2-box-tertiary os2-box-watermarked',
      'template_suggestion' => 'entity_field',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f9b92292-ea03-414d-bbb2-ff3ba066bada';
    $display->content['new-f9b92292-ea03-414d-bbb2-ff3ba066bada'] = $pane;
    $display->panels['sidebar'][5] = 'new-f9b92292-ea03-414d-bbb2-ff3ba066bada';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__intranetside'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_07196789-365f-4d6d-a4dd-99ecc5077518';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '462a5aeb-cbaf-4d93-b518-ae001e19673f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-20cb997f-81cd-4d19-be93-4876589b4647';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'os2-box-large-spacing',
      'template_suggestion' => 'entity_view',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20cb997f-81cd-4d19-be93-4876589b4647';
    $display->content['new-20cb997f-81cd-4d19-be93-4876589b4647'] = $pane;
    $display->panels['content'][0] = 'new-20cb997f-81cd-4d19-be93-4876589b4647';
    $pane = new stdClass();
    $pane->pid = 'new-4ff858ac-695f-438c-a009-844c08c0aafb';
    $pane->panel = 'content';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4ff858ac-695f-438c-a009-844c08c0aafb';
    $display->content['new-4ff858ac-695f-438c-a009-844c08c0aafb'] = $pane;
    $display->panels['content'][1] = 'new-4ff858ac-695f-438c-a009-844c08c0aafb';
    $pane = new stdClass();
    $pane->pid = 'new-de4f0cc1-c478-4ca6-83a4-366898c085a3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'de4f0cc1-c478-4ca6-83a4-366898c085a3';
    $display->content['new-de4f0cc1-c478-4ca6-83a4-366898c085a3'] = $pane;
    $display->panels['sidebar'][0] = 'new-de4f0cc1-c478-4ca6-83a4-366898c085a3';
    $pane = new stdClass();
    $pane->pid = 'new-b96a5958-fe80-4020-8274-ee12bb59dc8c';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b96a5958-fe80-4020-8274-ee12bb59dc8c';
    $display->content['new-b96a5958-fe80-4020-8274-ee12bb59dc8c'] = $pane;
    $display->panels['sidebar'][1] = 'new-b96a5958-fe80-4020-8274-ee12bb59dc8c';
    $pane = new stdClass();
    $pane->pid = 'new-d3bce9a9-8d0a-4e36-b25f-1b2bebb177b1';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Kategorier',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd3bce9a9-8d0a-4e36-b25f-1b2bebb177b1';
    $display->content['new-d3bce9a9-8d0a-4e36-b25f-1b2bebb177b1'] = $pane;
    $display->panels['sidebar'][2] = 'new-d3bce9a9-8d0a-4e36-b25f-1b2bebb177b1';
    $pane = new stdClass();
    $pane->pid = 'new-9eda4ff0-f96f-4e19-a83a-f241d59a444f';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9eda4ff0-f96f-4e19-a83a-f241d59a444f';
    $display->content['new-9eda4ff0-f96f-4e19-a83a-f241d59a444f'] = $pane;
    $display->panels['sidebar'][3] = 'new-9eda4ff0-f96f-4e19-a83a-f241d59a444f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_07196789-365f-4d6d-a4dd-99ecc5077518'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_557667a1-460e-4beb-904e-8eb83dabc864';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'IT Vejledninger',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'it_vejledning' => 'it_vejledning',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd636802a-6871-41c0-969c-64242d2b28c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1be22f35-56be-4f8c-8f41-f70eb9c30028';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1be22f35-56be-4f8c-8f41-f70eb9c30028';
    $display->content['new-1be22f35-56be-4f8c-8f41-f70eb9c30028'] = $pane;
    $display->panels['content'][0] = 'new-1be22f35-56be-4f8c-8f41-f70eb9c30028';
    $pane = new stdClass();
    $pane->pid = 'new-c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2intra_selvbetjening_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'fences_wrapper' => 'ul',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $display->content['new-c183b6eb-7f4e-47ad-bc30-9c35882641e6'] = $pane;
    $display->panels['content'][1] = 'new-c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $pane = new stdClass();
    $pane->pid = 'new-88ba7aa2-dc50-4577-8c33-5689da2bec56';
    $pane->panel = 'content';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '0',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '88ba7aa2-dc50-4577-8c33-5689da2bec56';
    $display->content['new-88ba7aa2-dc50-4577-8c33-5689da2bec56'] = $pane;
    $display->panels['content'][2] = 'new-88ba7aa2-dc50-4577-8c33-5689da2bec56';
    $pane = new stdClass();
    $pane->pid = 'new-281fcd05-3cc0-4236-b5a9-3f7e7018053e';
    $pane->panel = 'content';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '281fcd05-3cc0-4236-b5a9-3f7e7018053e';
    $display->content['new-281fcd05-3cc0-4236-b5a9-3f7e7018053e'] = $pane;
    $display->panels['content'][3] = 'new-281fcd05-3cc0-4236-b5a9-3f7e7018053e';
    $pane = new stdClass();
    $pane->pid = 'new-82f3a08f-fce7-4927-a04b-ed4830162b1a';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2intra_related_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'fences_wrapper' => 'ul',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '82f3a08f-fce7-4927-a04b-ed4830162b1a';
    $display->content['new-82f3a08f-fce7-4927-a04b-ed4830162b1a'] = $pane;
    $display->panels['content'][4] = 'new-82f3a08f-fce7-4927-a04b-ed4830162b1a';
    $pane = new stdClass();
    $pane->pid = 'new-86a3f1fc-debe-4af6-a2bb-fbc68b0f388c';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2intra_base_spotboxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'fences_wrapper' => 'section',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '86a3f1fc-debe-4af6-a2bb-fbc68b0f388c';
    $display->content['new-86a3f1fc-debe-4af6-a2bb-fbc68b0f388c'] = $pane;
    $display->panels['content'][5] = 'new-86a3f1fc-debe-4af6-a2bb-fbc68b0f388c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_557667a1-460e-4beb-904e-8eb83dabc864'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_78c36cac-1085-4311-9c4e-14af6a020b67';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Grupper',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2intra_group' => 'os2intra_group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'column-left' => NULL,
      'column-center' => NULL,
      'column-right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'da7b3ac8-f3ed-46d0-9a0e-145f5ac8f1ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a939258c-78be-484d-9ae2-318e5333b767';
    $pane->panel = 'content';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'event' => 'event',
        'wiki' => 'wiki',
        'os2intra_referat' => 'os2intra_referat',
        'post' => 'post',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a939258c-78be-484d-9ae2-318e5333b767';
    $display->content['new-a939258c-78be-484d-9ae2-318e5333b767'] = $pane;
    $display->panels['content'][0] = 'new-a939258c-78be-484d-9ae2-318e5333b767';
    $pane = new stdClass();
    $pane->pid = 'new-9634b055-907a-4195-8f76-15e6366db79f';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_gruppe_indhold-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9634b055-907a-4195-8f76-15e6366db79f';
    $display->content['new-9634b055-907a-4195-8f76-15e6366db79f'] = $pane;
    $display->panels['content'][1] = 'new-9634b055-907a-4195-8f76-15e6366db79f';
    $pane = new stdClass();
    $pane->pid = 'new-1d18e848-4fe1-4538-b346-d3d839b8ffa4';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2intra_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'profilbillede',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%node:title',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'nobody',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d18e848-4fe1-4538-b346-d3d839b8ffa4';
    $display->content['new-1d18e848-4fe1-4538-b346-d3d839b8ffa4'] = $pane;
    $display->panels['sidebar'][0] = 'new-1d18e848-4fe1-4538-b346-d3d839b8ffa4';
    $pane = new stdClass();
    $pane->pid = 'new-7f124028-00ed-4368-af2f-5660d4b044ca';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_grupper-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'gid' => '%node:nid',
      ),
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plainsd',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7f124028-00ed-4368-af2f-5660d4b044ca';
    $display->content['new-7f124028-00ed-4368-af2f-5660d4b044ca'] = $pane;
    $display->panels['sidebar'][1] = 'new-7f124028-00ed-4368-af2f-5660d4b044ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_78c36cac-1085-4311-9c4e-14af6a020b67'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_aa0b0182-0c9a-4301-bbb2-0670172c127d';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Værktøjskasse',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Bruger',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'node_basket' => 'node_basket',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '2-columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'left-content' => NULL,
      'right-content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bcd2e8dd-4f6e-4736-9d19-f677e5f24d63';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e48c24a5-be4b-4d7e-b3ab-1d89fba1f0b9';
    $pane->panel = 'left-content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e48c24a5-be4b-4d7e-b3ab-1d89fba1f0b9';
    $display->content['new-e48c24a5-be4b-4d7e-b3ab-1d89fba1f0b9'] = $pane;
    $display->panels['left-content'][0] = 'new-e48c24a5-be4b-4d7e-b3ab-1d89fba1f0b9';
    $pane = new stdClass();
    $pane->pid = 'new-e74b73fd-cc12-4955-8afa-96fa84bc2a89';
    $pane->panel = 'right-content';
    $pane->type = 'views';
    $pane->subtype = 'node_basket';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_search',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e74b73fd-cc12-4955-8afa-96fa84bc2a89';
    $display->content['new-e74b73fd-cc12-4955-8afa-96fa84bc2a89'] = $pane;
    $display->panels['right-content'][0] = 'new-e74b73fd-cc12-4955-8afa-96fa84bc2a89';
    $pane = new stdClass();
    $pane->pid = 'new-275de35d-a2c0-4bdb-be8c-633a5db69009';
    $pane->panel = 'right-content';
    $pane->type = 'views';
    $pane->subtype = 'node_basket';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_own',
      'context' => array(
        0 => 'context_user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Mine værktøjskasser',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '275de35d-a2c0-4bdb-be8c-633a5db69009';
    $display->content['new-275de35d-a2c0-4bdb-be8c-633a5db69009'] = $pane;
    $display->panels['right-content'][1] = 'new-275de35d-a2c0-4bdb-be8c-633a5db69009';
    $pane = new stdClass();
    $pane->pid = 'new-41529789-247a-4b4b-83a2-97bc052461b2';
    $pane->panel = 'right-content';
    $pane->type = 'views';
    $pane->subtype = 'node_basket';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => 'context_user_1.uid',
      ),
      'override_title' => 1,
      'override_title_text' => ' Abonnerede værktøjer ',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '41529789-247a-4b4b-83a2-97bc052461b2';
    $display->content['new-41529789-247a-4b4b-83a2-97bc052461b2'] = $pane;
    $display->panels['right-content'][2] = 'new-41529789-247a-4b4b-83a2-97bc052461b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e74b73fd-cc12-4955-8afa-96fa84bc2a89';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_aa0b0182-0c9a-4301-bbb2-0670172c127d'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__organisation';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Organisation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'organisation',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f1d87e8b-fd14-4886-8cb7-47faf4293561';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61f23304-8704-4fb5-98ca-9d8a8836766f';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61f23304-8704-4fb5-98ca-9d8a8836766f';
    $display->content['new-61f23304-8704-4fb5-98ca-9d8a8836766f'] = $pane;
    $display->panels['content'][0] = 'new-61f23304-8704-4fb5-98ca-9d8a8836766f';
    $pane = new stdClass();
    $pane->pid = 'new-b5f07ebc-38b7-436c-a0f7-cb55b284aece';
    $pane->panel = 'sidebar';
    $pane->type = 'term_list';
    $pane->subtype = 'term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'title' => NULL,
      'type' => 'child',
      'include_current_term' => 0,
      'list_type' => 'ul',
      'path' => 'taxonomy/term',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5f07ebc-38b7-436c-a0f7-cb55b284aece';
    $display->content['new-b5f07ebc-38b7-436c-a0f7-cb55b284aece'] = $pane;
    $display->panels['sidebar'][0] = 'new-b5f07ebc-38b7-436c-a0f7-cb55b284aece';
    $pane = new stdClass();
    $pane->pid = 'new-8cd3daef-0d91-4283-be64-a5336768d0ca';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8cd3daef-0d91-4283-be64-a5336768d0ca';
    $display->content['new-8cd3daef-0d91-4283-be64-a5336768d0ca'] = $pane;
    $display->panels['sidebar'][1] = 'new-8cd3daef-0d91-4283-be64-a5336768d0ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__organisation'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__os2intra-organisation';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'OS2intra Organisation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Term parent',
        'keyword' => 'parent_term',
        'name' => 'term_parent',
        'type' => 'parent',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'name' => 'os2intra-organisation',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'os2intra_organisation_tax' => 'os2intra_organisation_tax',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar-9-3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'f1d87e8b-fd14-4886-8cb7-47faf4293561';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61f23304-8704-4fb5-98ca-9d8a8836766f';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61f23304-8704-4fb5-98ca-9d8a8836766f';
    $display->content['new-61f23304-8704-4fb5-98ca-9d8a8836766f'] = $pane;
    $display->panels['content'][0] = 'new-61f23304-8704-4fb5-98ca-9d8a8836766f';
    $pane = new stdClass();
    $pane->pid = 'new-5a0da111-bdec-4a88-a721-7599158b1b90';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_personale-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a0da111-bdec-4a88-a721-7599158b1b90';
    $display->content['new-5a0da111-bdec-4a88-a721-7599158b1b90'] = $pane;
    $display->panels['sidebar'][0] = 'new-5a0da111-bdec-4a88-a721-7599158b1b90';
    $pane = new stdClass();
    $pane->pid = 'new-834e9567-f9cf-4844-a333-766acb180f4b';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_afdlingsorganisation-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '834e9567-f9cf-4844-a333-766acb180f4b';
    $display->content['new-834e9567-f9cf-4844-a333-766acb180f4b'] = $pane;
    $display->panels['sidebar'][1] = 'new-834e9567-f9cf-4844-a333-766acb180f4b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__os2intra-organisation'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function os2intra_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Startside';
  $page->admin_description = '';
  $page->path = 'startside';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fc70af94-6984-4dc1-a914-b8374628b999';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d3821d56-0828-4ca2-9778-cead5ee1a7ca';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3821d56-0828-4ca2-9778-cead5ee1a7ca';
    $display->content['new-d3821d56-0828-4ca2-9778-cead5ee1a7ca'] = $pane;
    $display->panels['sidebar'][0] = 'new-d3821d56-0828-4ca2-9778-cead5ee1a7ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
