<?php



/**
 * Implements hook_privatemsg_view_alter().
 */
function intranet_theme_privatemsg_view_alter(&$elements) {
  // Wrap the message view and reply form in a commons pod.
  $elements['#theme_wrappers'][] = 'container';
  $elements['#attributes']['class'][] = 'privatemsg-conversation';
  $elements['#attributes']['class'][] = 'commons-pod';

  // Knock the reply form title down an h-level.
  if (isset($elements['reply']['reply']['#markup'])) {
    $elements['reply']['reply']['#markup'] = str_replace('h2', 'h3', $elements['reply']['reply']['#markup']);
  }

  // Apply classes to the form actions and make sure the submit comes first.
  if (isset($elements['reply']['actions']['submit'])) {
    $elements['reply']['actions']['submit']['#attributes']['class'][] = 'action-item-primary';
    $elements['reply']['actions']['submit']['#weight'] = 0;
  }
  if (isset($elements['reply']['actions']['cancel'])) {
    $elements['reply']['actions']['cancel']['#attributes']['class'][] = 'action-item';
    $elements['reply']['actions']['cancel']['#weight'] = 1;
  }
}

/**
 * Implements hook_privatemsg_message_view_alter().
 */
function intranet_theme_privatemsg_message_view_alter(&$elements) {
  if (isset($elements['message_actions'])) {
    // Move the message links into a different variable and make it a renderable
    // array. Privatemsg has the links hardcoded, so this is the only way to
    // gain control and prevent extra processing.
    $elements['message_links'] = array(
      '#theme' => 'links__privatemsg_message',
      '#links' => $elements['message_actions'],
      '#attributes' => array(
        'class' => array('privatemsg-message-links', 'links'),
      ),
    );
    unset($elements['message_actions']);
  }
}

/**
 * Implements hook_preprocess_privatemsg_view().
 */
function intranet_theme_preprocess_privatemsg_view(&$variables, $hook) {
  // Make the template conform with Drupal standard attributes.
  if (isset($variables['message_classes'])) {
    $variables['classes_array'] = array_merge($variables['classes_array'], $variables['message_classes']);
  }
  $variables['classes_array'][] = 'clearfix';
  $variables['attributes_array']['id'] = 'privatemsg-mid-' . $variables['mid'];
  $variables['content_attributes_array']['class'][] = 'privatemsg-message-content';

  // Add a distinct class to the "Delete" action.
  if (isset($variables['message_links']['#links'])) {
    foreach ($variables['message_links']['#links'] as &$link) {
      // Due to the lack of a proper key-baed identifier, a string search is the
      // only flexible way to sniff out the link.
      if (strpos($link['href'], 'delete')) {
        $link['attributes']['class'][] = 'message-delete';
      }
    }
  }
}
