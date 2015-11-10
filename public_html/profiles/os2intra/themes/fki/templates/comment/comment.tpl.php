<!-- comment.tpl.php -->
<!-- Begin - comment -->
<div class="<?php print $classes; ?> fki-box fki-box-small-spacing"<?php print $attributes; ?>>
  <div class="table">
    <div class="table-row">
      <div class="table-column">
        <?php print $picture ?>
      </div>
      <div class="table-column">

        <div class="fki-box-body">

          <?php if (isset($author_full_name) and $updated_at_short): ?>
            <!-- Begin - entity info -->
            <ul class="fki-comment-info fki-entity-info">
              <li><?php print l($author_full_name, 'user/' . $node->uid); ?></li>
              <li><span><?php print $created_at_ago; ?></span></li>
            </ul>
            <!-- End - entity info -->
          <?php endif ?>

          <?php if (isset($content['comment_body'])): ?>
            <!-- Begin - comment body -->
            <div class="fki-comment-body">
              <?php print render($content['comment_body']); ?>
            </div>
            <!-- End - comment body -->
          <?php endif; ?>

        </div>
      </div>
    </div>
  </div>
</div>
<!-- End - comment -->
