<?php
/**
 * @file
 * os2intra_users.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2intra_users_taxonomy_default_vocabularies() {
  return array(
    'os2intra_organisation_tax' => array(
      'name' => 'OS2Intra organisation',
      'machine_name' => 'os2intra_organisation_tax',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'user_hobbies' => array(
      'name' => 'Bruger - fritidsinteresser',
      'machine_name' => 'user_hobbies',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'user_jobtitle' => array(
      'name' => 'Bruger - jobtitel',
      'machine_name' => 'user_jobtitle',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'user_skills' => array(
      'name' => 'Bruger - kompetencer',
      'machine_name' => 'user_skills',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
