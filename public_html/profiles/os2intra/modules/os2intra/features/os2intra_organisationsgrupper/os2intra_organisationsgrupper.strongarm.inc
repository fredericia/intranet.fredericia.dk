<?php
/**
 * @file
 * os2intra_organisationsgrupper.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2intra_organisationsgrupper_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_os2intra_group';
  $strongarm->value = 0;
  $export['comment_anonymous_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_os2intra_org_group_unit';
  $strongarm->value = 0;
  $export['comment_anonymous_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_post';
  $strongarm->value = 0;
  $export['comment_anonymous_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_os2intra_group';
  $strongarm->value = 1;
  $export['comment_default_mode_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_os2intra_org_group_unit';
  $strongarm->value = 1;
  $export['comment_default_mode_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_post';
  $strongarm->value = 1;
  $export['comment_default_mode_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_os2intra_group';
  $strongarm->value = '50';
  $export['comment_default_per_page_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_os2intra_org_group_unit';
  $strongarm->value = '50';
  $export['comment_default_per_page_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_post';
  $strongarm->value = '50';
  $export['comment_default_per_page_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_os2intra_group';
  $strongarm->value = 1;
  $export['comment_form_location_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_os2intra_org_group_unit';
  $strongarm->value = 1;
  $export['comment_form_location_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_post';
  $strongarm->value = 1;
  $export['comment_form_location_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_os2intra_group';
  $strongarm->value = '2';
  $export['comment_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_os2intra_org_group_unit';
  $strongarm->value = '2';
  $export['comment_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_post';
  $strongarm->value = '2';
  $export['comment_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_os2intra_group';
  $strongarm->value = '1';
  $export['comment_preview_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_os2intra_org_group_unit';
  $strongarm->value = '1';
  $export['comment_preview_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_post';
  $strongarm->value = '1';
  $export['comment_preview_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_os2intra_group';
  $strongarm->value = 1;
  $export['comment_subject_field_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_os2intra_org_group_unit';
  $strongarm->value = 1;
  $export['comment_subject_field_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_post';
  $strongarm->value = 1;
  $export['comment_subject_field_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2intra_group';
  $strongarm->value = '0';
  $export['language_content_type_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2intra_org_group_unit';
  $strongarm->value = '0';
  $export['language_content_type_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_post';
  $strongarm->value = '0';
  $export['language_content_type_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2intra_group';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2intra_org_group_unit';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_post';
  $strongarm->value = array();
  $export['menu_options_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2intra_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2intra_org_group_unit';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2intra_group';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2intra_org_group_unit';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_post';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2intra_group';
  $strongarm->value = '1';
  $export['node_preview_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2intra_org_group_unit';
  $strongarm->value = '1';
  $export['node_preview_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_post';
  $strongarm->value = '0';
  $export['node_preview_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2intra_group';
  $strongarm->value = 1;
  $export['node_submitted_os2intra_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2intra_org_group_unit';
  $strongarm->value = 1;
  $export['node_submitted_os2intra_org_group_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_post';
  $strongarm->value = 1;
  $export['node_submitted_post'] = $strongarm;

  return $export;
}