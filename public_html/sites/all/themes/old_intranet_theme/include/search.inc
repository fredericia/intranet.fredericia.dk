<?php



/**
 * Implements hook_preprocess_search_result().
 */
function intranet_theme_preprocess_search_result(&$variables, $hook) {
  $variables['title_attributes_array']['class'][] = 'title';
  $variables['title_attributes_array']['class'][] = 'search-result-title';
  $variables['content_attributes_array']['class'][] = 'search-result-content';
}

/**
 * Implements hook_preprocess_search_results().
 *
 * Assemble attributes for styling that core does not do so we can keep the
 * tpl files simpler and make maintaining it a bit less worrisome since there
 * are 2 forms of search supported.
 */
function intranet_theme_preprocess_search_results(&$variables, $hook) {
  $variables['classes_array'][] = 'search-results-wrapper';
  $variables['title_attributes_array']['class'][] = 'search-results-title';
  $variables['content_attributes_array']['class'][] = 'search-results-content';
  $variables['content_attributes_array']['class'][] = 'commons-pod';
}

/**
 * Implements hook_process_search_results().
 */
function intranet_theme_process_search_results(&$variables, $hook) {
  // Set the title in preprocess so that it can be overridden by modules
  // further upstream.
  if (empty($variables['title'])) {
    $variables['title'] = t('Search results');
  }
}

/**
 * Shows a groups of blocks for starting a search from a filter.
 */
function intranet_theme_apachesolr_search_browse_blocks($vars) {
  $result = '';
  if ($vars['content']['#children']) {
    $result .= '<div class="apachesolr-browse-blocks">' . "\n";
    $result .= '  <h2 class="search-results-title">' . t('Browse available categories') . '</h2>' . "\n";
    $result .= '  <div class="commons-pod">' . "\n";
    $result .= '    <p>' . t('Pick a category to launch a search.') . '</p>' . "\n";
    $result .= $vars['content']['#children'] . "\n";
    $result .= '  </div>' . "\n";
    $result .= '</div>';
  }

  return $result;
}
