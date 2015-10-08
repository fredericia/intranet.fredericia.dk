<?php



/**
 * Implements hook_preprocess_form().
 *
 * Since Commons Origins overrides the default theme_form() function, we will
 * need to perform some processing on attributes to make it work in a template.
 */
function intranet_theme_preprocess_form(&$variables, $hook) {
  // Bootstrap the with some of Drupal's default variables.
  template_preprocess($variables, $hook);

  $element = &$variables['element'];
  if (isset($element['#action'])) {
    $element['#attributes']['action'] = drupal_strip_dangerous_protocols($element['#action']);
  }
  element_set_attributes($element, array('method', 'id'));
  if (empty($element['#attributes']['accept-charset'])) {
    $element['#attributes']['accept-charset'] = "UTF-8";
  }
  $variables['attributes_array'] = $element['#attributes'];

  // Roll the classes into the attributes.
  if (empty($variables['attributes_array']['class'])) {
    $variables['attributes_array']['class'] = $variables['classes_array'];
  }
  else {
    if (!is_array($variables['attributes_array']['class'])) {
      $variables['attributes_array']['class'] = array($variables['attributes_array']['class']);
    }
    $variables['attributes_array']['class'] = array_merge($variables['attributes_array']['class'], $variables['classes_array']);
  }

  // Give the search form on the search page pod styling.
  if (isset($element['#search_page']) || (isset($element['module']) && ($element['module']['#value'] == 'search_facetapi' || $element['module']['#value'] == 'user'))) {
    $variables['attributes_array']['class'][] = 'search-form-page';
    $variables['attributes_array']['class'][] = 'commons-pod';
    $variables['attributes_array']['class'][] = 'clearfix';
  }

  // Wrap some forms in the commons pod styling.
  $pods = array(
    'user-login',
    'user-pass',
    'user-register-form',
  );
  if (in_array($element['#id'], $pods)) {
    $variables['attributes_array']['class'][] = 'commons-pod';
  }

  // Give the dynamic filters a special class to target.
  if (strpos($element['#id'], 'views-exposed-form-commons-homepage-content') === 0 || strpos($element['#id'], 'views-exposed-form-commons-events-upcoming') === 0 || strpos($element['#id'], 'views-exposed-form-commons-bw') === 0) {
    $variables['attributes_array']['class'][] = 'dynamic-filter-lists';
  }

  // Give the keyword filter a pod wrapper.
  if (strpos($element['#id'], 'views-exposed-form-commons-groups') === 0) {
    $variables['attributes_array']['class'][] = 'keyword-filter';
    $variables['attributes_array']['class'][] = 'commons-pod';
  }

  // Set an identifying class to the event attendance form.
  if(strpos($element['#id'], 'commons-events-attend-event-form') === 0) {
    $variables['attributes_array']['class'][] = 'node-actions';
  }

}

/**
 * Implements hook_process_form().
 *
 * Since Commons Origins overrides the default theme_form() function, we will
 * need to perform some processing on attributes to make it work in a template.
 */
function intranet_theme_process_form(&$variables, $hook) {
  // Crunch down attribute arrays.
  template_process($variables, $hook);
}

/**
 * Implements hook_preprocess_form_content().
 */
function intranet_theme_preprocess_form_content(&$variables, $hook) {
  // Bootstrap the with some of Drupal's default variables.
  template_preprocess($variables, $hook);

  if (isset($variables['form']['supplementary'])) {
    foreach ($variables['form']['supplementary'] as &$field) {
      if (is_array($field) && isset($field['#theme_wrappers'])) {
        $field['#theme_wrappers'][] = 'container';
        $field['#attributes']['class'][] = 'commons-pod';
      }
    }
  }

  // The buttons for toggling event attendance should be large and noticeable.
  // These forms have a varying form id, so check for if the id contains a
  // string instead of the whole thing.
  if (strpos($variables['form']['#form_id'], 'commons_events_attend_event_form') === 0) {
    $variables['form']['submit']['#attributes']['class'][] = 'action-item-primary';
  }
  if (strpos($variables['form']['#form_id'], 'commons_events_cancel_event_form') === 0) {
    $variables['form']['submit']['#attributes']['class'][] = 'action-item-active';
  }

  // Make the "Save" button more noticeable.
  if (isset($variables['form']['#node_edit_form']) && $variables['form']['#node_edit_form']) {
    $variables['form']['actions']['submit']['#attributes']['class'][] = 'action-item-primary';
  }

  // Make the comment form "Save" button more noticeable.
  if ($variables['form']['#id'] == 'comment-form') {
    $variables['form']['actions']['submit']['#attributes']['class'][] = 'action-item-primary';
  }

  // Hide the label and make the search button primary.
  if (isset($variables['form']['#search_page']) || (isset($variables['form']['module']) && ($variables['form']['module']['#value'] == 'search_facetapi' || $variables['form']['module']['#value'] == 'user'))) {
    $variables['form']['basic']['keys']['#title_display'] = 'invisible';
    $variables['form']['basic']['submit']['#attributes']['class'][] = 'action-item-search';
  }

  // Make the partial post form submit button a primary action and give some
  // theme hook suggestions for easy overriding.
  if (strpos($variables['form']['#form_id'], 'commons_bw_partial_node_form_') === 0) {
    $variables['form']['actions']['submit']['#attributes']['class'][] = 'action-item-primary';
    $variables['form']['title']['#markup'] = str_replace('<h3>', '<h3 class="partial-node-form-title">', $variables['form']['title']['#markup']);
  }

  // Make the links and buttons on the private message forms have the
  // appropriate styles.
  if ($variables['form']['#form_id'] == 'commons_trusted_contacts_messages_popup' || $variables['form']['#form_id'] == 'privatemsg_new') {
    if (isset($variables['form']['actions']['submit'])) {
      $variables['form']['actions']['submit']['#attributes']['class'][] = 'action-item-primary';
    }
    if (isset($variables['form']['actions']['full_form'])) {
      $variables['form']['actions']['full_form']['#attributes']['class'][] = 'action-item';
    }
    if (isset($variables['form']['actions']['cancel'])) {
      $variables['form']['actions']['cancel']['#attributes']['class'][] = 'action-item';
      $variables['form']['actions']['cancel']['#weight'] = $variables['form']['actions']['submit']['#weight'] + 1;
    }
  }
}

