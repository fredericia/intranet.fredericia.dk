<?php if ($view_mode == 'list'): ?>
  <!-- node--post--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-node-list fki-node-list-post"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-node-list-heading">
      <span class="fki-node-list-heading-date"><?php print $created_at_seperated['day']['integer']; ?>/<?php print $created_at_seperated['month']['integer']; ?></span>
      <h3 class="fki-node-list-heading-title"><a href="<?php print $node_url; ?>"><?php print $title_shortened; ?></a></h3>
      <span class="fki-node-list-heading-time-ago"><?php print $created_at_ago; ?></span>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - list -->

<?php endif; ?>
