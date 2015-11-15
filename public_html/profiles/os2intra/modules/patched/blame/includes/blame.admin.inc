<?php
/**
 * @file
 * Admin include.
 */

/**
 * Blame module admin settings form.
 */
function blame_settings_form() {
  $form = array();
  $form['blame_roles'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Blame Roles'),
    '#options' => user_roles(),
    '#description' => t('Forms submitted by users of selected roles will be tracked, unless the user is included in the ignore list below.'),
    '#default_value' => array_keys(user_roles(FALSE, 'track blame')),
  );

  $form['blame_ignore_uids'] = array(
    '#type' => 'textfield',
    '#title' => t('Ignore Users'),
    '#description' => t('Form submissions by these users will not be tracked.'),
    '#default_value' => blame_settings_uids_users(variable_get('blame_ignore_uids', array())),
    '#autocomplete_path' => 'blame/autocomplete',
  );

  $form['blame_track_uids'] = array(
    '#type' => 'textfield',
    '#title' => t('Blame Users'),
    '#description' => t('Form submissions by these users will be tracked regardless of their role.'),
    '#default_value' => blame_settings_uids_users(variable_get('blame_track_uids', array())),
    '#autocomplete_path' => 'blame/autocomplete',
  );

  $form['blame_exclude_form_ids'] = array(
    '#type' => 'textarea',
    '#title' => t('Exclude Form Ids'),
    '#description' => t('Enter the form IDs (one per line) to exclude from tracking.'),
    '#default_value' => implode("\n", variable_get('blame_exclude_form_ids', array())),
  );

  $form['blame_show_output'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Show output alert notices on screen'),
    '#default_value' => variable_get('blame_show_output', FALSE),
  );

  $form['blame_pages_set'] = array(
    '#type' => 'fieldset',
    '#title' => t('Track forms on specific pages'),
    // Include/Exclude radios.
    'blame_pages_in_ex' => array(
      '#type' => 'radios',
      '#options' => array(
        BLAME_EXCLUDE => t('All pages except those listed'),
        BLAME_INCLUDE => t('Only the listed pages'),
      ),
      '#default_value' => variable_get('blame_pages_in_ex', BLAME_EXCLUDE),
    ),
    // Pages textarea.
    'blame_pages' => array(
      '#type' => 'textarea',
      '#description' => t("Specify pages with forms to exclude from tracking. Enter one path per line. The '*' character is a wild card. <em>&lt;front&gt;</em> is the front page."),
      '#default_value' => variable_get('blame_pages', ''),
    ),
  );

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  $form['#submit'][] = 'blame_settings_form_submit';
  $form['#theme'] = 'system_settings_form';

  // Add a button to clear the logs.
  if (user_access('clear blame log')) {
    $form['clear'] = array(
      '#type' => 'fieldset',
      '#title' => t('Clear Blame Log'),
      '#description' => t('Click below to clear the Blame log. This action cannot be undone.'),
      '#weight' => 100,
      'clear_submit' => array(
        '#type' => 'submit',
        '#value' => t('Clear log'),
        '#submit' => array('blame_clear_log_submit'),
      ),
    );
  }

  return $form;
}

/**
 * Settings form submit handler.
 */
function blame_settings_form_submit($form, &$form_state) {
  // Save the tracked roles as permissions.
  foreach ($form_state['values']['blame_roles'] as $role) {
    user_role_grant_permissions($role, array('track blame'));
  }

  // Save the remaining settings as variables.
  variable_set('blame_ignore_uids', blame_settings_users_uids($form_state['values']['blame_ignore_uids']));
  variable_set('blame_track_uids', blame_settings_users_uids($form_state['values']['blame_track_uids']));
  variable_set('blame_exclude_form_ids', array_map('trim', explode("\n", $form_state['values']['blame_exclude_form_ids'])));
  variable_set('blame_pages_in_ex', $form_state['values']['blame_pages_in_ex']);
  variable_set('blame_pages', trim($form_state['values']['blame_pages']));
  variable_set('blame_show_output', $form_state['values']['blame_show_output']);
}

/**
 * Clear log callback.
 */
function blame_clear_log_submit($form, &$form_state) {
  $batch = array(
    'operations' => array(),
    'finished' => 'blame_clear_log_finished',
    'title' => t('Clearing Blame Log'),
    'init_message' => t('Initializing Blame log removal.'),
    'progress_message' => t('Removed @current out of @total.'),
    'error_message' => t('Blame log removal has encountered an error.'),
    'file' => drupal_get_path('module', 'blame') . '/includes/blame.batch.inc',
  );

  // Get all blame ids.
  $query = new EntityFieldQuery();
  $blames = $query->entityCondition('entity_type', 'blame')->execute();
  if (!empty($blames['blame'])) {
    foreach (array_keys($blames['blame']) as $bid) {
      $batch['operations'][] = array('blame_clear_log_blame', array($bid));
    }
  }

  batch_set($batch);
}

/**
 * String parsing function.
 */
function blame_settings_users_uids($users_string) {
  $return = array();

  if (preg_match_all('/(\w+) \((\d+)\)/', $users_string, $matches)) {
    $users = user_load_multiple($matches[2]);
    foreach ($matches[2] as $key => $uid) {
      if ($users[$uid]->name == $matches[1][$key]) {
        $return[] = $uid;
      }
    }
  }

  return $return;
}

/**
 * Array to string function.
 */
function blame_settings_uids_users($uids) {
  $return = array();

  if (count($uids)) {
    $users = user_load_multiple($uids);
    foreach ($users as $user) {
      $return[] = t('@name (@uid)', array('@name' => $user->name, '@uid' => $user->uid));
    }
  }

  return implode(', ', $return);
}
