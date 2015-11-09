<?php if ($view_mode == 'teaser'): ?>
  <!-- node--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser fki-box fki-box-small-spacing"<?php print $attributes; ?>>

    <?php if (isset($author_full_name) and $updated_at_short): ?>
      <!-- Begin - entity info -->
      <ul class="fki-teaser-info fki-entity-info">
        <li><?php print l($author_full_name, 'user/' . $node->uid); ?></li>
        <li><span><?php print t('Sidst opdateret d.'); ?> <?php print $updated_at_short; ?></span></li>
      </ul>
      <!-- End - entity info -->
    <?php endif ?>

    <!-- Begin - heading -->
    <div class="fki-teaser-heading">
      <h3 class="fki-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="fki-teaser-body">

      <?php if (isset($content['body'])): ?>
        <!-- Begin - body -->
        <div class="fki-teaser-body-content">
          <?php print render($content['body']); ?>
        </div>
        <!-- End - body -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

    <!-- Begin - footer -->
    <div class="fki-teaser-footer">

      <!-- Begin - number of comments -->
      <span class="fki-teaser-footer-element fki-teaser-footer-element-number-of-comments"><?php print $number_of_comments; ?></span>
      <!-- End - number of comments -->

      <!-- Begin - number of hits -->
      <span class="fki-teaser-footer-element fki-teaser-footer-element-number-of-hits"><?php print $number_of_hits; ?></span>
      <!-- End - number of hits -->

    </div>
    <!-- End - footer -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
