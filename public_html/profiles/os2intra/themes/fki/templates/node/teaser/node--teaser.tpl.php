<?php if ($view_mode == 'teaser'): ?>
  <!-- node--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-teaser-heading">
      <h3 class="fki-teaser-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="fki-teaser-body">
    </div>
    <!-- End - body -->

    <!-- Begin - footer -->
    <div class="fki-teaser-footer">
    </div>
    <!-- End - footer -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
