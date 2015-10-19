<?php if ($view_mode == 'list_advanced'): ?>
  <!-- node--list_advanced.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-list-advanced"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-list-heading">
      <h3 class="fki-list-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="fki-list-body">
    </div>
    <!-- End - body -->

  </section>
  <!-- End - list -->

<?php endif; ?>
