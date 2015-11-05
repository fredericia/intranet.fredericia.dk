<?php if ($view_mode == 'full'): ?>
  <!-- node.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-full"<?php print $attributes; ?>>

    <?php if ($author_full_name and $updated_at_short): ?>
      <ul class="fki-full-node-info">
        <li><?php print l($author_full_name, 'user/' . $node->uid); ?></li>
        <li><span><?php print t('Sidst opdateret d.'); ?> <?php print $updated_at_short; ?></span></li>
      </ul>
    <?php endif ?>

    <?php print render($title_prefix); ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php print render($title_suffix); ?>

    <?php print render($content['links']); ?>

  </div>
  <!-- End - full node -->

<?php endif; ?>
