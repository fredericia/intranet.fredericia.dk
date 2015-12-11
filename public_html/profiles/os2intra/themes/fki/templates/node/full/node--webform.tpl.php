<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);

    if (isset($content['field_tags'])) {
      hide($content['field_tags']);
    }

    if (isset($content['field_os2intra_images'])) {
      hide($content['field_os2intra_images']);
    }
    if (isset($content['field_os2intra_image'])) {
      hide($content['field_os2intra_image']);
    }
  ?>
  <!-- node.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2intra_images'])): ?>
      <!-- Begin - image -->
      <div class="os2-node-full-image">
        <?php print render($content['field_os2intra_images']); ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>
        <?php if (isset($content['field_os2intra_image'])): ?>
      <!-- Begin - image -->
      <div class="os2-node-full-image">
        <?php print render($content['field_os2intra_image']); ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>

    <?php if (!empty($content['links_top'])): ?>
      <!-- Begin - controlpanel -->
      <div class="os2-node-full-controlpanel">

        <!-- Begin - links -->
        <div class="os2-links os2-links-top">
          <?php print render($content['links_top']); ?>
        </div>
        <!-- End - links -->

      </div>
      <!-- End - controlpanel -->
    <?php endif ?>

    <?php if (isset($author_full_name) and $updated_at_short): ?>
      <!-- Begin - entity info -->
      <ul class="os2-node-full-info os2-entity-info">
        <li><?php print l($author_full_name, 'user/' . $node->uid); ?></li>
        <li><span><?php print t('Sidst opdateret d.'); ?> <?php print $updated_at_short; ?></span></li>
      </ul>
      <!-- End - entity info -->
    <?php endif ?>

    <div class="os2-node-full-heading">
      <?php print render($title_prefix); ?>
      <h2<?php print $title_attributes; ?> class="os2-node-full-heading-title"><?php print $title; ?></h2>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content['field_os2web_base_field_intro'])): ?>
      <!-- Begin - intro -->
      <div class="os2-node-full-intro">
        <?php print render($content['field_os2web_base_field_intro']); ?>
      </div>
      <!-- End - intro -->
    <?php endif; ?>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="os2-node-full-body">
        <?php print render($content); ?>

        <?php if (isset($sections)): ?>
          <?php print $sections; ?>
        <?php endif ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

    <?php if (!empty($content['links_bottom'])): ?>
      <!-- Begin - footer -->
      <div class="os2-node-full-footer">

        <!-- Begin - links -->
        <div class="os2-links os2-links-bottom">
          <?php print render($content['links_bottom']); ?>
        </div>
        <!-- End - links -->

      </div>
      <!-- End - footer -->
    <?php endif ?>

  </div>
  <!-- End - full node -->
<?php else: ?>
<?php print render($content); ?>
<?php endif; ?>