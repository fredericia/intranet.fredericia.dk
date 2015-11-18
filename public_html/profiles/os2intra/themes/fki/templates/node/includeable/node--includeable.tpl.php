<?php if ($view_mode == 'includeable'): ?>
  <!-- node--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-includeable"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-includeable-heading">
      <a href="<?php print $node_url; ?>" class="fki-includeable-heading-title"><?php print $title_shortened; ?></a>
    </div>
    <!-- End - heading -->

  </div>
  <!-- End - includeable -->

<?php endif; ?>
