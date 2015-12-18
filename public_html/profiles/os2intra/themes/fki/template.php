<?php

/**
 * Implements theme_preprocess_html().
 */
function fki_preprocess_html(&$variables) {
  $theme_path = path_to_theme();

  // Add conditional stylesheets for IE9 and lower.
  drupal_add_css($theme_path . '/dist/css/stylesheet.css', array(
    'group' => CSS_THEME,
  ));
  drupal_add_css($theme_path . '/dist/css/stylesheet-ie9-1.css', array(
    'group'    => CSS_THEME,
    'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));
  drupal_add_css($theme_path . '/dist/css/stylesheet-ie9-2.css', array(
    'group'    => CSS_THEME,
    'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));
  drupal_add_js($theme_path . '/dist/js/modernizr.js', array(
    'group' => JS_LIBRARY,
  ));
  drupal_add_js($theme_path . '/dist/js/app.js', array(
    'group' => JS_THEME,
  ));
  drupal_add_js($theme_path . '/dist/js/ie9.js', array(
    'group'    => JS_THEME,
    'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE),
  ));

  // Add out fonts from Google Fonts API.
  drupal_add_html_head(array(
    '#tag'        => 'link',
    '#attributes' => array(
      'href' => 'https://fonts.googleapis.com/css?family=Montserrat:400,700|Open+Sans:300,400,700',
      'rel'  => 'stylesheet',
      'type' => 'text/css',
    ),
  ), 'google_font_fki');

  // Body classes
  $variables['classes_array'][] = 'footer-attached';

  $variables['classes_array'][] = 'simple-navigation-enabled-xs';

  $variables['classes_array'][] = 'main-navigation-enabled-md';
  $variables['classes_array'][] = 'main-navigation-enabled-lg';

  // Load jQuery UI
  drupal_add_library('system', 'ui');
}

/*
 * Implements theme_preprocess_page().
 */
function fki_preprocess_page(&$variables) {

  // Search form
  $variables['main_navigation_search'] = module_invoke('views', 'block_view', '-exp-Search-page');

  // Find colleague
  $variables['find_colleague_block'] = module_invoke('views', 'block_view', '-exp-telefonbogen-page');

  // Tabs
  $variables['tabs_primary'] = $variables['tabs'];
  $variables['tabs_secondary'] = $variables['tabs'];
  unset($variables['tabs_primary']['#secondary']);
  unset($variables['tabs_secondary']['#primary']);
}

/**
 * Implements template_preprocess_node.
 */
function fki_preprocess_node(&$variables) {

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_node_page() or foo_preprocess_node_story().
  $function_node_type = __FUNCTION__ . '__' . $variables['node']->type;
  $function_view_mode = __FUNCTION__ . '__' . $variables['view_mode'];
  if (function_exists($function_node_type)) {
    $function_node_type($variables);
  }
  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }

  // Author
  if ($author_information = bellcom_user_get_raw_information($variables['node']->uid)) {

    if (isset($author_information['full_name'])) {
      $variables['author_full_name'] = $author_information['full_name'];
    }
  }

  // Number of comments
  $variables['number_of_comments'] = t('@comment_count comments', array('@comment_count' => 0));
  if ($number_of_comments = db_query("SELECT COUNT(cid) AS count FROM {comment} WHERE nid = :nid", array(":nid" => $variables['nid']))->fetchField()) {

    // 1
    if ($number_of_comments == 1) {
      $variables['number_of_comments'] = t('@comment_count comment', array('@comment_count' => $number_of_comments));
    }
    else {
      $variables['number_of_comments'] = t('@comment_count comments', array('@comment_count' => $number_of_comments));
    }
  }

  // Number of hits
  $variables['number_of_hits'] = t('Seen by @hits persons', array('@hits' => 0));
  if ($statistics = statistics_get($variables['node']->nid)) {

    // 1
    if ($statistics['totalcount'] == 1) {
      $variables['number_of_hits'] = t('Seen by @hits person', array('@hits' => $statistics['totalcount']));
    }
    else {
      $variables['number_of_hits'] = t('Seen by @hits persons', array('@hits' => $statistics['totalcount']));
    }
  }

  // Number of files
  $variables['number_of_files'] = t('@files downloadable files', array('@files' => 0));
  if ($number_of_files = field_get_items('node', $variables['node'], 'field_os2web_base_field_media')) {
    $number_of_files = count($number_of_files);

    // 1
    if ($number_of_files == 1) {
      $variables['number_of_files'] = t('@files downloadable file', array('@files' => $number_of_files));
    }
    else {
      $variables['number_of_files'] = t('@files downloadable files', array('@files' => $number_of_files));
    }
  }
}

/*
 * Implements template_preprocess_comment().
 */
function fki_preprocess_comment(&$variables) {

  // Author
  if ($author_information = bellcom_user_get_raw_information($variables['comment']->uid)) {

    if (isset($author_information['full_name'])) {
      $variables['author_full_name'] = $author_information['full_name'];
    }
  }
}

/*
 * Implements template_node_view_alter().
 */
function fki_node_view_alter(&$build) {

  // Full
  if ($build['#view_mode'] == 'full') {
    unset($build['links']['statistics']);
    unset($build['links']['comment']);

    // Make two extra versions of links (top and bottom)
    $links = $build['links'];
    $build['links_top'] = $links;
    $build['links_bottom'] = $links;

    // Hide from links_top
    unset($build['links_top']['flag']);
    unset($build['links_top']['number_of_files']);

    // Hide from links_bottom
    unset($build['links_bottom']['print_html']);
    unset($build['links_bottom']['print_mail']);
    unset($build['links_bottom']['print_pdf']);
    unset($build['links_bottom']['add_to_basket']);
  }
}

/*
 * Full node
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__full(&$variables) {
}

/*
 * Post
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__post(&$variables) {
  $node = $variables['node'];

  // Able to like content
  if ($field_able_to_like_content = field_get_items('node', $node, 'field_able_to_like_content')) {

    // Not able to like
    if ($field_able_to_like_content[0]['value'] == 0) {
      unset($variables['content']['links']['flag']['#links']['flag-os2intra_flag_node_like']);
      unset($variables['content']['links_bottom']['flag']['#links']['flag-os2intra_flag_node_like']);
      unset($variables['content']['links_top']['flag']['#links']['flag-os2intra_flag_node_like']);
    }
  }
}

/*
 * Spotbox
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__spotbox(&$variables) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['spotbox_link'] = array();

    // Link
    if ($field_link = field_get_items('node', $variables['node'], 'field_spotbox_link')) {
      if (!empty($field_link)) {
        $variables['spotbox_link']['url'] = $field_link[0]['url'];
        $variables['spotbox_link']['title'] = $field_link[0]['title'];
      }
    }

    // Image
    if ($field_image = field_get_items('node', $variables['node'], 'field_spotbox_image')) {
      if (!empty($field_image)) {
        $variables['classes_array'][] = 'os2-spotbox-' . $variables['elements']['#view_mode'] . '-variant-with-image';
      }
    }
  }
}

/*
 * OS2Intra base page
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__os2intra_base_page(&$variables) {
  if ($variables['view_mode'] == 'full') {
    $variables['sections'] = views_embed_view('os2intra_node_panes', array('panel_pane_7'));
  }
}

/*
 * IT vejledning
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__it_vejledning(&$variables) {
  if ($variables['view_mode'] == 'full') {
    $variables['sections'] = views_embed_view('os2intra_node_panes', array('panel_pane_7'));
  }
}

/*
 * Node basket
 * Implements hook_preprocess_node().
 */
function fki_preprocess_node__node_basket(&$variables) {

  if ($field_node_basket_type = field_get_items('node', $variables['node'], 'field_node_basket_type')) {
    $variables['basket_type'] = $field_node_basket_type[0]['value'];
  }
}

function fki_theme(&$existing, $type, $theme, $path) {
  $hooks = array();

  $hooks['main_navigation_search_form'] = array(
    'render element' => 'element',
  );

  return $hooks;
}

/*
 * Implements template_preprocess_taxonomy_term().
 */
function fki_preprocess_taxonomy_term(&$variables) {
  $term = $variables['term'];

  // Add taxonomy-term--view_mode.tpl.php suggestions.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $variables['view_mode'];

  // Make "taxonomy-term--TERMTYPE--VIEWMODE.tpl.php" templates available for terms.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $variables['vocabulary_machine_name'] . '__' . $variables['view_mode'];

  // Add a class for the view mode.
  $variables['classes_array'][] = 'view-mode-' . $variables['view_mode'];

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_taxonomy_term_page() or foo_preprocess_taxonomy_term_story().
  $function_taxonomy_term_type = __FUNCTION__ . '__' . $variables['vocabulary_machine_name'];
  $function_view_mode = __FUNCTION__ . '__' . $variables['view_mode'];
  if (function_exists($function_taxonomy_term_type)) {
    $function_taxonomy_term_type($variables);
  }
  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }

  // Icon
  if ($taxonomy_term_top_level = taxonomy_term_top_level_load($variables['tid'])) {

    if ($field_icon = field_view_field('taxonomy_term', $taxonomy_term_top_level, 'field_os2web_base_icon', $variables['view_mode'])) {
      $variables['field_taxonomy_term_top_level_icon'] = $field_icon;
    }
  }
}

/*
 * Implements template_preprocess_taxonomy_term().
 */
function fki_preprocess_taxonomy_term__os2web_taxonomies_tax_places(&$variables) {
  $term = $variables['term'];

  // Teaser
  if ($variables['view_mode'] == 'teaser') {
    $place = '';

    // Name
    if (!empty($term->name)) {
      $place = '<span class="os2-place-name">' . $term->name . '</span>';
    }

    // Address
    if ($field_os2web_taxonomies_address = field_get_items('taxonomy_term', $term, 'field_os2web_taxonomies_address')) {
      $place .= ', <span class="os2-place-address">' . $field_os2web_taxonomies_address[0]['value'] . '</span>';
    }

    // City
    if ($field_os2web_taxonomies_city = field_get_items('taxonomy_term', $term, 'field_os2web_taxonomies_city')) {
      $place .= ', <span class="os2-place-city">' . $field_os2web_taxonomies_city[0]['value'] . '</span>';
    }
    $variables['place'] = $place;

    // Google map
    if ($field_os2web_taxonomies_address && $field_os2web_taxonomies_city) {
      $variables['google_map'] = _bellcom_create_google_map($field_os2web_taxonomies_address[0]['value'], $field_os2web_taxonomies_city[0]['value']);
    }
  }
}

/**
 * Implements hook_form_alter().
 */
function fki_form_alter(array &$form, array &$form_state = array(), $form_id = NULL) {
  if ($form_id) {
    switch ($form_id) {

      case 'search_form':
        $form['basic']['keys']['#theme_wrappers'] = array('main_navigation_search_form');
        break;
    }
  }
}

function fki_main_navigation_search_form($variables) {
  $output = '<div class="input-group">';
  $output .= $variables['element']['#children'];
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-secondary"><span class="icon"></span></button>';
  $output .= '</span>';
  $output .= '</div>';
  return $output;
}
