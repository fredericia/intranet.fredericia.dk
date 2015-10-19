<?php if ($view_mode == 'includeable'): ?>
  <!-- node--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-includeable"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-includeable-heading">
      <h3 class="fki-includeable-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="fki-includeable-body">
    </div>
    <!-- End - body -->

  </article>
  <!-- End - includeable -->

<?php endif; ?>
