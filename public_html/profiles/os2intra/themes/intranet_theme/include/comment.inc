<?php


/**
 * Implements hook_process_comment_wrapper().
 */
function intranet_theme_process_comment_wrapper(&$variables, $hook) {
  // Make sure the form_title_attributes_array is rendered into a single string.
  $variables['form_title_attributes'] = drupal_attributes($variables['form_title_attributes_array']);
}

/**
 * Implements hook_preprocess_comment_wrapper().
 */
function intranet_theme_preprocess_comment_wrapper(&$variables, $hook) {
  // Change things around to use the attribute arrays for the titles.
  $variables['title_attributes_array']['class'][] = 'comments-title';
  $variables['form_title_attributes_array'] = array(
    'class' => array('comment-title', 'title', 'comment-form', 'comment-form-title')
  );
}
