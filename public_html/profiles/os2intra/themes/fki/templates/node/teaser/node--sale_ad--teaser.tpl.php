<?php if ($view_mode == 'teaser'): ?>
  <!-- Begin - teaser (node--sale-ad--teaser.tpl.php) -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser"<?php print $attributes; ?>>

    <!-- Begin - full width image -->
    <?php if (isset($content['field_images'])) : ?>
      <div class="fki-full-width-image">
        <?php print render($content['field_images']); ?>
      </div>
    <?php endif; ?>
    <!-- End - full width image -->

    <!-- Begin - body -->
    <div class="fki-teaser-body">

      <!-- Begin - breed, location and price -->
      <section class="fki-teaser-section-2-columns">

        <?php if (isset($animal_breed) && isset($user_location)): ?>
          <div class="fki-teaser-section-column">

            <?php if (isset($animal_breed)): ?>
              <div class="fki-teaser-breed-container">
                <p class="fki-teaser-content-field"><?php print render($animal_breed); ?></p>
              </div>
            <?php endif ?>

            <?php if (isset($user_location)): ?>
              <div class="fki-teaser-location-container">
                <p class="fki-teaser-content-field"><?php print render($user_location); ?></p>
              </div>
            <?php endif ?>

          </div>
        <?php endif ?>

        <?php if (isset($litter_price_per_young)): ?>
          <div class="fki-teaser-section-column">
            <div class="fki-teaser-price-per-young-container">
              <p class="fki-teaser-content-label"><?php print t('Pris pr. hvalp'); ?></p>
              <p class="fki-teaser-content-field"><?php print render($litter_price_per_young); ?></p>
            </div>
          </div>
        <?php endif ?>

      </section>
      <!-- End - breed, location and price -->

      <!-- Begin - rating -->
      <section class="fki-teaser-section-2-columns">
      </section>
      <!-- End - rating -->

      <!-- Begin - birth- and salesdate -->
      <section class="fki-teaser-section-2-columns fki-teaser-section-2-columns-bordered">

        <?php if (isset($litter_birthdate)): ?>
          <div class="fki-teaser-section-column">
            <div class="fki-teaser-birthdate-container">
              <p class="fki-teaser-content-label"><?php print t('Fødselsdato'); ?></p>
              <p class="fki-teaser-content-field"><?php print render($litter_birthdate); ?></p>
            </div>
          </div>
        <?php endif ?>

        <?php if (isset($content['field_sales_date'])): ?>
          <div class="fki-teaser-section-column">
            <div class="fki-teaser-sales-date-container">
              <p class="fki-teaser-content-label"><?php print t('Salgsklar pr.'); ?></p>
              <?php print render($content['field_sales_date']); ?>
            </div>
          </div>
        <?php endif ?>

      </section>
      <!-- End - birth- and salesdate -->

      <!-- Begin - button -->
      <section>
        <div class="fki-teaser-link-container">
          <?php print l(t('Vis annonce'), 'node/' . $node->nid, array('attributes' => array('class' => array('button', 'expand')))); ?>
        </div>
      </section>
      <!-- End - button -->

    </div>
    <!-- End - body -->

  </article>
  <!-- End - teaser -->
<?php endif; ?>
