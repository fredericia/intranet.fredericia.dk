<?php
/**
 * @file
 * os2intra_startcontent.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function os2intra_startcontent_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'TEST: Hjælp mig med noget',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'it_vejledning',
  'language' => 'da',
  'created' => 1445611981,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5841fec3-447d-4158-b9d2-1c207d95ed39',
  'body' => array(),
  'field_combo' => array(),
  'field_os2intra_base_structure' => array(
    'und' => array(
      0 => array(
        'tid' => '0b83749b-a8a3-4b9f-b218-4986f1cd17bc',
        'uuid' => '0b83749b-a8a3-4b9f-b218-4986f1cd17bc',
      ),
    ),
  ),
  'field_os2intra_base_vejledning' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-23 16:53:01 +0200',
  'user_uuid' => 'cfb3a2d8-52fb-44d2-987f-e53b381013db',
);
  $nodes[] = array(
  'title' => 'TEST: Hjælp til iPad',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'it_vejledning',
  'language' => 'da',
  'created' => 1445630905,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b0ce9802-8734-40f7-a352-3453251d93bc',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Hallo</p>
',
        'summary' => '',
        'format' => 'indhold',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_combo' => array(),
  'field_os2intra_base_structure' => array(
    'und' => array(
      0 => array(
        'tid' => '0b83749b-a8a3-4b9f-b218-4986f1cd17bc',
        'uuid' => '0b83749b-a8a3-4b9f-b218-4986f1cd17bc',
      ),
    ),
  ),
  'field_os2intra_base_vejledning' => array(
    'und' => array(
      0 => array(
        'value' => '72a6c577-c72e-4957-8e69-9488930f1c3c',
        'revision_id' => '72a6c577-c72e-4957-8e69-9488930f1c3c',
        'uuid' => '72a6c577-c72e-4957-8e69-9488930f1c3c',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-23 22:08:25 +0200',
  'user_uuid' => 'cfb3a2d8-52fb-44d2-987f-e53b381013db',
);
  return $nodes;
}
