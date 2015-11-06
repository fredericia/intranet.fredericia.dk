<!-- comment-wrapper.tpl.php -->
<!-- Begin - comment wrapper -->
<div id="comments" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($content['comments']); ?>

  <?php if ($content['comment_form']): ?>
    <div class="fki-box">
      <div class="fki-box-body">
        <?php print render($content['comment_form']); ?>
      </div>
    </div>
  <?php endif; ?>

</div>
<!-- End - comment wrapper -->