/**
 * Implements hook_process_form_content().
 */
function intranet_theme_process_form_content(&$variables, $hook) {
  // Crunch down attribute arrays.
  template_process($variables, $hook);
}

/**
 * Implements hook_form_alter().
 */
function intranet_theme_form_alter(&$form, &$form_state, $form_id) {
  // Give forms a common theme function so we do not have to declare every
  // single form we want to override in hook_theme().
  if (is_array($form['#theme'])) {
    $hooks = array('form_content');
    $form['#theme'] = array_merge($form['#theme'], $hooks);
  }
  else {
    $form['#theme'] = array(
      $form['#theme'],
      'form_content',
    );
  }

  // Description text on these fields is redundant.
  if ($form_id == 'user_login') {
    $form['name']['#description'] = '';
    $form['pass']['#description'] = '';
  }

  if ($form_id == 'user_register_form') {
    $form['account']['mail']['#description'] = t('Password reset and notification emails will be sent to this address.');
  }

  if (isset($form['#node_edit_form']) && $form['#node_edit_form']) {
    // Vertical tabs muck things up, so things need to be shuffled to get rid
    // of them.
    $general_settings = array();
    foreach ($form as $id => $field) {
      if (is_array($field) && isset($field['#group']) && $field['#group'] == 'additional_settings' && (!isset($field['#access']) || $field['#access'] !== FALSE)) {
        $general_settings[$id] = $field;
        $general_settings[$id]['#collapsible'] = TRUE;
        $general_settings[$id]['#collapsed'] = TRUE;
        unset($general_settings[$id]['#group']);
      }
    }
    if (!empty($general_settings)) {
      $form['general_settings'] = array(
        '#theme_wrappers' => array('container'),
        '#attributes' => array(
          'class' => array('general-settings'),
        ),
        '#weight' => 100,
        'general_settings' => $general_settings,
      );
      $form['additional_settings']['#access'] = FALSE;
    }

    // Declare the fields to go into each column.
    $supplementary = array(
      'event_topics',
      'field_topics',
      'general_settings',
    );

    foreach ($supplementary as $field) {
      if (isset($form[$field])) {
        // Translate the field to the appropriate container.
        $form['supplementary'][$field] = $form[$field];

        // Remove access to the old placement instead of unset() to maintain
        // the legacy information.
        $form[$field]['#access'] = FALSE;
      }
    }
  }
}



/**
 * Implements hook_theme().
 */
function intranet_theme($existing, $type, $theme, $path) {
  return array(
    // Register the newly added theme_form_content() hook so we can utilize
    // theme hook suggestions.
    // @see intranet_theme_form_alter().
    'form_content' => array(
      'render element' => 'form',
      'path' => drupal_get_path('theme', 'intranet_theme') . '/templates/form',
      'template' => 'form-content',
      'pattern' => 'form_content__',
    ),
  );
}

/**
 * Overrides theme_fieldset().
 *
 * Add another div wrapper around fieldsets for styling purposes.
 */
function intranet_theme_fieldset($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id'));
  _form_set_class($element, array('form-wrapper'));

  $output = '<fieldset' . drupal_attributes($element['#attributes']) . '>';
  if (!empty($element['#title'])) {
    // Always wrap fieldset legends in a SPAN for CSS positioning.
    $output .= '<legend><span class="fieldset-legend">' . $element['#title'] . '</span></legend>';
  }
  $output .= '<div class="fieldset-wrapper">';
  if (!empty($element['#description'])) {
    $output .= '<div class="fieldset-description">' . $element['#description'] . '</div>';
  }
  $output .= $element['#children'];
  if (isset($element['#value'])) {
    $output .= $element['#value'];
  }
  $output .= '</div>';
  $output .= "</fieldset>\n";
  return '<div class="fieldset-outer-wrapper">' . $output . '</div>';
}
