<?php
/**
 * @file
 * os2intra_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
