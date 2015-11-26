<?php
/**
 * @file
 * node_basket.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function node_basket_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'node_basket_view';
  $page->task = 'page';
  $page->admin_title = '';
  $page->admin_description = '';
  $page->path = 'node_basket/view';
  $page->access = array();
  $page->menu = array(
    'type' => 'default tab',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Kurv',
      'name' => 'user-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_node_basket_view__panel';
  $handler->task = 'page';
  $handler->subtask = 'node_basket_view';
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
    'relationships' => array(
      0 => array(
        'identifier' => 'Indholdselement from Bruger (on Bruger: Værktøjskasser [field_node_basket_toolboxes])',
        'keyword' => 'node',
        'name' => 'entity_from_field:field_node_basket_toolboxes-user-node',
        'delta' => '0',
        'context' => 'context_user_1',
        'id' => 1,
      ),
    ),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = '2-columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'left-content' => NULL,
      'right-content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b133eb28-0adf-4001-8c01-4889379588d7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2d7f4b65-10df-4515-9d4a-bdc3673cd77f';
    $pane->panel = 'left-content';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_basket-my_basket';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'context' => array(
        0 => 'context_user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Min kurv',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2d7f4b65-10df-4515-9d4a-bdc3673cd77f';
    $display->content['new-2d7f4b65-10df-4515-9d4a-bdc3673cd77f'] = $pane;
    $display->panels['left-content'][0] = 'new-2d7f4b65-10df-4515-9d4a-bdc3673cd77f';
    $pane = new stdClass();
    $pane->pid = 'new-16bdd1f9-778b-4609-97e7-de6e562e1563';
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
      'override_title' => 1,
      'override_title_text' => 'Søg på værktøjskasser',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'os2-box-quaternary',
      'template_suggestion' => 'views',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16bdd1f9-778b-4609-97e7-de6e562e1563';
    $display->content['new-16bdd1f9-778b-4609-97e7-de6e562e1563'] = $pane;
    $display->panels['right-content'][0] = 'new-16bdd1f9-778b-4609-97e7-de6e562e1563';
    $pane = new stdClass();
    $pane->pid = 'new-d2a616ac-17d4-4f0a-84f4-5cb73564da76';
    $pane->panel = 'right-content';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_basket-my_toolboxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'context' => array(
        0 => 'context_user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Mine værktøjskasser',
      'override_title_heading' => 'h3',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd2a616ac-17d4-4f0a-84f4-5cb73564da76';
    $display->content['new-d2a616ac-17d4-4f0a-84f4-5cb73564da76'] = $pane;
    $display->panels['right-content'][1] = 'new-d2a616ac-17d4-4f0a-84f4-5cb73564da76';
    $pane = new stdClass();
    $pane->pid = 'new-29bd7118-77f5-4d76-b5ab-95bc57808b76';
    $pane->panel = 'right-content';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_basket-subscribed_toolboxes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'context' => array(
        0 => 'context_user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Abonnementer',
      'override_title_heading' => 'h3',
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
    $pane->uuid = '29bd7118-77f5-4d76-b5ab-95bc57808b76';
    $display->content['new-29bd7118-77f5-4d76-b5ab-95bc57808b76'] = $pane;
    $display->panels['right-content'][2] = 'new-29bd7118-77f5-4d76-b5ab-95bc57808b76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['node_basket_view'] = $page;

  return $pages;

}
