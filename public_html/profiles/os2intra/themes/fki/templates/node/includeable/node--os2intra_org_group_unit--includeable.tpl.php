<?php if ($view_mode == 'includeable'): ?>
  <!-- node--os2intra_org_group_unit--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-includeable os2-node-includeable-organisation-unit"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="os2-node-includeable-heading">
      <a href="<?php print $node_url; ?>" class="os2-node-includeable-heading-title"><?php print $title_shortened; ?></a>
    </div>
    <!-- End - heading -->

    <!-- Begin - users -->
    <?php if (!empty($users)): ?>

      <?php foreach($users AS $user): ?>
        <?php print render($user); ?>
      <?php endforeach ?>
    <?php endif ?>
    <!-- End - users -->

  </div>
  <!-- End - includeable -->

<?php endif; ?>
