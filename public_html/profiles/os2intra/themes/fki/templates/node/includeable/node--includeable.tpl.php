<?php if ($view_mode == 'includeable'): ?>
  <!-- node--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> fki-includeable"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="fki-includeable-heading">
      <span class="fki-includeable-heading-date"><?php print $created_at_seperated['day']['integer']; ?>/<?php print $created_at_seperated['month']['integer']; ?></span>
      <a href="<?php print $node_url; ?>" class="fki-includeable-heading-title"><?php print $title_shortened; ?></a>
      <span class="fki-includeable-heading-author">
        <span class="fki-includeable-heading-author-intro"><?php print t('written by:'); ?></span>
        <?php print l($author_full_name, 'user/' . $node->uid, array('attributes' => array('class' => 'fki-includeable-heading-author-link'))); ?>
      </span>
    </div>
    <!-- End - heading -->

  </div>
  <!-- End - includeable -->

<?php endif; ?>
