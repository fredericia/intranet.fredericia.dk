<?php

/**
 * @file
 * Callbacks for administrating entities.
 */

/**
 * Choose bundle of entity to add.
 *
 * @return array
 *   Array describing a list of bundles to render.
 */
function os2intra_bi_choose_bundle() {
  // Show list of all existing entity bundles.
  $items = array();
  foreach (os2intra_bi_plugin_load_multiple() as $entity_type_key => $entity_type) {
    $items[] = l(entity_label('os2intra_bi_plugin', $entity_type), 'os2intra-bi/add/' . $entity_type_key);
  }
  return array(
    'list' => array(
      '#theme' => 'item_list',
      '#items' => $items,
      '#title' => t('Choose type of OS2intra BI plugin to add'),
    ),
  );
}

/**
 * Form constructor for the entity add form.
 *
 * @param string $type
 *   Entity type (bundle) to add.
 *
 * @return array
 *   Entity edit form.
 */
function os2intra_bi_add($type) {
  $entity_type = os2intra_bi_plugin_load_multiple($type);
  drupal_set_title(t('Create @name', array(
    '@name' => $entity_type->label
  )));

  // Return form for the given entity bundle.
  $entity = entity_create('os2intra_bi', array('type' => $type));
  $output = drupal_get_form('os2intra_bi_form', $entity);
  return $output;
}

/**
 * Form constructor for the entity edit form.
 *
 * In this form we shall manually define all form elements related to editable
 * properties of the entity.
 *
 * @param object $entity
 *   Entity to edit.
 *
 * @return array
 *   Entity edit form.
 */
function os2intra_bi_form($form, &$form_state, $entity) {
  // Store the entity in the form.
  $form_state['entity'] = $entity;

  // Describe all properties of the entity which shall be shown on the form.
  $wrapper = entity_metadata_wrapper('os2intra_bi', $entity);
  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Name'),
    '#default_value' => $wrapper->title->value(),
  );
  $form['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#default_value' => $wrapper->description->value(),
  );

  // Add fields of the entity to the form.
  field_attach_form('os2intra_bi', $entity, $form, $form_state);

  // Add some buttons.
  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }
  $form['actions'] = array(
    '#weight' => 100,
  );
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save plugin'),
    '#submit' => $submit + array('os2intra_bi_form_submit'),
  );
  $entity_id = entity_id('os2intra_bi', $entity);
  if (!empty($entity_id)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('os2intra_bi_form_submit_delete'),
    );
  }

  return $form;
}

/**
 * Entity edit form "Save" submit handler.
 */
function os2intra_bi_form_submit($form, &$form_state) {
  // Automatically get edited entity from the form and save it.
  // @see entity_form_submit_build_entity()
  $entity = $form_state['entity'];
  entity_form_submit_build_entity('os2intra_bi', $entity, $form, $form_state);
  entity_save('os2intra_bi', $entity);

  // Redirect user to edited entity page.
  $entity_uri = entity_uri('os2intra_bi', $entity);
  $form_state['redirect'] = $entity_uri['path'];
  drupal_set_message(t('Entity %title saved.', array('%title' => entity_label('os2intra_bi', $entity))));
}

/**
 * Entity edit form "Delete" submit handler.
 */
function os2intra_bi_form_submit_delete($form, &$form_state) {
  // Redirect user to "Delete" URI for this entity.
  $entity = $form_state['entity'];
  $entity_uri = entity_uri('os2intra_bi', $entity);
  $form_state['redirect'] = $entity_uri['path'] . '/delete';
}

/**
 * Form constructor for the entity delete confirmation form.
 *
 * @param object $entity
 *   Entity to delete.
 *
 * @return array
 *   Confirmation form.
 */
function os2intra_bi_delete_form($form, &$form_state, $entity) {
  // Store the entity in the form.
  $form_state['entity'] = $entity;

  // Show confirm dialog.
  $entity_uri = entity_uri('os2intra_bi', $entity);
  $message = t('Are you sure you want to delete entity %title?', array('%title' => entity_label('os2intra_bi', $entity)));
  return confirm_form(
    $form,
    $message,
    $entity_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Entity "Confirm delete" form submit handler.
 */
function os2intra_bi_delete_form_submit($form, &$form_state) {
  // Delete the entity.
  $entity = $form_state['entity'];
  entity_delete('os2intra_bi', entity_id('os2intra_bi', $entity));

  // Redirect user.
  drupal_set_message(t('Entity %title deleted.', array('%title' => entity_label('os2intra_bi', $entity))));
  $form_state['redirect'] = '/os2intra-bi';
}

/**
 * Form constructor for the entity type edit form.
 *
 * In this form we shall manually define all form elements related to editable
 * properties of the entity.
 *
 * @param object $entity_type
 *   Enity type.
 * @param string $op
 *   Operation to perform on entity type.
 *
 * @return array
 *   Entity type edit form.
 */
function os2intra_bi_plugin_form($form, &$form_state, $entity_type, $op = 'edit') {
  // Handle the case when cloning is performed.
  if ($op == 'clone') {
    $entity_type->label .= ' (cloned)';
    $entity_type->type = '';
  }

  // Describe all properties of the entity which shall be shown on the form.
  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $entity_type->label,
    '#description' => t('The human-readable name of this entity type.'),
    '#required' => TRUE,
    '#size' => 30,
  );
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($entity_type->type) ? $entity_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $entity_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'os2intra_bi_plugin_load_multiple',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this entity type. It must only contain lowercase letters, numbers, and underscores.'),
  );
  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($entity_type->description) ? $entity_type->description : '',
    '#description' => t('Description about the entity type.'),
  );

  // Add some buttons.
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save entity type'),
    '#weight' => 40,
  );
  if (!$entity_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete entity type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('os2intra_bi_plugin_form_submit_delete'),
    );
  }

  return $form;
}

