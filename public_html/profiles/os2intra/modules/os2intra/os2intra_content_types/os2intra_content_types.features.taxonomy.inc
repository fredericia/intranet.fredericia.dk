<?php
/**
 * @file
 * os2intra_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2intra_content_types_taxonomy_default_vocabularies() {
  return array(
    'os2intra_canteen' => array(
      'name' => 'os2intra_canteen',
      'machine_name' => 'os2intra_canteen',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'os2web_base_tax_site_structure' => array(
      'name' => 'Overordnet placering og sitestruktur',
      'machine_name' => 'os2web_base_tax_site_structure',
      'description' => 'Vælg de steder i hjemmesidens overordnede struktur hvor indholdet skal publiceres.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
    'topics' => array(
      'name' => 'Topics',
      'machine_name' => 'topics',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
