<?php
/**
 * @file
 * os2intra_users.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2intra_users_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_02fd0cfe-abfa-4afa-9a3a-2bc9d2049494';
  $handler->task = 'user_view';
  $handler->subtask = '';
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
    'name' => '',
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
  $display->uuid = '8924ea5b-2ee6-445f-a6df-7896624629e5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-276c2a74-02a3-4252-91f7-73622ca76c4b';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'forfatters_indhold-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '276c2a74-02a3-4252-91f7-73622ca76c4b';
    $display->content['new-276c2a74-02a3-4252-91f7-73622ca76c4b'] = $pane;
    $display->panels['content'][0] = 'new-276c2a74-02a3-4252-91f7-73622ca76c4b';
    $pane = new stdClass();
    $pane->pid = 'new-487db9f2-545d-492c-ab41-ce1dfd303dd4';
    $pane->panel = 'sidebar';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '487db9f2-545d-492c-ab41-ce1dfd303dd4';
    $display->content['new-487db9f2-545d-492c-ab41-ce1dfd303dd4'] = $pane;
    $display->panels['sidebar'][0] = 'new-487db9f2-545d-492c-ab41-ce1dfd303dd4';
    $pane = new stdClass();
    $pane->pid = 'new-003b46ff-7e82-4dce-9e20-f2fe84d1b968';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:og_user_node';
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
        'links' => 1,
      ),
      'fences_wrapper' => 'div_div_div',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '003b46ff-7e82-4dce-9e20-f2fe84d1b968';
    $display->content['new-003b46ff-7e82-4dce-9e20-f2fe84d1b968'] = $pane;
    $display->panels['sidebar'][1] = 'new-003b46ff-7e82-4dce-9e20-f2fe84d1b968';
    $pane = new stdClass();
    $pane->pid = 'new-b345c675-d020-458d-ad80-76d04613d370';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_os2intra_user_inter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'fences_wrapper' => 'div_div_div',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = 'b345c675-d020-458d-ad80-76d04613d370';
    $display->content['new-b345c675-d020-458d-ad80-76d04613d370'] = $pane;
    $display->panels['sidebar'][2] = 'new-b345c675-d020-458d-ad80-76d04613d370';
    $pane = new stdClass();
    $pane->pid = 'new-8d365477-53c5-433d-bd23-d1e9344609a4';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_os2intra_user_titles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
      ),
      'fences_wrapper' => 'div_div_div',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '8d365477-53c5-433d-bd23-d1e9344609a4';
    $display->content['new-8d365477-53c5-433d-bd23-d1e9344609a4'] = $pane;
    $display->panels['sidebar'][3] = 'new-8d365477-53c5-433d-bd23-d1e9344609a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-487db9f2-545d-492c-ab41-ce1dfd303dd4';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_02fd0cfe-abfa-4afa-9a3a-2bc9d2049494'] = $handler;

  return $export;
}