/**
 * Entity type edit form "Save" submit handler.
 */
function os2intra_bi_plugin_form_submit(&$form, &$form_state) {
  // Automatically get edited entity type from the form and save it.
  // @see entity_ui_form_submit_build_entity()
  $entity_type = entity_ui_form_submit_build_entity($form, $form_state);

  $import_file_field_instance = array(
    'label' => 'Import file',
    'widget' =>
    array (
      'type' => 'tablefield',
      'module' => 'tablefield',
      'active' => 0,
      'settings' =>
      array (
      ),
    ),
    'settings' =>
    array (
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => false,
    ),
    'display' =>
    array (
      'default' =>
      array (
        'label' => 'above',
        'type' => 'tablefield_default',
        'settings' =>
        array (
        ),
        'module' => 'tablefield',
        'weight' => 0,
      ),
    ),
    'required' => 1,
    'description' => '',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' =>
    array (
      0 =>
      array (
        'tablefield' =>
        array (
          'cell_0_0' => '',
          'cell_0_1' => '',
          'cell_0_2' => '',
          'cell_0_3' => '',
          'cell_0_4' => '',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => '',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'cell_4_0' => '',
          'cell_4_1' => '',
          'cell_4_2' => '',
          'cell_4_3' => '',
          'cell_4_4' => '',
          'rebuild' =>
          array (
            'count_cols' => 5,
            'count_rows' => 5,
            'rebuild' => 'Rebuild Table',
          ),
          'import' =>
          array (
            'file' => '',
            'import' => 'Upload CSV',
          ),
        ),
      ),
    ),
    'id' => '243',
    'field_id' => '143',
    'field_name' => 'os2intra_bi_import_file',
    'entity_type' => 'os2intra_bi',
    'bundle' => $entity_type->type,
    'deleted' => '0',
  );

  $opus_roles_field_instance = array (
    'label' => 'Opus Roles',
    'widget' =>
    array (
      'weight' => '32',
      'type' => 'entityreference_autocomplete_tags',
      'module' => 'entityreference',
      'active' => 1,
      'settings' =>
      array (
        'match_operator' => 'CONTAINS',
        'size' => '60',
        'entityreference_autocreate' =>
        array (
          'active' => 0,
          'author_current_user' => 1,
          'author' => '',
          'status' => '-1',
        ),
        'path' => '',
      ),
    ),
    'settings' =>
    array (
      'behaviors' =>
      array (
        'prepopulate' =>
        array (
          'status' => 0,
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => false,
    ),
    'display' =>
    array (
      'default' =>
      array (
        'label' => 'above',
        'type' => 'entityreference_label',
        'settings' =>
        array (
          'link' => false,
        ),
        'module' => 'entityreference',
        'weight' => 1,
      ),
    ),
    'required' => 0,
    'description' => '',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'default_value_function' => '',
    'id' => '246',
    'field_id' => '144',
    'field_name' => 'os2intra_bi_opus_roles',
    'entity_type' => 'os2intra_bi',
    'bundle' => $entity_type->type,
    'deleted' => '0',
  );

  field_create_instance($import_file_field_instance);
  field_create_instance($opus_roles_field_instance);

  entity_save('os2intra_bi_plugin', $entity_type);

  // Redirect user.
  $form_state['redirect'] = 'admin/structure/os2intra-bi';
}

/**
 * Entity edit form "Delete" submit handler.
 */
function os2intra_bi_plugin_form_submit_delete(&$form, &$form_state) {
  // Redirect user to "Delete" URI for this entity type.
  $form_state['redirect'] = 'admin/structure/os2intra-bi/' . $form_state['os2intra_bi_plugin']->type . '/delete';
}

/**
 * Form constructor for the entity type delete confirmation form.
 *
 * @param object $entity_type
 *   Entity type to delete.
 *
 * @return array
 *   Confirmation form.
 */
function os2intra_bi_plugin_form_delete_confirm($form, &$form_state, $entity_type) {
  // Store the entity in the form.
  $form_state['entity_type'] = $entity_type;

  // Show confirm dialog.
  $message = t('Are you sure you want to delete entity type %title?', array('%title' => entity_label('entity_type', $entity_type)));
  return confirm_form(
    $form,
    $message,
    'os2intra_bi/' . entity_id('os2intra_bi_plugin', $entity_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Entity type "Confirm delete" form submit handler.
 */
function os2intra_bi_plugin_form_delete_confirm_submit($form, &$form_state) {
  // Delete the entity type.
  $entity_type = $form_state['entity_type'];
  entity_delete('os2intra_bi_plugin', entity_id('os2intra_bi_plugin', $entity_type));

  // Redirect user.
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $entity_type->type, '%title' => $entity_type->label)));
  $form_state['redirect'] = 'admin/structure/os2intra-bi';
}
