<?php if ($view_mode == 'teaser'): ?>
  <!-- node--vehicle--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-teaser-heading">
      <h3 class="fki-teaser-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="fki-teaser-body">

      <?php if (isset($content['field_registration_date'])): ?>
        <!-- Begin - registration date -->
        <div class="fki-teaser-body-registration-date">
          <?php print render($content['field_registration_date']); ?>
        </div>
        <!-- End - registration date -->
      <?php endif; ?>

      <?php if (isset($content['field_license_plate'])): ?>
        <!-- Begin - license plate -->
        <div class="fki-teaser-body-license-plate">
          <?php print render($content['field_license_plate']); ?>
        </div>
        <!-- End - license plate -->
      <?php endif; ?>

      <?php if (isset($content['field_brand'])): ?>
        <!-- Begin - brand -->
        <div class="fki-teaser-body-brand">
          <?php print render($content['field_brand']); ?>
        </div>
        <!-- End - brand -->
      <?php endif; ?>

      <?php if (isset($content['field_vin_no'])): ?>
        <!-- Begin - VIN number -->
        <div class="fki-teaser-body-vin-number">
          <?php print render($content['field_vin_no']); ?>
        </div>
        <!-- End - VIN number -->
      <?php endif; ?>

      <!-- Begin - action -->
      <div class="fki-teaser-body-action-button">
        <a href="<?php print $node_url; ?>" class="btn btn-default btn-loader"><?php print t('Vis køretøj'); ?> <span class="icon fa fa-arrow-right"></span></a>
      </div>
      <!-- End - action -->

      <?php if (isset($content['field_customer'])): ?>
        <!-- Begin - customer -->
        <div class="fki-teaser-body-customer">
          <?php print render($content['field_customer']); ?>
        </div>
        <!-- End - customer -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

    <!-- Begin - footer -->
    <?php if (isset($content['field_license_plate'])): ?>
      <div class="fki-teaser-footer">

        <?php if (isset($content['field_license_plate'])): ?>
          <!-- Begin - license plate -->
          <span class="fki-teaser-footer-button" data-toggle="tooltip" title="<?php print t('Reg. nr.'); ?>">
          <span class="icon fa fa-car"></span>
            <?php print render($content['field_license_plate']); ?>
        </span>
          <!-- End - license plate -->
        <?php endif; ?>

      </div>
    <?php endif; ?>
    <!-- End - footer -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
