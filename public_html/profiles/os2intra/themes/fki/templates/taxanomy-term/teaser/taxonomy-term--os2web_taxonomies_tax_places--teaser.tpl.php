<?php if ($view_mode == 'teaser'): ?>
  <!-- taxonomy-term--os2web_taxonomies_tax_places--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> os2-taxonomy-term-teaser">

    <?php if (isset($content['field_os2intra_image'])): ?>
      <?php print render($content['field_os2intra_image']); ?>
    <?php else: ?>
      Show map
    <?php endif; ?>

    <?php if (isset($place)): ?>
      <!-- Begin - place -->
      <div class="os2-taxonomy-term-address os2-place">
        <?php print $place; ?>
      </div>
      <!-- End - place -->
    <?php endif; ?>

  </div>
  <!-- End - teaser -->

<?php endif; ?>
