<?php



/**
 * Implements hook_preprocess_user_profile().
 */
function intranet_theme_preprocess_user_profile(&$variables, $hook) {
  if (in_array('user_profile__search_results', $variables['theme_hook_suggestions'])) {
    // Give the profile a distinctive class to target and wrap the display in
    // pod styling.
    $variables['classes_array'][] = 'profile-search-result';
    $variables['classes_array'][] = 'commons-pod';

    // Wrap the group list and related title in a div.
    if (isset($variables['user_profile']['group_membership'])) {
      $variables['user_profile']['group_membership']['#theme_wrappers'][] = 'container';
      $variables['user_profile']['group_membership']['#attributes']['class'][] = 'profile-groups';
    }

    // Group actionable items together in a container.
    $variables['user_profile']['user_actions'] = array();
    $user_actions = array(
      'flags',
      'privatemsg_send_new_message',
      'group_group',
    );
    foreach ($user_actions as $action) {
      if (isset($variables['user_profile'][$action])) {
        $variables['user_profile']['user_actions'][$action] = $variables['user_profile'][$action];
        $variables['user_profile'][$action]['#access'] = FALSE;
      }
    }
    if (!module_exists('commons_trusted_contacts') && isset(  $variables['user_profile']['user_actions']['group_group'])) {
      $variables['user_profile']['user_actions']['group_group']['#access'] = FALSE;
    }
    if (!empty($variables['user_profile']['user_actions'])) {
      $variables['user_profile']['user_actions'] += array(
        '#theme_wrappers' => array('container'),
        '#attributes' => array(
          'class' => array('profile-actions'),
        ),
      );
    }
  }
}
