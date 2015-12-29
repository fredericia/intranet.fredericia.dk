<?php
/**
 * @file
 * os2intra_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function os2intra_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nyt_og_opdateret';
  $page->task = 'page';
  $page->admin_title = 'Nyt og opdateret';
  $page->admin_description = '';
  $page->path = 'opdateret';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Nyt og opdateret',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nyt_og_opdateret__panel_context_54be813a-8fef-4d01-b761-c56177e3185d';
  $handler->task = 'page';
  $handler->subtask = 'nyt_og_opdateret';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar-7-5';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nyt og opdateret';
  $display->uuid = '8c8e63f9-9033-4c59-8cc1-568c1de35014';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef3948fc-3024-4ab9-861c-dc60bcbe2fd7';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2intra_forside_views-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = 'ef3948fc-3024-4ab9-861c-dc60bcbe2fd7';
    $display->content['new-ef3948fc-3024-4ab9-861c-dc60bcbe2fd7'] = $pane;
    $display->panels['content'][0] = 'new-ef3948fc-3024-4ab9-861c-dc60bcbe2fd7';
    $pane = new stdClass();
    $pane->pid = 'new-0b3ca783-ea58-4d2c-89c1-e2422e9b23bf';
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
    $pane->uuid = '0b3ca783-ea58-4d2c-89c1-e2422e9b23bf';
    $display->content['new-0b3ca783-ea58-4d2c-89c1-e2422e9b23bf'] = $pane;
    $display->panels['sidebar'][0] = 'new-0b3ca783-ea58-4d2c-89c1-e2422e9b23bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b3ca783-ea58-4d2c-89c1-e2422e9b23bf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nyt_og_opdateret'] = $page;

  return $pages;

}
