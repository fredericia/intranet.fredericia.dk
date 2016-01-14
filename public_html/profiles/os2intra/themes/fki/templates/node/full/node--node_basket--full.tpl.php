<?php if ($view_mode == 'full'): ?>
  <!-- node--node_basket--full.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full os2-node-full-node-basket"<?php print $attributes; ?>>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="os2-node-full-body">

        <?php if (isset($content['field_node_basket_references'])): ?>
          <!-- Begin - references -->
          <div class="os2-node-full-body-references">
            <?php print render($content['field_node_basket_references']); ?>
          </div>
          <!-- End - references -->
        <?php endif; ?>

        <?php if (isset($content['field_node_basket_links'])): ?>
          <!-- Begin - external links -->
          <div class="os2-node-full-body-external-links">
            <?php print render($content['field_node_basket_links']); ?>
          </div>
          <!-- End - external links -->
        <?php endif; ?>

        <?php if (isset($content['field_node_basket_references']) && $basket_type == 'basket'): ?>
          <!-- Begin - action buttons -->
          <div class="os2-node-full-body-action-buttons">
            <a href="/node_basket/basket/view/convert" class="btn btn-tertiary btn-sm">
              <span class="icon fa fa-recycle"></span>
              <?php print t('Convert to toolbox'); ?>
            </a>
          </div>
          <!-- End - action buttons -->
        <?php endif; ?>

      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - full node -->

<?php endif; ?>
