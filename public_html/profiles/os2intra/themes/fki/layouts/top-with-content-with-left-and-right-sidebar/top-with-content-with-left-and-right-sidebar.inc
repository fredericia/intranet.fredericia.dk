<?php
/**
 * implementation of hook_panels_layouts()
 */
$plugin = array(
  'title' => t('Content with left and right sidebar'),
  'category' => t('OS2'),
  'icon' => 'top-with-content-with-left-and-right-sidebar.png',
  'theme' => 'top-with-content-with-left-and-right-sidebar',
  'css' => 'top-with-content-with-left-and-right-sidebar.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar-left' => t('Left sidebar'),
    'sidebar-right' => t('Right sidebar'),
    'content' => t('Content'),
  ),
);
