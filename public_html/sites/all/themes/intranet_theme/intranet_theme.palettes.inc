<?php

/**
 * Returns an array of color palettes keyed on class name.
 */
function intranet_theme_get_palettes() {
  $palettes = array(
    'default' => 'Default',
    'palette-gray-lightgray-blue' => 'Grey/light grey/blue',
    'palette-blue-blue' => 'Blue/blue',
    'palette-magenta-blue' => 'Magenta/blue',
    'palette-black-green' => 'Black/green',
    'palette-brown-burnt-orange' => 'Brown/burnt orange',
    'palette-brown-yellow' => 'Brown/yellow',
    'palette-seafoam-orange' => 'Seafom orange',
    'palette-orange-red' => 'Orange/red',
    'palette-black-blue-yellow' => 'Black blue yellow',
    'palette-black-white-red' => 'Black/white/red',
    'palette-brick-brick' => 'Brick',
  );

  foreach ($palettes as $key => $name) {
    $palettes[$key] = theme('image', array('alt' => t($name), 'title' => t($name), 'path' => drupal_get_path('theme', 'intranet_theme') . "/images/palettes/$key.png"));
  }
  return $palettes;
}

/**
 * Add a color palette selection to a form.
 */
function intranet_theme_palettes_form(&$form) {
  $form['intranet_theme_palette_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Color palette'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['intranet_theme_palette_fieldset']['intranet_theme_palette'] = array(
    '#type' => 'radios',
    '#options' => intranet_theme_get_palettes(),
    '#default_value' => variable_get('intranet_theme_palette', 'default'),
  );
  $form['#submit'][] = 'intranet_theme_color_palettes_form_submit';
}

/**
 * Submit handler for the intranet theme palette selection form.
 */
function intranet_theme_color_palettes_form_submit($form, &$form_state) {
  variable_set('intranet_theme_palette', $form_state['values']['intranet_theme_palette']);
}