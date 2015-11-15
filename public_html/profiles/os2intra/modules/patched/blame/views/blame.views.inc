<?php
/**
 * @file
 * Views include file.
 */

/**
 * Implements hook_views_data_alter().
 */
function blame_views_data_alter(&$data) {
  // Allow views to relate blame to users.
  $data['blame']['uid']['relationship'] = array(
    'title' => t('User'),
    'help' => t('Relate blame to a user who submitted the form.'),
    'handler' => 'views_handler_relationship',
    'base' => 'users',
    // Field on the joined table.
    'base field' => 'uid',
    'field' => 'uid',
    'label' => t('User'),
  );

  // Provide field handler
  $data['blame']['view_blame'] = array(
    'title' => t('View Link'),
    'help' => t('Provide a simple link to view blame.'),
    'field' => array(
      'handler' => 'blame_views_handler_field_entity_link',
    ),
  );
  $data['blame']['username_blame'] = array(
    'title' => t('Submitter Link'),
    'help' => t('Provide a simple link to blame submitter.'),
    'field' => array(
      'handler' => 'blame_views_handler_field_submitter_link',
      'click sortable' => TRUE,
    ),
  );
}
