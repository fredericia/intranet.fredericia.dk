<?php
/**
 * @file
 * Blame entity class.
 */

/**
 * Provides an entity class Blame.
 */
class BlameEntity extends Entity {

  // Allow access to Blame properties.
  public $bid;
  public $uid;
  public $form_id;
  public $created;
  public $location;
  public $data;
  public $changes;
  public $bundle = 'blame';

  /**
   * Construct.
   */
  public function __construct($values) {
    return parent::__construct($values, 'blame');
  }

  /**
   * A helper function to get the submitter.
   */
  public function user() {
    return user_load($this->uid);
  }

  /**
   * A helper funtion to generate a diff.
   */
  public function diff(BlameEntity $blame = NULL) {
    // Attempt to load the previous blame matching the form.
    if (empty($blame)) {
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'blame')
        ->propertyCondition('form_id', $this->form_id)
        ->propertyCondition('location', $this->location);

      if ($this->bid) {
        $query->propertyCondition('bid', $this->bid, '<');
      }

      $bids = $query->propertyOrderBy('bid', 'DESC')
        ->range(0, 1)
        ->execute();

      if (!empty($bids['blame']) && $prev_bid = reset($bids['blame'])) {
        $blame = blame_load($prev_bid->bid);
      }
    }

    // Load the diff engine and generate the diff.
    module_load_include('php', 'diff', 'DiffEngine');
    $old = isset($blame->data) ? explode("\n", print_r($blame->data, TRUE)) : array();
    $new = explode("\n", print_r($this->data, TRUE));
    $diff = new Diff($old, $new);

    $formatter = new DrupalDiffFormatter();
    $rows = $formatter->format($diff);

    $header = array(
      array('data' => t('Previous Data'), 'colspan' => 2),
      array('data' => t('Submitted Data'), 'colspan' => 2),
    );

    return theme('table', array(
      'header' => $header,
      'rows' => $rows,
      'attributes' => array(
        'class' => array('diff'),
      ),
    ));
  }

}
