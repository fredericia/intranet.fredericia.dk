<?php
/**
 * @file
 * piwik_fredericia_prod_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function piwik_fredericia_prod_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
