<?php if ($view_mode == 'full'): ?>
  <!-- node.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-full"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2intra_images'])): ?>
      <!-- Begin - image -->
      <div class="fki-full-image">
        <?php print render($content['field_os2intra_images']); ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>

    <?php if (isset($author_full_name) and $updated_at_short): ?>
      <ul class="fki-full-info">
        <li><?php print l($author_full_name, 'user/' . $node->uid); ?></li>
        <li><span><?php print t('Sidst opdateret d.'); ?> <?php print $updated_at_short; ?></span></li>
      </ul>
    <?php endif ?>

    <div class="fki-full-heading">
      <?php print render($title_prefix); ?>
      <h2<?php print $title_attributes; ?> class="fki-full-heading-title"><?php print $title; ?></h2>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content['field_os2web_base_field_intro'])): ?>
      <!-- Begin - intro -->
      <div class="fki-full-intro">
        <?php print render($content['field_os2web_base_field_intro']); ?>
      </div>
      <!-- End - intro -->
    <?php endif; ?>

    <?php if (isset($content['body'])): ?>
      <!-- Begin - body -->
      <div class="fki-full-body">
        <?php print render($content['body']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

    <?php print render($content['links']); ?>

  </div>
  <!-- End - full node -->

<?php endif; ?>
