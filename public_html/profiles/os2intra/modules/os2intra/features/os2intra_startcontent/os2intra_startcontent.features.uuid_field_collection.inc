<?php
/**
 * @file
 * os2intra_startcontent.features.uuid_field_collection.inc
 */

/**
 * Implements hook_uuid_features_default_field_collections().
 */
function os2intra_startcontent_uuid_features_default_field_collections() {
  $field_collections = array();

  $field_collections[] = array(
    'field_name' => 'field_os2intra_base_vejledning',
    'default_revision' => 1,
    'archived' => 0,
    'uuid' => '72a6c577-c72e-4957-8e69-9488930f1c3c',
    'field_os2intra_itvejledning_img' => array(),
    'field_os2intra_itvejledninger_1' => array(
      'und' => array(
        0 => array(
          'value' => 'wdwdqwd',
          'format' => 'indhold',
        ),
      ),
    ),
    'field_os2intra_itvejledninger_4' => array(
      'und' => array(
        0 => array(
          'value' => '<p>qwdqwdqwd</p>
',
          'format' => 'kommentar',
        ),
      ),
    ),
  );
  return $field_collections;
}
