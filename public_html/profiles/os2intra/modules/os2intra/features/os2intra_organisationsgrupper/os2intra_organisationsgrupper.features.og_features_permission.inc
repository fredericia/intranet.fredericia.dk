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

  // Exported og permission: 'node:os2intra_group:administer group'
  $permissions['node:os2intra_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:create event content'
  $permissions['node:os2intra_group:create event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:create os2intra_org_group_unit content'
  $permissions['node:os2intra_group:create os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:create post content'
  $permissions['node:os2intra_group:create post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:create wiki content'
  $permissions['node:os2intra_group:create wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:delete any event content'
  $permissions['node:os2intra_group:delete any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:delete any os2intra_org_group_unit content'
  $permissions['node:os2intra_group:delete any os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete any post content'
  $permissions['node:os2intra_group:delete any post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:delete any wiki content'
  $permissions['node:os2intra_group:delete any wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:delete own event content'
  $permissions['node:os2intra_group:delete own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:delete own os2intra_org_group_unit content'
  $permissions['node:os2intra_group:delete own os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:delete own post content'
  $permissions['node:os2intra_group:delete own post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:delete own wiki content'
  $permissions['node:os2intra_group:delete own wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update any event content'
  $permissions['node:os2intra_group:update any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update any os2intra_org_group_unit content'
  $permissions['node:os2intra_group:update any os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update any post content'
  $permissions['node:os2intra_group:update any post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update any wiki content'
  $permissions['node:os2intra_group:update any wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update group'
  $permissions['node:os2intra_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update own event content'
  $permissions['node:os2intra_group:update own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update own os2intra_org_group_unit content'
  $permissions['node:os2intra_group:update own os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_group:update own post content'
  $permissions['node:os2intra_group:update own post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_group:update own wiki content'
  $permissions['node:os2intra_group:update own wiki content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:add user'
  $permissions['node:os2intra_org_group_unit:add user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:administer group'
  $permissions['node:os2intra_org_group_unit:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:approve and deny subscription'
  $permissions['node:os2intra_org_group_unit:approve and deny subscription'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create event content'
  $permissions['node:os2intra_org_group_unit:create event content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:create os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create post content'
  $permissions['node:os2intra_org_group_unit:create post content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:create wiki content'
  $permissions['node:os2intra_org_group_unit:create wiki content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any event content'
  $permissions['node:os2intra_org_group_unit:delete any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'leder' => 'leder',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:delete any os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any post content'
  $permissions['node:os2intra_org_group_unit:delete any post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'leder' => 'leder',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete any wiki content'
  $permissions['node:os2intra_org_group_unit:delete any wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'leder' => 'leder',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own event content'
  $permissions['node:os2intra_org_group_unit:delete own event content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:delete own os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own post content'
  $permissions['node:os2intra_org_group_unit:delete own post content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:delete own wiki content'
  $permissions['node:os2intra_org_group_unit:delete own wiki content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:manage members'
  $permissions['node:os2intra_org_group_unit:manage members'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:manage permissions'
  $permissions['node:os2intra_org_group_unit:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:manage roles'
  $permissions['node:os2intra_org_group_unit:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:subscribe'
  $permissions['node:os2intra_org_group_unit:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:subscribe without approval'
  $permissions['node:os2intra_org_group_unit:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:unsubscribe'
  $permissions['node:os2intra_org_group_unit:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any event content'
  $permissions['node:os2intra_org_group_unit:update any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'leder' => 'leder',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:update any os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any post content'
  $permissions['node:os2intra_org_group_unit:update any post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'leder' => 'leder',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update any wiki content'
  $permissions['node:os2intra_org_group_unit:update any wiki content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update group'
  $permissions['node:os2intra_org_group_unit:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
      'member' => 'member',
      'organisatorisk' => 'organisatorisk',
      'superuser' => 'superuser',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own event content'
  $permissions['node:os2intra_org_group_unit:update own event content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own os2intra_org_group_unit content'
  $permissions['node:os2intra_org_group_unit:update own os2intra_org_group_unit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own post content'
  $permissions['node:os2intra_org_group_unit:update own post content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  // Exported og permission: 'node:os2intra_org_group_unit:update own wiki content'
  $permissions['node:os2intra_org_group_unit:update own wiki content'] = array(
    'roles' => array(
      'leder' => 'leder',
      'medarbejder' => 'medarbejder',
    ),
  );

  return $permissions;
}
