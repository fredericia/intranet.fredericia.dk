<?php
/**
 * @file
 * os2intra_composer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_composer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
