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
  $handler->weight = -28;
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
  $display->layout = '3-columns';
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
    $pane->pid = 'new-c92d2ccc-2b6a-42f1-869e-5243e72261e8';
    $pane->panel = 'column-center';
    $pane->type = 'views';
    $pane->subtype = 'og_members';
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
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->uuid = 'c92d2ccc-2b6a-42f1-869e-5243e72261e8';
    $display->content['new-c92d2ccc-2b6a-42f1-869e-5243e72261e8'] = $pane;
    $display->panels['column-center'][0] = 'new-c92d2ccc-2b6a-42f1-869e-5243e72261e8';
    $pane = new stdClass();
    $pane->pid = 'new-b3812514-dd4f-4b2e-8deb-ad75274cb60e';
    $pane->panel = 'column-left';
    $pane->type = 'views';
    $pane->subtype = 'og_nodes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3812514-dd4f-4b2e-8deb-ad75274cb60e';
    $display->content['new-b3812514-dd4f-4b2e-8deb-ad75274cb60e'] = $pane;
    $display->panels['column-left'][0] = 'new-b3812514-dd4f-4b2e-8deb-ad75274cb60e';
    $pane = new stdClass();
    $pane->pid = 'new-9be1f78d-8ad1-4a23-9efa-9d79cc46c89b';
    $pane->panel = 'column-right';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'event' => 'event',
        'wiki' => 'wiki',
        'post' => 'post',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Opret indhold',
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
    $pane->uuid = '9be1f78d-8ad1-4a23-9efa-9d79cc46c89b';
    $display->content['new-9be1f78d-8ad1-4a23-9efa-9d79cc46c89b'] = $pane;
    $display->panels['column-right'][0] = 'new-9be1f78d-8ad1-4a23-9efa-9d79cc46c89b';
    $pane = new stdClass();
    $pane->pid = 'new-a858b2af-35d5-48b9-87cd-80f545732f1b';
    $pane->panel = 'column-right';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_3';
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
    $pane->uuid = 'a858b2af-35d5-48b9-87cd-80f545732f1b';
    $display->content['new-a858b2af-35d5-48b9-87cd-80f545732f1b'] = $pane;
    $display->panels['column-right'][1] = 'new-a858b2af-35d5-48b9-87cd-80f545732f1b';
    $pane = new stdClass();
    $pane->pid = 'new-c6b18870-41da-4b73-9464-4ae2f6b25065';
    $pane->panel = 'column-right';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c6b18870-41da-4b73-9464-4ae2f6b25065';
    $display->content['new-c6b18870-41da-4b73-9464-4ae2f6b25065'] = $pane;
    $display->panels['column-right'][2] = 'new-c6b18870-41da-4b73-9464-4ae2f6b25065';
    $pane = new stdClass();
    $pane->pid = 'new-cb1c6588-7c7f-4f8a-b515-e2d474385fb6';
    $pane->panel = 'column-right';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cb1c6588-7c7f-4f8a-b515-e2d474385fb6';
    $display->content['new-cb1c6588-7c7f-4f8a-b515-e2d474385fb6'] = $pane;
    $display->panels['column-right'][3] = 'new-cb1c6588-7c7f-4f8a-b515-e2d474385fb6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b3812514-dd4f-4b2e-8deb-ad75274cb60e';
  $handler->conf['display'] = $display;
  $export['node_view__afdeling'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_07196789-365f-4d6d-a4dd-99ecc5077518';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
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
    $pane->pid = 'new-9eedef4f-13e7-426f-93a1-c781b689e444';
    $pane->panel = 'content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9eedef4f-13e7-426f-93a1-c781b689e444';
    $display->content['new-9eedef4f-13e7-426f-93a1-c781b689e444'] = $pane;
    $display->panels['content'][0] = 'new-9eedef4f-13e7-426f-93a1-c781b689e444';
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
      'css_class' => '',
      'template_suggestion' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '20cb997f-81cd-4d19-be93-4876589b4647';
    $display->content['new-20cb997f-81cd-4d19-be93-4876589b4647'] = $pane;
    $display->panels['content'][1] = 'new-20cb997f-81cd-4d19-be93-4876589b4647';
    $pane = new stdClass();
    $pane->pid = 'new-4ff858ac-695f-438c-a009-844c08c0aafb';
    $pane->panel = 'content';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '10',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4ff858ac-695f-438c-a009-844c08c0aafb';
    $display->content['new-4ff858ac-695f-438c-a009-844c08c0aafb'] = $pane;
    $display->panels['content'][2] = 'new-4ff858ac-695f-438c-a009-844c08c0aafb';
    $pane = new stdClass();
    $pane->pid = 'new-35c2a69b-b9d8-4e6b-b002-90468cb61fcf';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_node_panes-panel_pane_3';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '35c2a69b-b9d8-4e6b-b002-90468cb61fcf';
    $display->content['new-35c2a69b-b9d8-4e6b-b002-90468cb61fcf'] = $pane;
    $display->panels['sidebar'][0] = 'new-35c2a69b-b9d8-4e6b-b002-90468cb61fcf';
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
    $pane->pid = 'new-75d3ed40-98a3-440d-a744-1fa15c2a7426';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_extras-group_info';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '75d3ed40-98a3-440d-a744-1fa15c2a7426';
    $display->content['new-75d3ed40-98a3-440d-a744-1fa15c2a7426'] = $pane;
    $display->panels['sidebar'][2] = 'new-75d3ed40-98a3-440d-a744-1fa15c2a7426';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'de4f0cc1-c478-4ca6-83a4-366898c085a3';
    $display->content['new-de4f0cc1-c478-4ca6-83a4-366898c085a3'] = $pane;
    $display->panels['sidebar'][3] = 'new-de4f0cc1-c478-4ca6-83a4-366898c085a3';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd3bce9a9-8d0a-4e36-b25f-1b2bebb177b1';
    $display->content['new-d3bce9a9-8d0a-4e36-b25f-1b2bebb177b1'] = $pane;
    $display->panels['sidebar'][4] = 'new-d3bce9a9-8d0a-4e36-b25f-1b2bebb177b1';
    $pane = new stdClass();
    $pane->pid = 'new-55df9425-2085-4297-83b6-529932fc23ae';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '55df9425-2085-4297-83b6-529932fc23ae';
    $display->content['new-55df9425-2085-4297-83b6-529932fc23ae'] = $pane;
    $display->panels['sidebar'][5] = 'new-55df9425-2085-4297-83b6-529932fc23ae';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9eda4ff0-f96f-4e19-a83a-f241d59a444f';
    $display->content['new-9eda4ff0-f96f-4e19-a83a-f241d59a444f'] = $pane;
    $display->panels['sidebar'][6] = 'new-9eda4ff0-f96f-4e19-a83a-f241d59a444f';
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
    $pane->pid = 'new-88ba7aa2-dc50-4577-8c33-5689da2bec56';
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
    $pane->uuid = '88ba7aa2-dc50-4577-8c33-5689da2bec56';
    $display->content['new-88ba7aa2-dc50-4577-8c33-5689da2bec56'] = $pane;
    $display->panels['sidebar'][0] = 'new-88ba7aa2-dc50-4577-8c33-5689da2bec56';
    $pane = new stdClass();
    $pane->pid = 'new-212bf1f0-f087-4005-a0da-14f714097311';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '212bf1f0-f087-4005-a0da-14f714097311';
    $display->content['new-212bf1f0-f087-4005-a0da-14f714097311'] = $pane;
    $display->panels['sidebar'][1] = 'new-212bf1f0-f087-4005-a0da-14f714097311';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82f3a08f-fce7-4927-a04b-ed4830162b1a';
    $display->content['new-82f3a08f-fce7-4927-a04b-ed4830162b1a'] = $pane;
    $display->panels['sidebar'][2] = 'new-82f3a08f-fce7-4927-a04b-ed4830162b1a';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $display->content['new-c183b6eb-7f4e-47ad-bc30-9c35882641e6'] = $pane;
    $display->panels['sidebar'][3] = 'new-c183b6eb-7f4e-47ad-bc30-9c35882641e6';
    $pane = new stdClass();
    $pane->pid = 'new-86a3f1fc-debe-4af6-a2bb-fbc68b0f388c';
    $pane->panel = 'sidebar';
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
    $pane->uuid = '86a3f1fc-debe-4af6-a2bb-fbc68b0f388c';
    $display->content['new-86a3f1fc-debe-4af6-a2bb-fbc68b0f388c'] = $pane;
    $display->panels['sidebar'][4] = 'new-86a3f1fc-debe-4af6-a2bb-fbc68b0f388c';
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
  $handler->weight = -29;
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
  $display->layout = '3-columns';
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
    $pane->pid = 'new-6f213653-2090-477b-a60d-a3d40cf91f1b';
    $pane->panel = 'column-center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'fences_wrapper' => 'div_div_div',
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
    $pane->uuid = '6f213653-2090-477b-a60d-a3d40cf91f1b';
    $display->content['new-6f213653-2090-477b-a60d-a3d40cf91f1b'] = $pane;
    $display->panels['column-center'][0] = 'new-6f213653-2090-477b-a60d-a3d40cf91f1b';
    $pane = new stdClass();
    $pane->pid = 'new-c92d2ccc-2b6a-42f1-869e-5243e72261e8';
    $pane->panel = 'column-center';
    $pane->type = 'views';
    $pane->subtype = 'og_members';
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
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Gruppemedlemmer',
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
    $pane->uuid = 'c92d2ccc-2b6a-42f1-869e-5243e72261e8';
    $display->content['new-c92d2ccc-2b6a-42f1-869e-5243e72261e8'] = $pane;
    $display->panels['column-center'][1] = 'new-c92d2ccc-2b6a-42f1-869e-5243e72261e8';
    $pane = new stdClass();
    $pane->pid = 'new-b3812514-dd4f-4b2e-8deb-ad75274cb60e';
    $pane->panel = 'column-left';
    $pane->type = 'views';
    $pane->subtype = 'og_nodes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3812514-dd4f-4b2e-8deb-ad75274cb60e';
    $display->content['new-b3812514-dd4f-4b2e-8deb-ad75274cb60e'] = $pane;
    $display->panels['column-left'][0] = 'new-b3812514-dd4f-4b2e-8deb-ad75274cb60e';
    $pane = new stdClass();
    $pane->pid = 'new-a939258c-78be-484d-9ae2-318e5333b767';
    $pane->panel = 'column-right';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'event' => 'event',
        'wiki' => 'wiki',
        'post' => 'post',
      ),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Opret indhold',
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
    $pane->uuid = 'a939258c-78be-484d-9ae2-318e5333b767';
    $display->content['new-a939258c-78be-484d-9ae2-318e5333b767'] = $pane;
    $display->panels['column-right'][0] = 'new-a939258c-78be-484d-9ae2-318e5333b767';
    $pane = new stdClass();
    $pane->pid = 'new-d6ce5b58-d99d-4b97-a22c-6ed0b9b0848f';
    $pane->panel = 'column-right';
    $pane->type = 'node_type_desc';
    $pane->subtype = 'node_type_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'd6ce5b58-d99d-4b97-a22c-6ed0b9b0848f';
    $display->content['new-d6ce5b58-d99d-4b97-a22c-6ed0b9b0848f'] = $pane;
    $display->panels['column-right'][1] = 'new-d6ce5b58-d99d-4b97-a22c-6ed0b9b0848f';
    $pane = new stdClass();
    $pane->pid = 'new-c3c70259-cb3e-4869-b1fc-2223c479de70';
    $pane->panel = 'column-right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c3c70259-cb3e-4869-b1fc-2223c479de70';
    $display->content['new-c3c70259-cb3e-4869-b1fc-2223c479de70'] = $pane;
    $display->panels['column-right'][2] = 'new-c3c70259-cb3e-4869-b1fc-2223c479de70';
    $pane = new stdClass();
    $pane->pid = 'new-2250f5ed-666c-4416-81ba-f1a66f4e83eb';
    $pane->panel = 'column-right';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2250f5ed-666c-4416-81ba-f1a66f4e83eb';
    $display->content['new-2250f5ed-666c-4416-81ba-f1a66f4e83eb'] = $pane;
    $display->panels['column-right'][3] = 'new-2250f5ed-666c-4416-81ba-f1a66f4e83eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b3812514-dd4f-4b2e-8deb-ad75274cb60e';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_78c36cac-1085-4311-9c4e-14af6a020b67'] = $handler;

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
  $page->access = array();
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
