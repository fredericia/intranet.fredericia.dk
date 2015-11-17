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

    <!-- Begin - footer -->
    <div class="fki-teaser-footer fki-footer-elements">

      <!-- Begin - signup -->
      <span class="fki-footer-element">
        <span class="icon fa fa-sign-in"></span>
         
      </span>
      <!-- End - signup -->

      <!-- Begin - number of members -->
      <span class="fki-footer-element">
        <span class="icon fa fa-users"></span>
       12
      </span>
      <!-- End - number of members -->

    </div>
    <!-- End - footer -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
