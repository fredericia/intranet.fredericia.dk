<?php
/**
 * @file
 * os2intra_content_types.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function os2intra_content_types_uuid_features_default_terms() {
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
    'field_os2intra_base_spotboxes' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '96987e8c-360d-4f19-a192-adbb56fd8ef5',
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
    'field_os2intra_base_spotboxes' => array(),
    'path' => array(
      'pathauto' => 1,
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
    'field_os2intra_base_spotboxes' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
