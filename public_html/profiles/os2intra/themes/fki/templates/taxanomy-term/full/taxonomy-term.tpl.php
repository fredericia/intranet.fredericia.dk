<?php if ($view_mode == 'full'): ?>
  <!-- taxonomy-term.tpl.php -->
  <!-- Begin - full -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> fki-full">

    <div class="fki-full-heading">
      <h2 class="fki-full-heading-title"><?php print $term_name; ?></h2>
    </div>

    <?php if (isset($content['body'])): ?>
      <!-- Begin - body -->
      <div class="fki-full-body">
        <?php print render($content['body']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

    <?php print render($content['links']); ?>

  </div>
  <!-- End - full -->

<?php endif; ?>
