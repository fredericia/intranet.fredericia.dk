<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]): ?> class="<?php print $classes_array[$id]; ?>"<?php endif; ?>>
    <?php $entity_properties = explode('/',strip_tags($row));
    if (trim($entity_properties[0]) == 'node') {
      print drupal_render(node_view(node_load((int)$entity_properties[1]),'teaser'));
    }
    else if (trim($entity_properties[0]) == 'taxonomy_term'){
      print drupal_render(taxonomy_term_view(taxonomy_term_load((int)$entity_properties[1]),'teaser'));
    }
    ?>

  </div>
<?php endforeach; ?>
