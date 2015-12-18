<?php if ($view_mode == 'list'): ?>
  <!-- node--os2web_base_selfservice_link--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-list os2-node-list-selfservice"<?php print $attributes; ?>>

    <!-- Begin - body -->
    <div class="os2-node-list-body">

        <?php if (isset($content['field_urlos2intra_selvbetje_link'])): ?>
          <!-- Begin - external link -->
          <?php print render($content['field_urlos2intra_selvbetje_link']); ?>
          <!-- End - external link -->
        <?php elseif (isset($content['field_urlos2intra_selvbetje_int'])): ?>
          <!-- Begin - internal link -->
          <?php print render($content['field_urlos2intra_selvbetje_int']); ?>
          <!-- End - internal link -->
        <?php endif; ?>

    </div>
    <!-- End - body -->

  </section>
  <!-- End - list -->

<?php endif; ?>
