<?php

/**
 * @file
 * Process theme data.
 */

include('include/comment.inc');
include('include/commons.inc');
include('include/fields.inc');
include('include/form.inc');
include('include/panels.inc');
include('include/privatemsg.inc');
include('include/search.inc');
include('include/user.inc');
include('include/views.inc');

/**
 * Preprocess variables for the html template.
 */
function intranet_theme_preprocess_html(&$variables, $hook) {
  global $theme_key;

  $site_name = variable_get('site_name', 'Intranet');

  // Add a class to the body so we can adjust styles for the new menu item.
  if (module_exists('commons_search_solr_user')) {
    $variables['classes_array'][] = 'people-search-active';
  }

  $palette = variable_get('intranet_theme_palette', 'default');
  if ($palette != 'default') {
    $variables['classes_array'][] = 'palette-active';
    $variables['classes_array'][] = drupal_html_class($palette);
  }

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome
  // etc.
  $variables['classes_array'][] = css_browser_selector();

}

/**
 * Implements theme_menu_link().
 */
function intranet_theme_menu_link($variables) {
  $output = '';
  $path_to_at_core = drupal_get_path('theme', 'adaptivetheme');

  include_once($path_to_at_core . '/inc/get.inc');

  global $theme_key;
  $theme_name = $theme_key;

  $element = $variables['element'];
  intranet_theme_menu_link_class($element);
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }

  if (at_get_setting('extra_menu_classes', $theme_name) == 1 && !empty($element['#original_link'])) {
    if (!empty($element['#original_link']['depth'])) {
      $element['#attributes']['class'][] = 'menu-depth-' . $element['#original_link']['depth'];
    }
    if (!empty($element['#original_link']['mlid'])) {
      $element['#attributes']['class'][] = 'menu-item-' . $element['#original_link']['mlid'];
    }
  }

  if (at_get_setting('menu_item_span_elements', $theme_name) == 1 && !empty($element['#title'])) {
    $element['#title'] = '<span>' . $element['#title'] . '</span>';
    $element['#localized_options']['html'] = TRUE;
  }

  if (at_get_setting('unset_menu_titles', $theme_name) == 1 && !empty($element['#localized_options']['attributes']['title'])) {
    unset($element['#localized_options']['attributes']['title']);
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>";
}

/**
 * Helper function to examine menu links and return the appropriate class.
 */
function intranet_theme_menu_link_class(&$element)  {
  if (isset($element['#original_link']) && $element['#original_link']['menu_name'] == 'main-menu') {
    $element['#attributes']['class'][] = drupal_html_class($element['#original_link']['menu_name'] . '-' . $element['#original_link']['router_path']);
  }
}

/**
 * Override or insert variables for the page templates.
 */
function intranet_theme_preprocess_page(&$variables, $hook) {
  if (module_exists('page_manager')) {
    $p = page_manager_get_current_page();
    if (isset($p['name']) && $p['name'] == 'node_view') {
      $node = $p['contexts']['argument_entity_id:node_1']->data;
      if (module_exists('og') && !og_is_group('node', $node)) {
        $variables['hide_panelized_title'] = 1;
      }
    }
  }

  $variables['header_attributes_array']['class'][] = 'container';

  $cf_pos = in_array('clearfix', $variables['branding_attributes_array']['class']);
  unset($variables['branding_attributes_array']['class'][$cf_pos]);
}

/**
 * Override or insert variables into the node templates.
 */
