<?php
/**
 * @file
 * os2intra_startcontent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_startcontent_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
