<?php
/**
 * @file
 * os2intra_struktur_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2intra_struktur_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_657b7a4c-6618-4410-ad94-4eafb7b28eba';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Overordnet struktur',
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'os2web_base_tax_site_structure' => 'os2web_base_tax_site_structure',
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
    $pane->pid = 'new-414d6fcd-89eb-4ced-b108-c48dac7b5ec8';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'term_panel_views_term_-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'arguments' => array(
        'parent' => '%term:tid',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '414d6fcd-89eb-4ced-b108-c48dac7b5ec8';
    $display->content['new-414d6fcd-89eb-4ced-b108-c48dac7b5ec8'] = $pane;
    $display->panels['content'][1] = 'new-414d6fcd-89eb-4ced-b108-c48dac7b5ec8';
    $pane = new stdClass();
    $pane->pid = 'new-8cd3daef-0d91-4283-be64-a5336768d0ca';
    $pane->panel = 'content';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'os2-box-secondary',
      'template_suggestion' => 'views_panes',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8cd3daef-0d91-4283-be64-a5336768d0ca';
    $display->content['new-8cd3daef-0d91-4283-be64-a5336768d0ca'] = $pane;
    $display->panels['content'][2] = 'new-8cd3daef-0d91-4283-be64-a5336768d0ca';
    $pane = new stdClass();
    $pane->pid = 'new-77788e50-735f-45ee-b2c5-00c59f40837d';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_os2intra_base_spotboxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'argument_term_1',
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
    $pane->uuid = '77788e50-735f-45ee-b2c5-00c59f40837d';
    $display->content['new-77788e50-735f-45ee-b2c5-00c59f40837d'] = $pane;
    $display->panels['sidebar'][0] = 'new-77788e50-735f-45ee-b2c5-00c59f40837d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_657b7a4c-6618-4410-ad94-4eafb7b28eba'] = $handler;

  return $export;
}
