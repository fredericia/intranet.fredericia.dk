<?php if ($view_mode == 'teaser_simple'): ?>
  <!-- node--teaser_simple--sales_ad.tpl.php -->
  <!-- Begin - teaser simple -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser-simple fki-teaser-simple-sales-ad"<?php print $attributes; ?>>

    <?php if (isset($content['field_images'])) : ?>
    <!-- Begin - full width image -->
      <div class="fki-full-width-image fki-image-cover-container">
        <?php print render($content['field_images']); ?>

        <?php if (isset($animal_breed) && isset($content['field_sales_date'])): ?>
          <!-- Begin - image cover -->
          <div class="fki-image-cover-content">
            <?php if (isset($animal_breed)): ?>
              <div class="fki-teaser-simple-breed-container">
                <h5 class="fki-teaser-simple-content-field"><?php print render($animal_breed); ?></h5>
              </div>
            <?php endif ?>

            <?php if (isset($content['field_sales_date'])): ?>
              <div class="fki-teaser-simple-sales-date-container">
                <div class="fki-teaser-simple-content-field"><?php print render($content['field_sales_date']); ?></div>
              </div>
            <?php endif ?>
          </div>
          <!-- End - image cover -->
        <?php endif ?>

      </div>
    <!-- End - full width image -->
    <?php endif; ?>

    <!-- Begin - body -->
    <div class="fki-teaser-simple-body">

      <!-- Begin - location, price and link -->
      <section class="fki-teaser-simple-section-2-columns">

        <?php if (isset($content['field_price_per_young']) && isset($user_location)): ?>
          <div class="fki-teaser-simple-section-column">

            <?php if (isset($user_location)): ?>
              <div class="fki-teaser-simple-location-container">
                <h5 class="fki-teaser-simple-content-field"><?php print render($user_location); ?></h5>
              </div>
            <?php endif ?>

            <?php if (isset($content['field_price_per_young'])): ?>
              <div class="fki-teaser-simple-price-per-young-container">
                <p class="fki-teaser-simple-content-field"><?php print render($content['field_price_per_young']); ?> <?php print t('pr. hvalp'); ?></p>
              </div>
            <?php endif ?>

          </div>
        <?php endif ?>

        <div class="fki-teaser-simple-section-column">
          <div class="fki-teaser-simple-link-container">
            <?php print l(t('Vis'), $node_url, array('attributes' => array('class' => array('btn', 'btn-default', 'btn-sm')))); ?>
          </div>
        </div>

      </section>
      <!-- End - location, price and link -->

    </div>
    <!-- End - body -->

  </article>
  <!-- End - teaser simple -->
<?php endif; ?>
