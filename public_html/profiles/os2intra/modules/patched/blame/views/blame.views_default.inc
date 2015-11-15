<?php
/**
 * @file
 * Default Blame admin report views.
 */

/**
 * Implements hook_views_default_views().
 */
function blame_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blame_report';
  $view->description = 'Provides a report of form submissions from Blame.';
  $view->tag = 'default';
  $view->base_table = 'blame';
  $view->human_name = 'Blame Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blame Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view blame';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'form_id' => 'form_id',
    'location' => 'location',
    'username_blame' => 'username_blame',
    'view_blame' => 'view_blame',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'form_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'username_blame' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_blame' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no blame records.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Blame: Submission Date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'blame';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Blame: Form ID */
  $handler->display->display_options['fields']['form_id']['id'] = 'form_id';
  $handler->display->display_options['fields']['form_id']['table'] = 'blame';
  $handler->display->display_options['fields']['form_id']['field'] = 'form_id';
  /* Field: Blame: Form Location */
  $handler->display->display_options['fields']['location']['id'] = 'location';
  $handler->display->display_options['fields']['location']['table'] = 'blame';
  $handler->display->display_options['fields']['location']['field'] = 'location';
  $handler->display->display_options['fields']['location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['location']['alter']['path'] = '[location]';
  /* Field: Blame: Submitter Link */
  $handler->display->display_options['fields']['username_blame']['id'] = 'username_blame';
  $handler->display->display_options['fields']['username_blame']['table'] = 'blame';
  $handler->display->display_options['fields']['username_blame']['field'] = 'username_blame';
  $handler->display->display_options['fields']['username_blame']['label'] = 'Submitter';
  /* Field: Blame: View Link */
  $handler->display->display_options['fields']['view_blame']['id'] = 'view_blame';
  $handler->display->display_options['fields']['view_blame']['table'] = 'blame';
  $handler->display->display_options['fields']['view_blame']['field'] = 'view_blame';
  $handler->display->display_options['fields']['view_blame']['label'] = 'View';

  /* Display: Blame Report Page */
  $handler = $view->new_display('page', 'Blame Report Page', 'blame_report_page');
  $handler->display->display_options['display_description'] = 'Provides the Blame admin report page.';
  $handler->display->display_options['path'] = 'admin/reports/blame';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blame Report';
  $handler->display->display_options['menu']['description'] = 'View a report of form submissions from Blame.';
  $handler->display->display_options['menu']['name'] = 'management';

  $export['blame_report'] = $view;

  return $export;
}
