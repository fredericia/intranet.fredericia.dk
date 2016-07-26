<?php
/**
 * @file
 * os2intra_bi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_bi_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2intra_bi_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
