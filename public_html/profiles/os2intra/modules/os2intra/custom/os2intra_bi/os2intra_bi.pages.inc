<?php

/**
 * @file
 * Callbacks for viewing entities.
 */

/**
 * Entity view callback.
 *
 * @param object $entity
 *   Entity to view.
 *
 * @return array
 *   Renderable array.
 */
function os2intra_bi_view($entity) {
  drupal_set_title(entity_label('os2intra_bi', $entity));

  // Return automatically generated view page.
  return entity_view('os2intra_bi', array(entity_id('os2intra_bi', $entity) => $entity));
}
