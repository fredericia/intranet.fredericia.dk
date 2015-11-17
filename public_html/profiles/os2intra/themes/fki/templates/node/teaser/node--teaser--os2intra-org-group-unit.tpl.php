<?php if ($view_mode == 'teaser'): ?>
  <!-- node--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser fki-box fki-box-small-spacing"<?php print $attributes; ?>>
    <div class="table">
      <div class="table-row">
        <div class="table-cell">

          <!-- Begin - heading -->
          <div class="fki-teaser-heading">
            <h3 class="fki-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
          </div>
          <!-- End - heading -->
        </div>
      </div>
    </div>
  </article>
  <!-- End - teaser -->

<?php endif; ?>
