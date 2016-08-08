<?php
/**
 * Convert numeric values into integers, else return the string as utf8.
 */
function _os2intra_user_import_sanitize_int($str) {
  if (is_numeric($str)) {
    return (int) $str;
  }
  return utf8_encode($str);
}

/**
 * Helper for user title
 */
function os2intra_user_import_user_title($job_description) {
  $term = reset(taxonomy_get_term_by_name($job_description));

  // Create new taxonomy term
  if (!is_object($term)) {
    $vocab = taxonomy_vocabulary_machine_name_load('user_jobtitle');
    $term = new stdClass();

    $term->name = $job_description;
    $term->vid = $vocab->vid;

    taxonomy_term_save($term);
  }

  return $term->tid;
}

/**
 * Searches for terms by department id and resturns an EntityFieldQuery result.
 */
function os2intra_user_import_query_term_by_department($department_id) {
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'taxonomy_term');
  $query->fieldCondition('field_os2intra_department_id', 'value', $department_id, '=');
  $result = $query->execute();

  return $result;
}

/**
 * Get department NID from department ID.
 */
function _os2intra_user_import_get_department_nid($department) {
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'taxonomy_term');
  $query->fieldCondition('field_os2intra_department_id', 'value', $department, '=');
  $result = $query->execute();

  if (count($result['taxonomy_term']) > 0) {
    $tid = key($result['taxonomy_term']);

    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'node');
    $query->entityCondition('bundle', 'os2intra_org_group_unit');
    $query->fieldCondition('field_os2intra_organisation', 'target_id', $tid, '=');
    $result = $query->execute();

    if ($result) {
      return key($result['node']);
    }
  }
  return FALSE;
}
