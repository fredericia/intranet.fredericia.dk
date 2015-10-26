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
  'title' => 'Min afdeling',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'os2intra_org_group_unit',
  'language' => 'da',
  'created' => 1445865709,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2c69974e-42e7-4856-9588-0ab8be3fef17',
  'body' => array(),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'og_group_ref' => array(
    'und' => array(
      0 => array(
        'target_id' => 'c2872183-d0da-4b4b-ba4b-0092a573ee36',
        'uuid' => 'c2872183-d0da-4b4b-ba4b-0092a573ee36',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 14:21:49 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  $nodes[] = array(
  'title' => 'TEST indhold 2',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'post',
  'language' => 'da',
  'created' => 1445865791,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2cedd7b2-8ffe-4834-acb6-5bc1ba0c1f33',
  'field_os2web_base_field_image' => array(),
  'field_os2web_base_field_kle_ref' => array(),
  'body' => array(),
  'og_group_ref' => array(
    'und' => array(
      0 => array(
        'target_id' => '2c69974e-42e7-4856-9588-0ab8be3fef17',
        'uuid' => '2c69974e-42e7-4856-9588-0ab8be3fef17',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 14:23:11 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  $nodes[] = array(
  'title' => 'sadfsdf',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'post',
  'language' => 'da',
  'created' => 1445866200,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3b53da2f-590e-4c29-96f4-38e197b3f8fc',
  'field_os2web_base_field_image' => array(),
  'field_os2web_base_field_kle_ref' => array(),
  'body' => array(),
  'og_group_ref' => array(
    'und' => array(
      0 => array(
        'target_id' => '2c69974e-42e7-4856-9588-0ab8be3fef17',
        'uuid' => '2c69974e-42e7-4856-9588-0ab8be3fef17',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 14:30:00 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  $nodes[] = array(
  'title' => 'wfeewfwe fw eef ',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'post',
  'language' => 'da',
  'created' => 1445868009,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '566c54b3-f702-4f6c-9a3f-a5e70e504a42',
  'field_os2web_base_field_image' => array(),
  'field_os2web_base_field_kle_ref' => array(),
  'body' => array(),
  'og_group_ref' => array(
    'und' => array(
      0 => array(
        'target_id' => '6fbd5148-4cbd-4991-9d2c-510884d3e2df',
        'uuid' => '6fbd5148-4cbd-4991-9d2c-510884d3e2df',
      ),
      1 => array(
        'target_id' => '6f3dc4d7-cc4a-422e-b774-2cb5110b4dd4',
        'uuid' => '6f3dc4d7-cc4a-422e-b774-2cb5110b4dd4',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 15:00:09 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
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
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  $nodes[] = array(
  'title' => 'TEST gruppe 2',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'os2intra_group',
  'language' => 'da',
  'created' => 1445865873,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6f3dc4d7-cc4a-422e-b774-2cb5110b4dd4',
  'body' => array(),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 14:24:33 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  $nodes[] = array(
  'title' => 'TEST: Gruppe 1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'os2intra_group',
  'language' => 'da',
  'created' => 1445865736,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6fbd5148-4cbd-4991-9d2c-510884d3e2df',
  'body' => array(),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 14:22:16 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
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
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  $nodes[] = array(
  'title' => 'Fredericia Kommune',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'os2intra_org_group_unit',
  'language' => 'da',
  'created' => 1445865679,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c2872183-d0da-4b4b-ba4b-0092a573ee36',
  'body' => array(),
  'group_group' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'og_group_ref' => array(),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 14:21:19 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  $nodes[] = array(
  'title' => 'TEST indhold 1',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'post',
  'language' => 'da',
  'created' => 1445865768,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ffdbd4cd-d8eb-4c6c-98fb-4fbd8a6cf4ff',
  'field_os2web_base_field_image' => array(),
  'field_os2web_base_field_kle_ref' => array(),
  'body' => array(),
  'og_group_ref' => array(
    'und' => array(
      0 => array(
        'target_id' => 'c2872183-d0da-4b4b-ba4b-0092a573ee36',
        'uuid' => 'c2872183-d0da-4b4b-ba4b-0092a573ee36',
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-10-26 14:22:48 +0100',
  'user_uuid' => '90647fd3-2bdc-4231-acdb-6038f7e84f65',
);
  return $nodes;
}