function intranet_theme_preprocess_node(&$variables, $hook) {
  $node = $variables['node'];
  $wrapper = entity_metadata_wrapper('node', $node);

  // Append a feature label to featured node teasers.
  if ($variables['teaser'] && $variables['promote']) {
    $variables['submitted'] .= ' <span class="featured-node-tooltip">' . t('Featured') . ' ' . $variables['type'] . '</span>';
  }

  // Some content does not get a user image on the full node.
  $no_avatar = array(
    'event',
    'group',
    'page',
    'wiki',
  );
  if (!$variables['teaser'] && in_array($node->type, $no_avatar)) {
    $variables['user_picture'] = '';
  }

  // Style node links like buttons.
  if (isset($variables['content']['links'])) {
    foreach ($variables['content']['links'] as $type => &$linkgroup) {
      // Button styling for the "rate" and "flag" types will be handled
      // separately.
      if ($type != 'rate' && $type != 'flag' && substr($type, 0, 1) != '#') {
        foreach ($linkgroup['#links'] as $name => &$link) {
          // Prevent errors when no classes have been defined.
          if (!isset($link['attributes']['class'])) {
            $link['attributes']['class'] = array();
          }

          // Apply button classes to everything but comment_forbidden.
          if ($name != 'comment_forbidden' && $name != 'answer-add' && !is_string($link['attributes']['class'])) {
            $link['attributes']['class'][] = 'action-item-small';
            $link['attributes']['class'][] = 'action-item-inline';
          }
          elseif ($name != 'comment_forbidden' && $name != 'answer-add') {
            $link['attributes']['class'] .= ' action-item-small action-item-inline';
          }
        }
        // Clean the reference so it does not confuse things further down.
        unset($link);
      }
    }
  }

  // Add classes to render the comment-comments link as a button with a number
  // attached.
  if (!empty($variables['content']['links']['comment']['#links']['comment-comments'])) {
    $comments_link = &$variables['content']['links']['comment']['#links']['comment-comments'];
    $comments_link['attributes']['class'][] = 'link-with-counter';
    $chunks = explode(' ', $comments_link['title']);

    // Add appropriate classes to words in the title.
    foreach ($chunks as &$chunk) {
      if ($chunk == $variables['comment_count']) {
        $chunk = '<span class="action-item-small-append">' . $variables['comment_count'] . '</span>';
      }
      else {
        $chunk = '<span class="element-invisible">' . $chunk . '</span>';
      }
    }
    $comments_link['title'] = implode(' ', $chunks);
  }

  // Push the reporting link to the end.
  if (!empty($variables['content']['links']['flag']['#links']['flag-inappropriate_node'])) {
    $variables['content']['report_link'] = array('#markup' => $variables['content']['links']['flag']['#links']['flag-inappropriate_node']['title']);
  }

  if (!empty($variables['content']['links'])) {
    // Hide some of the node links.
    $hidden_links = array(
      'node' => array(
        'node-readmore',
      ),
      'comment' => array(
        'comment-add',
        'comment-new-comments'
      ),
      'flag' => array(
        'flag-inappropriate_node',
      ),
    );
    foreach ($hidden_links as $element => $links) {
      foreach ($links as $link) {
        if (!empty($variables['content']['links'][$element]['#links'][$link])) {
          $variables['content']['links'][$element]['#links'][$link]['#access'] = FALSE;
        }
      }
    }
  }

  // Replace the submitted text on nodes with something a bit more pertinent to
  // the content type.
  if (variable_get('node_submitted_' . $node->type, TRUE)) {
    $node_type_info = node_type_get_type($variables['node']);
    $placeholders = array(
      '!type' => '<span class="node-content-type">' . check_plain($node_type_info->name) . '</span>',
      '!user' => $variables['name'],
      '!date' => $variables['date'],
      '@interval' => format_interval(REQUEST_TIME - $node->created),
    );

    if (!empty($node->{OG_AUDIENCE_FIELD}) && $wrapper->{OG_AUDIENCE_FIELD}->count() == 1) {
      $placeholders['!group'] = l($wrapper->{OG_AUDIENCE_FIELD}->get(0)->label(), 'node/' . $wrapper->{OG_AUDIENCE_FIELD}->get(0)->getIdentifier());
      $variables['submitted'] = t('!type created @interval ago in the !group group by !user', $placeholders);
    }
    else {
      $variables['submitted'] = t('!type created @interval ago by !user', $placeholders);
    }
  }

  // Add a class to the node when there is a logo image.
  if (!empty($variables['field_logo'])) {
    $variables['classes_array'][] = 'logo-available';
  }

  // Move the answer link on question nodes to the top of the content.
  if ($variables['node']->type == 'question' && !empty($variables['content']['links']['answer'])) {
    $variables['content']['answer'] = $variables['content']['links']['answer'];
    $variables['content']['answer']['#attributes']['class'][] = 'node-actions';
    $variables['content']['answer']['#links']['answer-add']['attributes']['class'][] = 'action-item-primary';
    $variables['content']['answer']['#weight'] = -100;
    $variables['content']['links']['answer']['#access'] = FALSE;
  }

  // Groups the related fields into their own container.
  $related_information = array(
    'og_group_ref',
    'field_related_question',
    'field_topics',
  );
  foreach($related_information as $field) {
    if (!empty($variables['content'][$field])) {
      $variables['content']['related_information'][$field] = $variables['content'][$field];
      hide($variables['content'][$field]);
    }
  }
  if (!empty($variables['content']['related_information'])) {
    $variables['content']['related_information'] += array(
      '#theme_wrappers' => array('container'),
      '#attributes' => array(
        'class' => array('related-information', 'clearfix'),
      ),
      '#weight' => 1000,
    );
  }

  // Add classes when there is a voting widget present.
  if (!empty($variables['content']['rate_commons_answer'])) {
    $variables['content_attributes_array']['class'][] = 'has-rate-widget';
    $variables['content']['rate_commons_answer']['#weight'] = 999;
  }

  // Add a general class to the node links.
  if (!empty($variables['content']['links'])) {
    $variables['content']['links']['#attributes']['class'][] = 'node-action-links';

    // For some reason, the node links processing is not always added and
    // multiple ul elements are output instead of a single.
    if (!isset($variables['content']['links']['#pre_render']) || !in_array('drupal_pre_render_links', $variables['content']['links']['#pre_render'])) {
      $variables['content']['links']['#pre_render'][] = 'drupal_pre_render_links';
    }
  }
}

