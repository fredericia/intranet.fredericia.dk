<?php
/**
 * @file
 * os2intra_organisation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_organisation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
