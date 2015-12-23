<?php
/**
 * @file
 * fredericia_user_import_mapping.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fredericia_user_import_mapping_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
