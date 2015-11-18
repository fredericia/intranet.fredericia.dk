<?php if ($view_mode == 'list'): ?>
  <!-- node--post--node_basket.tpl.php -->
  <!-- Begin - node basket -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-list fki-list-node-basket"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-list-heading">
      <span class="fki-list-heading-date"><?php print $created_at_seperated['day']['integer']; ?>/<?php print $created_at_seperated['month']['integer']; ?></span>
      <h3 class="fki-list-heading-title"><a href="<?php print $node_url; ?>"><?php print $title_shortened; ?></a></h3>
      <span class="fki-list-heading-time-ago"><?php print $created_at_ago; ?></span>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - node basket -->

<?php endif; ?>
