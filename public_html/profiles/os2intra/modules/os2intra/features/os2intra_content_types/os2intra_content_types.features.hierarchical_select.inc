<?php
/**
 * @file
 * os2intra_content_types.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function os2intra_content_types_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-field_os2intra_base_structure',
  'save_lineage'    => 0,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
    ),
  ),
  'dropbox' => array(
    'status'    => 0,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
    ),
    'allowed_levels' => array(
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 3,
  ),
);

$configs['taxonomy-field_os2intra_base_structure'] = $config;
$config = array(
  'config_id'       => 'taxonomy-field_os2web_base_field_kle_ref',
  'save_lineage'    => 0,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 0,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
    'allowed_levels' => array(
      0 => 0,
      1 => 0,
      2 => 0,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 0,
  ),
);

$configs['taxonomy-field_os2web_base_field_kle_ref'] = $config;
return $configs;
}
