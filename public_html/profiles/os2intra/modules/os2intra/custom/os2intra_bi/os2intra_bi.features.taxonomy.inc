<?php
/**
 * @file
 * os2intra_bi.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2intra_bi_taxonomy_default_vocabularies() {
  return array(
    'os2intra_bi_opus_roles' => array(
      'name' => 'Opus Roles',
      'machine_name' => 'os2intra_bi_opus_roles',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
