<?php

/**
 * @param $menu_name
 * @param string $menu_type
 * @param bool|FALSE $theme_function_name
 * @param null $max_depth
 * Menu type: "full" or "trail"
 *
 * @return array
 */
function _bellcom_generate_menu($menu_name, $menu_type = 'trail', $theme_function_name = FALSE, $max_depth = NULL) {
  if (empty($menu_name)) {
    return array();
  }

  $menu_tree = array();

  // Menu type
  if ($menu_type == 'full') {
    $menu_tree = menu_tree_all_data($menu_name, NULL, $max_depth);
  }
  else {
    $menu_tree = menu_tree_page_data($menu_name, $max_depth);
  }

  $output = menu_tree_output($menu_tree);

//  // Start level
//  if ($start_level !== NULL) {
//
//    while ($start_level-- > 0 && $menu_tree) {
//
//      // Loop through the current level's items until we find one that is in trail.
//      while ($item = array_shift($menu_tree)) {
//        if ($item['link']['in_active_trail']) {
//
//          // If the item is in the active trail, we continue in the subtree.
//          $menu_tree = empty($item['below']) ? array() : $item['below'];
//          break;
//        }
//      }
//    }
//  }

  // Change theme function for tree and links
  if ($theme_function_name !== FALSE) {

    // Tree
    $menu_tree_function_names = array(
      'menu_tree__' . strtr($menu_name, '-', '_') . '__' . strtr($theme_function_name, '-', '_'),
    );
    $output['#theme_wrappers'] = $menu_tree_function_names;

    // Links
    $menu_link_function_names = array(
      'old' => 'menu_link__' . strtr($menu_name, '-', '_'),
      'new' => 'menu_link__' . strtr($theme_function_name, '-', '_'),
    );
    array_walk_recursive($output, '_bellcom_alter_menu_theme_function', $menu_link_function_names);
  }

  return $output;
}

/**
 * Alter menu theme function suggestions.
 *
 * @param $item
 * @param $key
 * @param $theme_functions
 */
function _bellcom_alter_menu_theme_function(&$item, $key, $theme_functions) {
  $old_theme_function = $theme_functions['old'];
  $new_theme_function = $theme_functions['new'];

  if ($item === $old_theme_function) {
    $item = $new_theme_function;
  }
}
