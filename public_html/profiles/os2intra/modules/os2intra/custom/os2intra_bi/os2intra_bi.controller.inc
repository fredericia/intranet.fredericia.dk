<?php

/**
 * @file
 * Describe entity and controller classes for entity, entity type and admin UI.
 */

/**
 * OS2intra BI class.
 */
class OS2intraBI extends Entity {
  /**
   * Define the label of the entity.
   */
  protected function defaultLabel() {
    return $this->title;
  }

  /**
   * Specify the default uri, which is picked up by uri() by default.
   */
  protected function defaultUri() {
    return array('path' => 'os2intra_bi/' . $this->identifier());
  }
}

/**
 * OS2intra BI controller class.
 */
class OS2intraBIController extends EntityAPIController {
  /**
   * Build a structured array representing the entity's content.
   */
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    // Make "description" property themed like default fields.
    $content['description'] = array(
      '#theme' => 'field',
      '#weight' => 0,
      '#title' => t('Description'),
      '#access' => TRUE,
      '#label_display' => 'above',
      '#view_mode' => 'full',
      '#language' => LANGUAGE_NONE,
      '#field_name' => 'field_fake_description',
      '#field_type' => 'text',
      '#entity_type' => 'os2intra_bi',
      '#bundle' => $entity->type,
      '#items' => array(array('value' => $entity->description)),
      '#formatter' => 'text_default',
      0 => array('#markup' => check_plain($entity->description)),
    );

    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}

/**
 * OS2Intra BI plugin class.
 */
class OS2intraBIPlugin extends Entity {
  public $type;
  public $label;
  public $weight = 0;

  /**
   * Overridden constructor.
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'os2intra_bi_plugin');
  }

  /**
   * Determine if the entity is locked.
   */
  public function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }
}

/**
 * OS2Intra BI plugin controller class.
 */
class OS2intraBIPluginController extends EntityAPIControllerExportable {
  /**
   * Rebuild menu after editing entity bundles.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    parent::save($entity, $transaction);
    // Rebuild menu registry.
    variable_set('menu_rebuild_needed', TRUE);
  }
}

/**
 * OS2Intra BI plugin UI controller class.
 */
class OS2intraBIPluginUiController extends EntityDefaultUIController {
  /**
   * Override hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage OS2Intra BI plugins.';
    return $items;
  }
}