/**
 * Implements hook_preprocess_flag().
 */
function intranet_theme_preprocess_flag(&$variables, $hook) {
  if (strpos($variables['flag_name_css'], 'inappropriate-') !== 0) {
    // Style the flag links like buttons.
    if ($variables['last_action'] == 'flagged') {
      $variables['flag_classes_array'][] = 'action-item-small-active';
    }
    else {
      $variables['flag_classes_array'][] = 'action-item-small';
    }
    $variables['flag_classes'] = implode(' ', $variables['flag_classes_array']);
  }
}

/**
 * Implements hook_preprocess_two_33_66().
 */
function intranet_theme_preprocess_two_33_66(&$variables, $hook) {
  $menu = menu_get_item();

  // Suggest a variant for the search page so the facets will be wrapped in pod
  // styling.
  if (strpos($menu['path'], 'search') === 0) {
    $variables['theme_hook_suggestions'][] = 'two_33_66__search';
  }
}

function intranet_theme_preprocess_three_25_50_25(&$variables, $hook) {
  $menu = menu_get_item();

  // Suggest a variant for the search page so the facets will be wrapped in pod
  // styling.
  if (isset($menu['page_arguments']) && $menu['page_arguments'][0] == 'solr_events') {
    $variables['theme_hook_suggestions'][] = 'three_25_50_25__events';
  }
}

/**
 * Implements hook_preprocess_pager().
 */
function intranet_theme_preprocess_pager_link (&$variables, $hook) {
  // Style pager links like buttons.
  $variables['attributes']['class'][] = 'action-item';
  $variables['attributes']['class'][] = 'action-item-inline';
}

/**
 * Implements hook_views_bulk_operations_form_Alter().
 */
function intranet_theme_views_bulk_operations_form_alter(&$form, $form_state, $vbo) {
  // change the buttons' fieldset wrapper to a div and push it to the bottom of
  // the form.
  $form['select']['#type'] = 'container';
  $form['select']['#weight'] = 9999;
}

/**
 * Implements hook_css_alter().
 */
function intranet_theme_css_alter(&$css) {
  // Remove preset styles that interfere with theming.
  $unset = array(
    drupal_get_path('module', 'search') . '/search.css',
    drupal_get_path('module', 'rich_snippets') . '/rich_snippets.css',
    drupal_get_path('module', 'commons_like') . '/commons-like.css',
    drupal_get_path('module', 'panels') . '/css/panels.css',
  );
  foreach ($unset as $path) {
    if (isset($css[$path])) {
      unset($css[$path]);
    }
  }
}

/**
 * Overrides theme_links() for nodes.
 *
 * This allows for the theme to set a link's #access argument to FALSE so it
 * will not render.
 */
