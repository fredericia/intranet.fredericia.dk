<!-- comment.tpl.php -->
<!-- Begin - comment -->
<div class="<?php print $classes; ?> os2-box os2-box-small-spacing"<?php print $attributes; ?>>
  <div class="table">
    <div class="table-row">
      <div class="table-cell comment-user-picture-wrapper">
        <?php if (isset($profile_image)): ?>
          <!-- Begin - image -->
          <div class="user-picture">
            <?php print render($profile_image); ?>
          </div>
          <!-- End - image -->
        <?php endif; ?>
      </div>
      <div class="table-cell comment-body-wrapper">

        <div class="os2-box-body">

          <?php if (isset($author_full_name) and $updated_at_short): ?>
            <!-- Begin - entity info -->
            <ul class="os2-comment-info os2-entity-info">
              <li><?php print $author; ?></li>
              <li><span><?php print $created_at_ago; ?></span></li>
            </ul>
            <!-- End - entity info -->
          <?php endif ?>

          <?php if (isset($content['comment_body'])): ?>
            <!-- Begin - comment body -->
            <div class="os2-comment-body">
              <?php print render($content['comment_body']); ?>
            </div>
            <!-- End - comment body -->
          <?php endif; ?>

          <?php print render($content['links']) ?>
        </div>
      </div>
    </div>
  </div>
</div>
<!-- End - comment -->
