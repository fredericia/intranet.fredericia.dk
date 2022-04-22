<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
os2intra_user_import_create_department('7569', 85168, 'Det Bruunske Pa...');

die;

$timestamp = strtotime('midnight tomorrow');
  
    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'user');
    $query->fieldCondition('field_os2intra_termination_date', 'value', $timestamp, '<');
    $query->fieldCondition('field_os2intra_termination_date', 'value', 1, '>');
    $result = reset($query->execute());
var_dump($result);
    die;

setlocale(LC_ALL, "en_DK.UTF-8");
    $import_dir = variable_get('os2intra_user_import_dir', 'private://user_import');

    $realpath = '';

    $filename = variable_get('os2intra_user_import_file_name', 'FK-user_import');

    $dir = reset(file_scan_directory($import_dir, '/' . $filename . '.csv/'));
    if ($dir) {
      $realpath = drupal_realpath($dir->uri);
    }

    if (file_exists($realpath)) {

      os2intra_user_import_clear_log();
      os2intra_user_import_save_log('', 'Starting import');

      // Parse file, map data accordingly
      $users = _os2intra_user_import_process_file($realpath);

     $created_terms = array();
  os2intra_user_import_save_log('', 'Import organisation');
  $vocab = taxonomy_vocabulary_machine_name_load('os2intra_organisation_tax');
  $tree = taxonomy_get_tree($vocab->vid);
  // find first term with no parents
  // used as default parent tid later
  foreach ($tree as $term) {
    if ($term->parents[0] == 0) {
      $default_parent_tid = $term->tid;
      break;
    }
  }
  foreach ($users as $user) {
    $group = $user['department'];
    $parent_tid = $default_parent_tid;
    // Check if term already exists
    $result = os2intra_user_import_query_term_by_department($group);
    // Term already exists
    if (!empty($result)) {
      // Rename group term if needed
    /*  $term = taxonomy_term_load(key($result['taxonomy_term']));
      $term->name = $user['department_name'];
      os2intra_user_import_create_department($term->tid, $user['department'], $user['department_name']);
      // Search for parent tid for department
      $result = os2intra_user_import_query_term_by_department($user['centre']);
      if (!empty($result)) {
        $parent_term = taxonomy_term_load(key($result['taxonomy_term']));
        $parent_tid = $parent_term->tid;
        $term->parent = $parent_tid;
      }
      if($term->id==13617)
        var_dump($user['email']);
      var_dump($term->tid);
      var_dump($parent_term->tid);
      taxonomy_term_save($term);*/
      echo 'here';
    }
     else {
      // Create taxonomy terms
      os2intra_user_import_save_log('', 'Create department: ' . $group);
      // Search for parent tid for department
      $result = os2intra_user_import_query_term_by_department($user['centre']);
      if (!empty($result)) {
        $parent_term = taxonomy_term_load(key($result['taxonomy_term']));
        $parent_tid = $parent_term->tid;
      }
      $term = new stdClass();
      $term->name = $user['department_name'];
      $term->parent = array($parent_tid);
      $term->field_os2intra_department_id[LANGUAGE_NONE][0]['value'] = $group;
      $term->field_os2intra_shortname[LANGUAGE_NONE][0]['value'] = $user['department_shortname'];
      $term->vid = $vocab->vid;
      var_dump($user['email']);
      var_dump($group);
      taxonomy_term_save($term);
      $created_terms[] = $term;
      os2intra_user_import_create_department($term->tid, $user['department']);
    }
    
  }
    }      