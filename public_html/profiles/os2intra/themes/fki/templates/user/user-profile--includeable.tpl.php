<!-- user-profile--includeable.tpl.php -->
<!-- Begin - teaser -->
<div id="user-profile-<?php print $user->uid; ?>" class="<?php print $classes; ?> os2-user-includeable"<?php print $attributes; ?>>

  <!-- Begin - full name -->
  <?php if (isset($user_full_name)): ?>
    <?php print l($user_full_name, 'user/' . $id); ?>
  <?php endif ?>
  <!-- End - full name -->

</div>
<!-- End - teaser -->
