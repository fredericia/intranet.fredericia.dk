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

function os2intra_bi_view_bundles() {
  $entity_info = entity_get_info('os2intra_bi');
  foreach($entity_info['bundles'] as $bundle_system_name => $bundle) {
    $entity_bundles[$bundle_system_name] = $bundle['label'];
  }
  asort($entity_bundles);
  $form['bundles'] = array(
    '#prefix' => '<table class="views-table table table-hover table-striped table-responsive-stacked">',
    '#suffix' => '</table>',
  );
  $form['bundles']['header'] = array(
    '#markup' => '<thead>
      <tr>
        <th>' . t('Title') . '</th>
        <th>' . t('Edit') . '</th>
        <th>' . t('Delete') . '</th>
      </tr>
    </thead>',
  );
  foreach ($entity_bundles as $system_name => $label) {
    $form['bundles'][$label] = array(
      '#prefix' => '<tr>',
      '#suffix' => '</tr>',
      '#markup' => '
        <td><a href="/os2intra-bi/types/' . $system_name . '">' . $label . '</a></td>
        <td><a href="/admin/structure/os2intra-bi/manage/' . $system_name . '">' . t('Edit') . '</a></td>
        <td><a href="/admin/structure/os2intra-bi/manage/' . $system_name . '/delete">' . t('Delete') . '</a></td>
      ',
    );
  }
  return $form;
}