function intranet_theme_links($variables) {
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';

  if (count($links) > 0) {
    $output = '';

    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          // Set the default level of the heading.
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      if (!isset($link['#access']) || $link['#access'] !== FALSE) {
        $class = array($key);

        // Add first, last and active classes to the list of links to help out themers.
        if ($i == 1) {
          $class[] = 'first';
        }
        if ($i == $num_links) {
          $class[] = 'last';
        }
        if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page())) && (empty($link['language']) || $link['language']->language == $language_url->language)) {
          $class[] = 'active';
        }
        $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';

        if (isset($link['href'])) {
          // Pass in $link as $options, they share the same keys.
          $output .= l($link['title'], $link['href'], $link);
        }
        elseif (!empty($link['title'])) {
          // Some links are actually not links, but we wrap these in <span> for adding title and class attributes.
          if (empty($link['html'])) {
            $link['title'] = check_plain($link['title']);
          }
          $span_attributes = '';
          if (isset($link['attributes'])) {
            $span_attributes = drupal_attributes($link['attributes']);
          }
          $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
        }

        $i++;
        $output .= "</li>\n";
      }
    }

    $output .= '</ul>';
  }

  return $output;
}

/**
 * Process an address to add microformat structure and remove &nbsp;
 * characters.
 */
function _intranet_theme_format_address(&$address) {
  $address['#theme_wrappers'][] = 'container';
  $address['#attributes']['class'][] = 'adr';
  if (!empty($address['street_block']['thoroughfare'])) {
    $address['street_block']['thoroughfare']['#attributes']['class'][] = 'street-address';
  }
  if (!empty($address['street_block']['premise'])) {
    $address['street_block']['premise']['#attributes']['class'][] = 'extended-address';
  }
  if (!empty($address['locality_block']['locality'])) {
    $address['locality_block']['locality']['#suffix'] = ',';
  }
  if (!empty($address['locality_block']['administrative_area'])) {
    $address['locality_block']['administrative_area']['#attributes']['class'][] = 'region';
    // Remove the hardcoded "&nbsp;&nbsp;" as it causes issues with
    // formatting.
    $address['locality_block']['administrative_area']['#prefix'] = ' ';
  }
  if (!empty($address['locality_block']['postal_code'])) {
    // Remove the hardcoded "&nbsp;&nbsp;" as it causes issues with
    // formatting.
    $address['locality_block']['postal_code']['#prefix'] = ' ';
  }
  if (!empty($address['country'])) {
    $address['country']['#attributes']['class'][] = 'country-name';
  }
}

/**
 * Override theme_html_tag__request_pending().
 */
function intranet_theme_html_tag__request_pending($variables) {
  $element = $variables['element'];
  $element['#attributes']['class'][] = 'action-item-small-active';
  $element['#attributes']['class'][] = 'trusted-status-pending';
  $attributes = drupal_attributes($element['#attributes']);

  if (!isset($element['#value'])) {
    return '<' . $element['#tag'] . $attributes . " />\n";
  }
  else {
    $output = '<' . $element['#tag'] . $attributes . '>';
    if (isset($element['#value_prefix'])) {
      $output .= $element['#value_prefix'];
    }
    $output .= $element['#value'];
    if (isset($element['#value_suffix'])) {
      $output .= $element['#value_suffix'];
    }
    $output .= '</' . $element['#tag'] . ">\n";
    return $output;
  }
}

/**
 * Implements hook_preprocess_views_view_field().
 */
function intranet_theme_preprocess_views_view_field(&$variables, $hook) {
  // Make sure empty addresses are not displayed.
  // Views does not use theme_field__addressfield(), so we need to process
  // these implementations separately.
  if (isset($variables['theme_hook_suggestion']) && $variables['theme_hook_suggestion'] == 'views_view_field__field_address') {
    foreach ($variables['row']->field_field_address as $key => &$address) {
      if (!$address['raw']['administrative_area']) {
        // If an address is incomplete, remove it and tell the system a
        // rebuild is needed.
        unset($variables['row']->field_field_address[$key]);
      }
      else {
        _intranet_theme_format_address($address['rendered']);
      }
    }

    // The output will need rebuilt to get the changes applied.
    $variables['output'] = $variables['field']->advanced_render($variables['row']);
  }
}

/**
 * Implements hook_breadcrumb().
 */
function intranet_theme_breadcrumb($breadcrumb){
  $breadcrumb = drupal_get_breadcrumb();
  $breadcrumb[] = drupal_get_title();
  return theme_breadcrumb(array('breadcrumb' => $breadcrumb));
}