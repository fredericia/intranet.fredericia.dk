<?php if ($view_mode == 'teaser'): ?>
  <!-- node--task--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-teaser-heading">
      <h3 class="fki-teaser-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="fki-teaser-body">

      <?php if (isset($content['field_starting_date'])): ?>
        <!-- Begin - starting date -->
        <div class="fki-teaser-body-starting-date">
          <?php print render($content['field_starting_date']); ?>
        </div>
        <!-- End - starting date -->
      <?php endif; ?>

      <?php if (isset($content['field_vehicle'])): ?>
        <!-- Begin - vehicle -->
        <div class="fki-teaser-vehicle">
          <?php print render($content['field_vehicle']); ?>
        </div>
        <!-- End - vehicle -->
      <?php endif; ?>

      <?php if (isset($content['field_customer'])): ?>
        <!-- Begin - customer -->
        <div class="fki-teaser-body-customer">
          <?php print render($content['field_customer']); ?>
        </div>
        <!-- End - customer -->
      <?php endif; ?>

      <!-- Begin - action -->
      <div class="fki-teaser-body-action-button">
        <a href="<?php print $node_url; ?>" class="btn btn-default btn-loader"><?php print t('Vis opgave'); ?> <span class="icon fa fa-arrow-right"></span></a>
      </div>
      <!-- End - action -->

    </div>
    <!-- End - body -->

    <!-- Begin - footer -->
    <?php if (isset($content['field_invoice_no'])): ?>
      <div class="fki-teaser-footer">

        <?php if (isset($content['field_invoice_no'])): ?>
          <!-- Begin - order number -->
          <span class="fki-teaser-footer-button" data-toggle="tooltip" title="<?php print t('Faktura nr.'); ?>">
          <span class="icon fa fa-file-text-o"></span>
            <?php print render($content['field_invoice_no']); ?>
        </span>
          <!-- End - order number -->
        <?php endif; ?>

      </div>
    <?php endif; ?>
    <!-- End - footer -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
