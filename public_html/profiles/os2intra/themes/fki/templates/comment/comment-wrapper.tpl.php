<!-- comment-wrapper.tpl.php -->
<!-- Begin - comment wrapper -->
<div id="comments" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($content['comments']); ?>

  <?php if ($content['comment_form']): ?>
    <div>
      <?php print render($content['comment_form']); ?>
    </div>
  <?php endif; ?>

</div>
<!-- End - comment wrapper -->
