<!-- user-profile--teaser.tpl.php -->
<!-- Begin - teaser -->
<div id="user-profile-<?php print $user->uid; ?>" class="<?php print $classes; ?> os2-user-teaser"<?php print $attributes; ?>>

  <div class="table">
    <div class="table-row">
      <div class="table-cell">

        <?php if (isset($content['field_os2intra_image'])): ?>
          <!-- Begin - image -->
          <div class="os2-user-teaser-image">
            <?php print render($content['field_os2intra_image']); ?>
          </div>
          <!-- End - image -->
        <?php endif; ?>

      </div>
      <div class="table-cell">

        <!-- Begin - full name -->
        <?php if (isset($user_full_name)): ?>
          <?php print l($user_full_name, 'user/' . $id); ?>
        <?php endif ?>
        <!-- End - full name -->

        <?php if (isset($content['field_os2intra_user_titles'])): ?>
          <!-- Begin - job title -->
          <div class="os2-user-teaser-job-title">
            <?php print render($content['field_os2intra_user_titles']); ?>
          </div>
          <!-- End - job title -->
        <?php endif; ?>

      </div>
    </div>
  </div>

</div>
<!-- End - teaser -->
