<?php



/**
 * Implements hook_preprocess_commons_search_solr_user_results().
 */
function intranet_theme_preprocess_commons_search_solr_user_results(&$variables, $hook) {
  // Hide the results title.
  $variables['title_attributes_array']['class'][] = 'element-invisible';
}

/**
 * Overrides hook_rate_button() for commons_like.
 */
function intranet_theme_rate_button__commons_like($variables) {
  $text = $variables['text'];
  $href = $variables['href'];
  $class = $variables['class'];
  static $id = 0;
  $id++;

  $classes = 'rate-button';
  if ($class) {
    $classes .= ' ' . $class;
  }
  if (empty($href)) {
    // Widget is disabled or closed.
    return '<span class="' . $classes . '" id="rate-button-' . $id . '">' .
    '<span class="element-invisible">' . check_plain($text) . '</span>' .
    '</span>';
  }
  else {
    return '<a class="' . $classes . '" id="rate-button-' . $id . '" rel="nofollow" href="' . htmlentities($href) . '" title="' . check_plain($text) . '">' .
    '<span class="element-invisible">' . check_plain($text) . '</span>' .
    '</a>';
  }
}

/**
 * Implements hook_preprocess_rate_template_commons_like().
 */
function intranet_theme_preprocess_rate_template_commons_like(&$variables, $hook) {
  // Roll the content into a renderable array to make the template simpler.
  $variables['content'] = array(
    'link' => array(
      '#theme' => 'rate_button__commons_like',
      '#text' => $variables['links'][0]['text'],
      '#href' => $variables['links'][0]['href'],
      '#class' => 'rate-commons-like-btn action-item-small action-item-merge',
    ),
    'count' => array(
      '#theme' => 'html_tag',
      '#tag' => 'span',
      '#value' => $variables['results']['count'],
      '#attributes' => array(
        'class' => array(
          'rate-commons-like-count',
          'action-item-small-append',
          'action-item-merge',
        ),
      ),
    ),
  );
}



/**
 * Implements hook_commons_utility_links_alter().
 */
function intranet_theme_commons_utility_links_alter(&$element) {
  // Add wrappers to title elements in notification links so that they can be
  // replaced with an icon.
  $iconify = array(
    'unread-invitations',
    'unread-messages',
  );
  foreach ($iconify as $name) {
    if (isset($element[$name])) {
      $words = explode(' ', $element[$name]['title']);
      foreach($words as &$word) {
        if(is_numeric($word)) {
          $word = '<span class="notification-count">' . $word . '</span>';
        }
        else {
          $word = '<span class="notification-label element-invisible">' . $word . '</span>';
        }
      }
      $element[$name]['title'] = implode(' ', $words);
      $element[$name]['html'] = TRUE;
    }
  }
}
