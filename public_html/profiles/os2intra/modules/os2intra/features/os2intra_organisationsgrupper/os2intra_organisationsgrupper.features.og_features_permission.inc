<?php
/**
 * @file
 * os2intra_organisationsgrupper.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function os2intra_organisationsgrupper_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:os2intra_group:add user'
  $permissions['node:os2intra_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:administer group'
  $permissions['node:os2intra_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:approve and deny subscription'
  $permissions['node:os2intra_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:create event content'
  $permissions['node:os2intra_group:create event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:create os2intra_org_group_unit content'
  $permissions['node:os2intra_group:create os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:create post content'
  $permissions['node:os2intra_group:create post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:create wiki content'
  $permissions['node:os2intra_group:create wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete any event content'
  $permissions['node:os2intra_group:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete any os2intra_org_group_unit content'
  $permissions['node:os2intra_group:delete any os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete any post content'
  $permissions['node:os2intra_group:delete any post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete any wiki content'
  $permissions['node:os2intra_group:delete any wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete own event content'
  $permissions['node:os2intra_group:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete own os2intra_org_group_unit content'
  $permissions['node:os2intra_group:delete own os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete own post content'
  $permissions['node:os2intra_group:delete own post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete own wiki content'
  $permissions['node:os2intra_group:delete own wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:manage members'
  $permissions['node:os2intra_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:manage permissions'
  $permissions['node:os2intra_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:manage roles'
  $permissions['node:os2intra_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:subscribe'
  $permissions['node:os2intra_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:subscribe without approval'
  $permissions['node:os2intra_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:unsubscribe'
  $permissions['node:os2intra_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update any event content'
  $permissions['node:os2intra_group:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update any os2intra_org_group_unit content'
  $permissions['node:os2intra_group:update any os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update any post content'
  $permissions['node:os2intra_group:update any post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update any wiki content'
  $permissions['node:os2intra_group:update any wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update body field'
  $permissions['node:os2intra_group:update body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_name_first field'
  $permissions['node:os2intra_group:update field_name_first field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_name_last field'
  $permissions['node:os2intra_group:update field_name_last field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_base_spotboxes field'
  $permissions['node:os2intra_group:update field_os2intra_base_spotboxes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_date field'
  $permissions['node:os2intra_group:update field_os2intra_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_dept_tools field'
  $permissions['node:os2intra_group:update field_os2intra_dept_tools field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_employee_id field'
  $permissions['node:os2intra_group:update field_os2intra_employee_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_image field'
  $permissions['node:os2intra_group:update field_os2intra_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_images field'
  $permissions['node:os2intra_group:update field_os2intra_images field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_import_groups field'
  $permissions['node:os2intra_group:update field_os2intra_import_groups field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_organisation field'
  $permissions['node:os2intra_group:update field_os2intra_organisation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_organisation_ref field'
  $permissions['node:os2intra_group:update field_os2intra_organisation_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_physical_location field'
  $permissions['node:os2intra_group:update field_os2intra_physical_location field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_promoted_content field'
  $permissions['node:os2intra_group:update field_os2intra_promoted_content field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_related_ref field'
  $permissions['node:os2intra_group:update field_os2intra_related_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_selvbetjening_ref field'
  $permissions['node:os2intra_group:update field_os2intra_selvbetjening_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_termination_date field'
  $permissions['node:os2intra_group:update field_os2intra_termination_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_user_bio field'
  $permissions['node:os2intra_group:update field_os2intra_user_bio field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_user_competences field'
  $permissions['node:os2intra_group:update field_os2intra_user_competences field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_user_inter field'
  $permissions['node:os2intra_group:update field_os2intra_user_inter field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2intra_user_titles field'
  $permissions['node:os2intra_group:update field_os2intra_user_titles field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2web_base_field_kle_ref field'
  $permissions['node:os2intra_group:update field_os2web_base_field_kle_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_os2web_base_field_media field'
  $permissions['node:os2intra_group:update field_os2web_base_field_media field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update field_topics field'
  $permissions['node:os2intra_group:update field_topics field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update group'
  $permissions['node:os2intra_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update group_access field'
  $permissions['node:os2intra_group:update group_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update group_content_access field'
  $permissions['node:os2intra_group:update group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update group_group field'
  $permissions['node:os2intra_group:update group_group field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update og_group_org_ref field'
  $permissions['node:os2intra_group:update og_group_org_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update og_group_ref field'
  $permissions['node:os2intra_group:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update og_roles_permissions field'
  $permissions['node:os2intra_group:update og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update og_user_node field'
  $permissions['node:os2intra_group:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update own event content'
  $permissions['node:os2intra_group:update own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update own os2intra_org_group_unit content'
  $permissions['node:os2intra_group:update own os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update own post content'
  $permissions['node:os2intra_group:update own post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update own wiki content'
  $permissions['node:os2intra_group:update own wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view body field'
  $permissions['node:os2intra_group:view body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_name_first field'
  $permissions['node:os2intra_group:view field_name_first field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_name_last field'
  $permissions['node:os2intra_group:view field_name_last field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_base_spotboxes field'
  $permissions['node:os2intra_group:view field_os2intra_base_spotboxes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_date field'
  $permissions['node:os2intra_group:view field_os2intra_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_dept_tools field'
  $permissions['node:os2intra_group:view field_os2intra_dept_tools field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_employee_id field'
  $permissions['node:os2intra_group:view field_os2intra_employee_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_image field'
  $permissions['node:os2intra_group:view field_os2intra_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_images field'
  $permissions['node:os2intra_group:view field_os2intra_images field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_import_groups field'
  $permissions['node:os2intra_group:view field_os2intra_import_groups field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_organisation field'
  $permissions['node:os2intra_group:view field_os2intra_organisation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_organisation_ref field'
  $permissions['node:os2intra_group:view field_os2intra_organisation_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_physical_location field'
  $permissions['node:os2intra_group:view field_os2intra_physical_location field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_promoted_content field'
  $permissions['node:os2intra_group:view field_os2intra_promoted_content field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_related_ref field'
  $permissions['node:os2intra_group:view field_os2intra_related_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_selvbetjening_ref field'
  $permissions['node:os2intra_group:view field_os2intra_selvbetjening_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_termination_date field'
  $permissions['node:os2intra_group:view field_os2intra_termination_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_user_bio field'
  $permissions['node:os2intra_group:view field_os2intra_user_bio field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_user_competences field'
  $permissions['node:os2intra_group:view field_os2intra_user_competences field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_user_inter field'
  $permissions['node:os2intra_group:view field_os2intra_user_inter field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2intra_user_titles field'
  $permissions['node:os2intra_group:view field_os2intra_user_titles field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2web_base_field_kle_ref field'
  $permissions['node:os2intra_group:view field_os2web_base_field_kle_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_os2web_base_field_media field'
  $permissions['node:os2intra_group:view field_os2web_base_field_media field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view field_topics field'
  $permissions['node:os2intra_group:view field_topics field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view group_access field'
  $permissions['node:os2intra_group:view group_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view group_content_access field'
  $permissions['node:os2intra_group:view group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view group_group field'
  $permissions['node:os2intra_group:view group_group field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view og_group_org_ref field'
  $permissions['node:os2intra_group:view og_group_org_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view og_group_ref field'
  $permissions['node:os2intra_group:view og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view og_roles_permissions field'
  $permissions['node:os2intra_group:view og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:view og_user_node field'
  $permissions['node:os2intra_group:view og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:add user'
  $permissions['node:os2intra_org_group_unit:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:administer group'
  $permissions['node:os2intra_org_group_unit:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:approve and deny subscription'
  $permissions['node:os2intra_org_group_unit:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create event content'
  $permissions['node:os2intra_org_group_unit:create event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:create os2intra_org_group_unit content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create post content'
  $permissions['node:os2intra_org_group_unit:create post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create wiki content'
  $permissions['node:os2intra_org_group_unit:create wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any event content'
  $permissions['node:os2intra_org_group_unit:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:delete any os2intra_org_group_unit content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any post content'
  $permissions['node:os2intra_org_group_unit:delete any post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any wiki content'
  $permissions['node:os2intra_org_group_unit:delete any wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own event content'
  $permissions['node:os2intra_org_group_unit:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:delete own os2intra_org_group_unit content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own post content'
  $permissions['node:os2intra_org_group_unit:delete own post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own wiki content'
  $permissions['node:os2intra_org_group_unit:delete own wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:manage members'
  $permissions['node:os2intra_org_group_unit:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:manage permissions'
  $permissions['node:os2intra_org_group_unit:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:manage roles'
  $permissions['node:os2intra_org_group_unit:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:subscribe'
  $permissions['node:os2intra_org_group_unit:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:subscribe without approval'
  $permissions['node:os2intra_org_group_unit:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:unsubscribe'
  $permissions['node:os2intra_org_group_unit:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any event content'
  $permissions['node:os2intra_org_group_unit:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:update any os2intra_org_group_unit content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any post content'
  $permissions['node:os2intra_org_group_unit:update any post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any wiki content'
  $permissions['node:os2intra_org_group_unit:update any wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update body field'
  $permissions['node:os2intra_org_group_unit:update body field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_name_first field'
  $permissions['node:os2intra_org_group_unit:update field_name_first field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_name_last field'
  $permissions['node:os2intra_org_group_unit:update field_name_last field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_base_spotboxes field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_base_spotboxes field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_date field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_dept_tools field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_dept_tools field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_employee_id field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_employee_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_image field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_image field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_images field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_images field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_import_groups field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_import_groups field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_organisation field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_organisation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_organisation_ref field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_organisation_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_physical_location field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_physical_location field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_promoted_content field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_promoted_content field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_related_ref field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_related_ref field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_selvbetjening_ref field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_selvbetjening_ref field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_termination_date field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_termination_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_user_bio field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_user_bio field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_user_competences field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_user_competences field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_user_inter field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_user_inter field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2intra_user_titles field'
  $permissions['node:os2intra_org_group_unit:update field_os2intra_user_titles field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2web_base_field_kle_ref field'
  $permissions['node:os2intra_org_group_unit:update field_os2web_base_field_kle_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_os2web_base_field_media field'
  $permissions['node:os2intra_org_group_unit:update field_os2web_base_field_media field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update field_topics field'
  $permissions['node:os2intra_org_group_unit:update field_topics field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update group'
  $permissions['node:os2intra_org_group_unit:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update group_access field'
  $permissions['node:os2intra_org_group_unit:update group_access field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update group_content_access field'
  $permissions['node:os2intra_org_group_unit:update group_content_access field'] = array(
    'roles' => array(
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update group_group field'
  $permissions['node:os2intra_org_group_unit:update group_group field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update og_group_org_ref field'
  $permissions['node:os2intra_org_group_unit:update og_group_org_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update og_group_ref field'
  $permissions['node:os2intra_org_group_unit:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update og_roles_permissions field'
  $permissions['node:os2intra_org_group_unit:update og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update og_user_node field'
  $permissions['node:os2intra_org_group_unit:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own event content'
  $permissions['node:os2intra_org_group_unit:update own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:update own os2intra_org_group_unit content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own post content'
  $permissions['node:os2intra_org_group_unit:update own post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own wiki content'
  $permissions['node:os2intra_org_group_unit:update own wiki content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view body field'
  $permissions['node:os2intra_org_group_unit:view body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_name_first field'
  $permissions['node:os2intra_org_group_unit:view field_name_first field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_name_last field'
  $permissions['node:os2intra_org_group_unit:view field_name_last field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_base_spotboxes field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_base_spotboxes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_date field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_dept_tools field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_dept_tools field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_employee_id field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_employee_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_image field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_images field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_images field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_import_groups field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_import_groups field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_organisation field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_organisation field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_organisation_ref field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_organisation_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_physical_location field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_physical_location field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_promoted_content field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_promoted_content field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_related_ref field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_related_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_selvbetjening_ref field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_selvbetjening_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_termination_date field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_termination_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_user_bio field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_user_bio field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_user_competences field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_user_competences field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_user_inter field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_user_inter field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2intra_user_titles field'
  $permissions['node:os2intra_org_group_unit:view field_os2intra_user_titles field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2web_base_field_kle_ref field'
  $permissions['node:os2intra_org_group_unit:view field_os2web_base_field_kle_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_os2web_base_field_media field'
  $permissions['node:os2intra_org_group_unit:view field_os2web_base_field_media field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view field_topics field'
  $permissions['node:os2intra_org_group_unit:view field_topics field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view group_access field'
  $permissions['node:os2intra_org_group_unit:view group_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view group_content_access field'
  $permissions['node:os2intra_org_group_unit:view group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view group_group field'
  $permissions['node:os2intra_org_group_unit:view group_group field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view og_group_org_ref field'
  $permissions['node:os2intra_org_group_unit:view og_group_org_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view og_group_ref field'
  $permissions['node:os2intra_org_group_unit:view og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view og_roles_permissions field'
  $permissions['node:os2intra_org_group_unit:view og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:view og_user_node field'
  $permissions['node:os2intra_org_group_unit:view og_user_node field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
