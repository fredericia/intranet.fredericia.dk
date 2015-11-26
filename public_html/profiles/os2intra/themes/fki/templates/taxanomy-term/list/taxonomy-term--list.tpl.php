<?php if ($view_mode == 'list'): ?>
  <!-- taxonomy-term--list.tpl.php -->
  <!-- Begin - list -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> fki-taxonomy-term-list">

    <div class="fki-taxonomy-term-list-heading">
      <h2 class="fki-taxonomy-term-list-heading-title"><?php print $term_name; ?></h2>
    </div>

    <?php if (isset($content['body'])): ?>
      <!-- Begin - body -->
      <div class="fki-taxonomy-term-list-body">
        <?php print render($content['body']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

    <?php print render($content['links']); ?>

  </div>
  <!-- End - list -->

<?php endif; ?>
