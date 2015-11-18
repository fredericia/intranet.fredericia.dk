<?php if ($view_mode == 'full'): ?>
  <!-- node--node_basket--full.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-full fki-full-node-basket"<?php print $attributes; ?>>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="fki-full-body">

        <?php if (isset($content['field_node_basket_references'])): ?>
          <!-- Begin - references -->
          <div class="fki-full-body-references">
            <?php print render($content['field_node_basket_references']); ?>
          </div>
          <!-- End - references -->
        <?php endif; ?>

      </div>
      <!-- End - body -->
    <?php endif; ?>

    <!-- Begin - footer -->
    <div class="fki-full-footer fki-footer-elements">

      <!-- Begin - convert to toolbox -->
      <a href="/node_basket/basket/view/convert" class="fki-footer-element">
        <span class="icon fa fa-recycle"></span>
        <?php print t('Convert to toolbox'); ?>
      </a>
      <!-- End - convert to toolbox -->

    </div>
    <!-- End - footer -->

  </div>
  <!-- End - full node -->

<?php endif; ?>
