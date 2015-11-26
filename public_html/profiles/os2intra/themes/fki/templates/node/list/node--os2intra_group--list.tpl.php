<?php if ($view_mode == 'list'): ?>
  <!-- node--os2intra_group--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-node-list fki-node-list-group"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-node-list-heading">
      <h3 class="fki-node-list-heading-title"><i class="icon fa fa-users"></i>  <a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - list -->

<?php endif; ?>
