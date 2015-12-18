<?php if ($view_mode == 'teaser'): ?>
  <!-- taxonomy-term--os2web_taxonomies_tax_places--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> os2-taxonomy-term-teaser os2-place">

    <?php if (isset($content['field_os2intra_image'])): ?>
      <!-- Begin - image -->
      <div class="os2-place-google-map os2-taxonomy-term-teaser-full-width-image">
        <?php print render($content['field_os2intra_image']); ?>
      </div>
      <!-- End - image -->
    <?php else: ?>

      <?php if (isset($google_map)): ?>
        <!-- Begin - google map -->
        <div class="os2-place-google-map os2-taxonomy-term-teaser-full-width-image">
          <?php print render($google_map); ?>
        </div>
        <!-- End - google map -->
      <?php endif; ?>

    <?php endif; ?>

    <div class="os2-taxonomy-term-teaser-body">

      <?php if (isset($place)): ?>
        <!-- Begin - place -->
        <div class="os2-taxonomy-term-address">
          <?php print $place; ?>
        </div>
        <!-- End - place -->
      <?php endif; ?>

    </div>

  </div>
  <!-- End - teaser -->

<?php endif; ?>
