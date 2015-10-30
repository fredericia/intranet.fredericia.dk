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
  $handler->name = 'user_edit__panel_context_ddd188c9-7b4f-49b6-9df5-848a379a6f90';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Bruger redigering',
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
  $display->uuid = '04353851-680e-415c-aed0-cc87a56deb5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c940555c-f938-4812-84f9-cf9ab41c213b';
    $pane->panel = 'content';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_name_first';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'c940555c-f938-4812-84f9-cf9ab41c213b';
    $display->content['new-c940555c-f938-4812-84f9-cf9ab41c213b'] = $pane;
    $display->panels['content'][0] = 'new-c940555c-f938-4812-84f9-cf9ab41c213b';
    $pane = new stdClass();
    $pane->pid = 'new-7a1adcdc-a781-4720-bd68-2d2f38127e13';
    $pane->panel = 'content';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_name_last';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '7a1adcdc-a781-4720-bd68-2d2f38127e13';
    $display->content['new-7a1adcdc-a781-4720-bd68-2d2f38127e13'] = $pane;
    $display->panels['content'][1] = 'new-7a1adcdc-a781-4720-bd68-2d2f38127e13';
    $pane = new stdClass();
    $pane->pid = 'new-2a83de69-8d6b-49f1-b79e-c7f4f4b2ea9e';
    $pane->panel = 'content';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_os2intra_user_titles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '2a83de69-8d6b-49f1-b79e-c7f4f4b2ea9e';
    $display->content['new-2a83de69-8d6b-49f1-b79e-c7f4f4b2ea9e'] = $pane;
    $display->panels['content'][2] = 'new-2a83de69-8d6b-49f1-b79e-c7f4f4b2ea9e';
    $pane = new stdClass();
    $pane->pid = 'new-e8a92eac-67c2-4533-b505-9a640b7f6788';
    $pane->panel = 'content';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_os2intra_organisation_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'e8a92eac-67c2-4533-b505-9a640b7f6788';
    $display->content['new-e8a92eac-67c2-4533-b505-9a640b7f6788'] = $pane;
    $display->panels['content'][3] = 'new-e8a92eac-67c2-4533-b505-9a640b7f6788';
    $pane = new stdClass();
    $pane->pid = 'new-03ddd9c3-99a0-4368-befb-6b4f18f25a1b';
    $pane->panel = 'content';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_os2intra_canteen_canteen';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '03ddd9c3-99a0-4368-befb-6b4f18f25a1b';
    $display->content['new-03ddd9c3-99a0-4368-befb-6b4f18f25a1b'] = $pane;
    $display->panels['content'][4] = 'new-03ddd9c3-99a0-4368-befb-6b4f18f25a1b';
    $pane = new stdClass();
    $pane->pid = 'new-c0979932-58b5-4c7a-8cb0-64bf8675657e';
    $pane->panel = 'content';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:og_user_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c0979932-58b5-4c7a-8cb0-64bf8675657e';
    $display->content['new-c0979932-58b5-4c7a-8cb0-64bf8675657e'] = $pane;
    $display->panels['content'][5] = 'new-c0979932-58b5-4c7a-8cb0-64bf8675657e';
    $pane = new stdClass();
    $pane->pid = 'new-1a1fc022-0d52-49ae-b60f-af42ad6ea6eb';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_os2intra_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '1a1fc022-0d52-49ae-b60f-af42ad6ea6eb';
    $display->content['new-1a1fc022-0d52-49ae-b60f-af42ad6ea6eb'] = $pane;
    $display->panels['sidebar'][0] = 'new-1a1fc022-0d52-49ae-b60f-af42ad6ea6eb';
    $pane = new stdClass();
    $pane->pid = 'new-31d0643e-601d-4729-bce9-e6ac810ac34a';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_os2intra_user_competences';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '31d0643e-601d-4729-bce9-e6ac810ac34a';
    $display->content['new-31d0643e-601d-4729-bce9-e6ac810ac34a'] = $pane;
    $display->panels['sidebar'][1] = 'new-31d0643e-601d-4729-bce9-e6ac810ac34a';
    $pane = new stdClass();
    $pane->pid = 'new-d863a4cf-4ccc-4fb8-a1df-c4ec6c2c8fc0';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_os2intra_user_inter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'd863a4cf-4ccc-4fb8-a1df-c4ec6c2c8fc0';
    $display->content['new-d863a4cf-4ccc-4fb8-a1df-c4ec6c2c8fc0'] = $pane;
    $display->panels['sidebar'][2] = 'new-d863a4cf-4ccc-4fb8-a1df-c4ec6c2c8fc0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c940555c-f938-4812-84f9-cf9ab41c213b';
  $handler->conf['display'] = $display;
  $export['user_edit__panel_context_ddd188c9-7b4f-49b6-9df5-848a379a6f90'] = $handler;

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
