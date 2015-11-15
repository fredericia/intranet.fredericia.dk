<?php

/**
 * @file
 * Definition of blame_views_handler_field_entity_link.
 */

/**
 * Field handler to present a link to the registered entity (event).
 *
 * @ingroup views_field_handlers
 */
class blame_views_handler_field_entity_link extends views_handler_field_entity {
  function option_definition() {
    $options = parent::option_definition();
    $options['text'] = array('default' => '', 'translatable' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Text to display'),
      '#default_value' => $this->options['text'],
    );
    parent::options_form($form, $form_state);

    // The path is set by render_link function so don't allow to set it.
    $form['alter']['path'] = array('#access' => FALSE);
    $form['alter']['external'] = array('#access' => FALSE);
  }

  function render($values) {
    if ($entity = $this->get_value($values)) {
      return $this->render_link($entity, $values);
    }
  }

  function render_link($blame, $values) {
    if (user_access('view blame')) {
      $this->options['alter']['make_link'] = TRUE;
      $uri = entity_uri('blame', $blame);
      $this->options['alter']['path'] = drupal_get_path_alias($uri['path']);
      $text = !empty($this->options['text']) ? $this->options['text'] : t('view');
      return $text;
    }
  }

}
