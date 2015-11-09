<?php if ($view_mode == 'teaser'): ?>
  <!-- node--os2intra_message_notification--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-teaser fki-message-notification-teaser fki-box fki-box-small-spacing"<?php print $attributes; ?>>

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

  </article>
  <!-- End - teaser -->

<?php endif; ?>
