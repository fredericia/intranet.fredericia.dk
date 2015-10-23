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
  $handler->name = 'node_view__panel_context_07196789-365f-4d6d-a4dd-99ecc5077518';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
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
  $display->title = '';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20cb997f-81cd-4d19-be93-4876589b4647';
    $display->content['new-20cb997f-81cd-4d19-be93-4876589b4647'] = $pane;
    $display->panels['content'][0] = 'new-20cb997f-81cd-4d19-be93-4876589b4647';
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
    $pane->pid = 'new-65d3b586-5a2e-4863-b6a1-bd73675c7682';
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
    $pane->uuid = '65d3b586-5a2e-4863-b6a1-bd73675c7682';
    $display->content['new-65d3b586-5a2e-4863-b6a1-bd73675c7682'] = $pane;
    $display->panels['content'][0] = 'new-65d3b586-5a2e-4863-b6a1-bd73675c7682';
    $pane = new stdClass();
    $pane->pid = 'new-13aa81dc-7ee7-4e88-b37f-726e0b8b7464';
    $pane->panel = 'content';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '13aa81dc-7ee7-4e88-b37f-726e0b8b7464';
    $display->content['new-13aa81dc-7ee7-4e88-b37f-726e0b8b7464'] = $pane;
    $display->panels['content'][1] = 'new-13aa81dc-7ee7-4e88-b37f-726e0b8b7464';
    $pane = new stdClass();
    $pane->pid = 'new-7629bbe4-41b0-41dd-9d05-5cd89f962275';
    $pane->panel = 'content';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7629bbe4-41b0-41dd-9d05-5cd89f962275';
    $display->content['new-7629bbe4-41b0-41dd-9d05-5cd89f962275'] = $pane;
    $display->panels['content'][2] = 'new-7629bbe4-41b0-41dd-9d05-5cd89f962275';
    $pane = new stdClass();
    $pane->pid = 'new-d74ac9b6-f0f7-4a86-9d3c-2d1f1f1e36fe';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'it_vejledninger-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd74ac9b6-f0f7-4a86-9d3c-2d1f1f1e36fe';
    $display->content['new-d74ac9b6-f0f7-4a86-9d3c-2d1f1f1e36fe'] = $pane;
    $display->panels['content'][3] = 'new-d74ac9b6-f0f7-4a86-9d3c-2d1f1f1e36fe';
    $pane = new stdClass();
    $pane->pid = 'new-857b4782-490e-4da3-badb-657a3efb4355';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '857b4782-490e-4da3-badb-657a3efb4355';
    $display->content['new-857b4782-490e-4da3-badb-657a3efb4355'] = $pane;
    $display->panels['content'][4] = 'new-857b4782-490e-4da3-badb-657a3efb4355';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-13aa81dc-7ee7-4e88-b37f-726e0b8b7464';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_557667a1-460e-4beb-904e-8eb83dabc864'] = $handler;

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
