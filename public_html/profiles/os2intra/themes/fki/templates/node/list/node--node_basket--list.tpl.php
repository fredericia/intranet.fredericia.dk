<?php if ($view_mode == 'list'): ?>
  <!-- node--node_basket--list.tpl.php -->
  <!-- Begin - node basket -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-list os2-node-list-node-basket"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="os2-node-list-heading">
      <span class="os2-node-list-heading-date"><?php print $created_at_seperated['day']['integer']; ?>/<?php print $created_at_seperated['month']['integer']; ?></span>
      <h3 class="os2-node-list-heading-title"><a href="<?php print $node_url; ?>"><?php print $title_shortened; ?></a></h3>
      <?php if ($action_button): ?>
        <?php print $action_button; ?>
      <?php endif ?>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - node basket -->

<?php endif; ?>
