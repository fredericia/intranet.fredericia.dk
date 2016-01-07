<?php if ($view_mode == 'teaser'): ?>
  <!-- node--os2intra_group--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-box os2-box-small-spacing"<?php print $attributes; ?>>
    <div class="table">
      <div class="table-row">
        <div class="table-cell">

          <!-- Begin - heading -->
          <div class="os2-node-teaser-heading">
            <h3 class="os2-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
          </div>
          <!-- End - heading -->
        </div>
      </div>
    </div>

    <!-- Begin - footer -->
    <div class="os2-node-teaser-footer os2-footer-elements">

      <!-- Begin - signup -->
      <span class="os2-footer-element">
        <span class="icon fa fa-sign-in"></span>
      </span>
      <!-- End - signup -->

      <!-- Begin - number of members -->
      <span class="os2-footer-element">
        <span class="icon fa fa-users"></span>
       12
      </span>
      <!-- End - number of members -->

    </div>
    <!-- End - footer -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
