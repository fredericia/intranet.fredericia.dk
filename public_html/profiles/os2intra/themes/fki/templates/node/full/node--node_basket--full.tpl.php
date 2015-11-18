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

        <a href="/node_basket/basket/view/convert" class="btn btn-secondary">
          <?php print t('Convert to toolbox'); ?>
        </a>

      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - full node -->

<?php endif; ?>
