<?php if ($view_mode == 'teaser'): ?>
  <!-- node--spotbox--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-node-teaser fki-spotbox-teaser"<?php print $attributes; ?>>

    <?php if (isset($content['field_spotbox_image'])): ?>
      <!-- Begin - image -->
      <div class="fki-node-teaser-image">
        <?php print render($content['field_spotbox_image']); ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>

    <?php if ($title): ?>
    <!-- Begin - heading -->
    <div class="fki-node-teaser-heading">
      <h3 class="fki-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->
    <?php endif; ?>

    <!-- Begin - body -->
    <div class="fki-node-teaser-body">

      <?php if (isset($content['field_spotbox_text'])): ?>
        <!-- Begin - text -->
        <div class="fki-node-teaser-body-text">
          <?php print render($content['field_spotbox_text']); ?>
        </div>
        <!-- End - text -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
