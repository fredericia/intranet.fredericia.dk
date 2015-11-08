<?php if ($view_mode == 'list'): ?>
  <!-- node--event--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-list fki-list-event"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-list-heading">
      <h3 class="fki-list-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - list -->

<?php endif; ?>
