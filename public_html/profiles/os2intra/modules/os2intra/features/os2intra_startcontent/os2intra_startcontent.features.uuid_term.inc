<?php
/**
 * @file
 * os2intra_startcontent.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function os2intra_startcontent_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'IT Vejledninger',
    'description' => '<p>DDd</p>
',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => '0b83749b-a8a3-4b9f-b218-4986f1cd17bc',
    'vocabulary_machine_name' => 'os2web_base_tax_site_structure',
    'field_os2web_base_field_banner' => array(),
    'field_os2web_base_field_logo' => array(),
    'field_os2web_base_icon' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '96987e8c-360d-4f19-a192-adbb56fd8ef5',
    ),
  );
  $terms[] = array(
    'name' => 'Niveau 3',
    'description' => '',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => '1c23be27-70a9-4d13-bc9a-7b434d3019c3',
    'vocabulary_machine_name' => 'os2intra_organisation_tax',
    'field_os2web_taxonomies_dis_cont' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_os2web_taxonomies_search' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Booking og bestilling',
    'description' => '',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => '675f0b2d-f778-442f-8a8e-e15593b71283',
    'vocabulary_machine_name' => 'os2web_base_tax_site_structure',
    'field_os2web_base_field_banner' => array(),
    'field_os2web_base_field_logo' => array(),
    'field_os2web_base_icon' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Niveau 1',
    'description' => '',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => '68b24ef9-820c-4770-a38c-355c2340fe0a',
    'vocabulary_machine_name' => 'os2intra_organisation_tax',
    'field_os2web_taxonomies_dis_cont' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_os2web_taxonomies_search' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Hjælp og værktøjer',
    'description' => '<p>asdaSD</p>
',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => '96987e8c-360d-4f19-a192-adbb56fd8ef5',
    'vocabulary_machine_name' => 'os2web_base_tax_site_structure',
    'field_os2web_base_field_banner' => array(),
    'field_os2web_base_field_logo' => array(),
    'field_os2web_base_icon' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Niveau 2',
    'description' => '',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => 'f61cd4a7-bce3-4d5c-a6d7-70cabc8907ec',
    'vocabulary_machine_name' => 'os2intra_organisation_tax',
    'field_os2web_taxonomies_dis_cont' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_os2web_taxonomies_search' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '68b24ef9-820c-4770-a38c-355c2340fe0a',
    ),
  );
  $terms[] = array(
    'name' => 'Mig som ansat',
    'description' => '',
    'format' => 'indhold',
    'weight' => 0,
    'uuid' => 'fd00760f-7aff-4747-9c3c-54acb5db6c86',
    'vocabulary_machine_name' => 'os2web_base_tax_site_structure',
    'field_os2web_base_field_banner' => array(),
    'field_os2web_base_field_logo' => array(),
    'field_os2web_base_icon' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
