<?php



/**
 * Overrides theme_field() for group fields.
 *
 * This will apply button styling to the links for leaving and joining a group.
 */
function intranet_theme_field__group_group__group($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    if (isset($item['#type']) && $item['#type'] == 'link') {
      if (strpos($item['#href'], '/subscribe')) {
        $item['#options']['attributes']['class'][] = 'action-item-primary';
      }
      else {
        $item['#options']['attributes']['class'][] = 'action-item';
      }
    }

    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Overrides theme_field__addressfield().
 */
function intranet_theme_field__addressfield($variables) {
  $output = '';

  // Add Microformat classes to each address.
  foreach($variables['items'] as &$address) {
    // Only display an address if it has been populated. We determine this by
    // validating that the administrative area has been populated.
    if (!empty($address['#address']['administrative_area'])) {
      _intranet_theme_format_address($address);
    }
    else {
      // Deny access to incomplete addresses.
      $address['#access'] = FALSE;
    }
  }

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':</div> ';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}



/**
 * Implements hook_preprocess_field().
 */
function intranet_theme_preprocess_field(&$variables, $hook) {
  // Style the trusted contact link like a button.
  if ($variables['element']['#formatter'] == 'trusted_contact') {
    foreach ($variables['items'] as &$item) {
      if (isset($item['#options'])) {
        $item['#options']['attributes']['class'][] = 'action-item-small';
      }
      if (isset($item['#href']) && strpos($item['#href'], 'messages')) {
        $item['#options']['attributes']['class'][] = 'message-contact';
      }
      elseif (isset($item['#href'])) {
        $item['#options']['attributes']['class'][] = 'trusted-status-request';
      }
    }
  }
}
