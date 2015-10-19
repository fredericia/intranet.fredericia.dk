<!-- Begin - outer wrapper -->
<div class="outer-wrapper">

  <!-- Begin - sidebar left -->
  <div class="sidebar sidebar-left">

    <!-- Begin - logo -->
    <div class="sidebar-logo">
      <a href="<?php print $front_page; ?>" class="sidebar-logo-link">
        <img src="<?php print $path_img . '/logo.png'; ?>" class="sidebar-logo-image" alt="<?php print t('intranet.fredericia.dk logo'); ?>" />
      </a>
    </div>
    <!-- End - logo -->

    <?php if (isset($sidebar_secondary_navigation)): ?>
      <!-- Begin - heading -->
      <div class="sidebar-heading">
        <p class="sidebar-title"><?php print t('Din bruger'); ?></p>
      </div>
      <!-- End - heading -->

      <!-- Begin - navigation -->
      <?php print render($sidebar_secondary_navigation); ?>
      <!-- End - navigation -->
    <?php endif; ?>

    <?php if (isset($sidebar_primary_navigation)): ?>
      <!-- Begin - heading -->
      <div class="sidebar-heading">
        <p class="sidebar-title"><?php print t('Navigation'); ?></p>
      </div>
      <!-- End - heading -->

      <!-- Begin - navigation -->
      <?php print render($sidebar_primary_navigation); ?>
      <!-- End - navigation -->
    <?php endif; ?>

    <?php if ($theme_settings['layout']['sidebar']['show_social_links']): ?>
      <!-- Begin - heading -->
      <div class="sidebar-heading">
        <p class="sidebar-title">Social links</p>
      </div>
      <!-- End - heading -->

      <!-- Begin - social links -->
      <div class="sidebar-social-links">

        <?php if ($theme_settings['social_links']['facebook']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['facebook']['url']; ?>" target="_blank" class="social-icon social-icon-facebook" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['facebook']['tooltip']; ?>"></a></li>
        <?php endif; ?>

        <?php if ($theme_settings['social_links']['twitter']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['twitter']['url']; ?>" target="_blank" class="social-icon social-icon-twitter" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['twitter']['tooltip']; ?>"></a></li>
        <?php endif; ?>

        <?php if ($theme_settings['social_links']['googleplus']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['googleplus']['url']; ?>" target="_blank" class="social-icon social-icon-google-plus" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['googleplus']['tooltip']; ?>"></a></li>
        <?php endif; ?>

        <?php if ($theme_settings['social_links']['linkedin']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['linkedin']['url']; ?>" target="_blank" class="social-icon social-icon-linkedin" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['linkedin']['tooltip']; ?>"></a></li>
        <?php endif; ?>

        <?php if ($theme_settings['social_links']['pinterest']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['pinterest']['url']; ?>" target="_blank" class="social-icon social-icon-pinterest" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['pinterest']['tooltip']; ?>"></a></li>
        <?php endif; ?>

        <?php if ($theme_settings['social_links']['instagram']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['instagram']['url']; ?>" target="_blank" class="social-icon social-icon-instagram" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['instagram']['tooltip']; ?>"></a></li>
        <?php endif; ?>

        <?php if ($theme_settings['social_links']['youtube']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['youtube']['url']; ?>" target="_blank" class="social-icon social-icon-youtube" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['youtube']['tooltip']; ?>"></a></li>
        <?php endif; ?>

        <?php if ($theme_settings['social_links']['vimeo']['active']): ?>
          <li><a href="<?php print $theme_settings['social_links']['vimeo']['url']; ?>" target="_blank" class="social-icon social-icon-vimeo" data-toggle="tooltip" data-placement="top" title="<?php print $theme_settings['social_links']['vimeo']['tooltip']; ?>"></a></li>
        <?php endif; ?>

      </div>
      <!-- End - social links -->
    <?php endif; ?>

  </div>
  <!-- End - sidebar left -->

  <!-- Begin - inner wrapper -->
  <div class="inner-wrapper" role="document">

    <!-- Begin - main navigation -->
    <nav class="main-navigation-wrapper">
      <section class="main-navigation-bar">
        <div class="container">
          <div class="row">

            <!-- Begin - content -->
            <div class="col-md-8 main-navigation-bar-content">

              <?php if (isset($primary_navigation)): ?>
                <!-- Begin - navigation -->
                <?php print render($primary_navigation); ?>
                <!-- End - navigation -->
              <?php endif; ?>

            </div>
            <!-- End - content -->

            <!-- Begin - content -->
            <div class="col-md-4 main-navigation-bar-content">

              <?php if (isset($secondary_navigation)): ?>
                <!-- Begin - navigation -->
                <?php print render($secondary_navigation); ?>
                <!-- End - navigation -->
              <?php endif; ?>

            </div>
            <!-- End - content -->

          </div>
        </div>
      </section>
    </nav>
    <!-- End - main navigation -->

    <!-- Begin - simple navigation -->
    <nav class="simple-navigation">

      <!-- Begin - button list -->
      <ul class="simple-navigation-list simple-navigation-list-left">

        <!-- Begin - button -->
        <li class="simple-navigation-button">
          <a href="#" data-sidebar-toggle="left">
            <span class="fa icon fa-bars"></span>
          </a>
        </li>
        <!-- End - button -->

      </ul>
      <!-- End - button list -->

      <!-- Begin - logo -->
      <a href="<?php print $front_page; ?>" class="simple-navigation-logo-link">
        <img src="<?php print $path_img . '/logo.png'; ?>" class="simple-navigation-logo-image" alt="<?php print t('intranet.fredericia.dk logo'); ?>" />
      </a>
      <!-- End - logo -->

    </nav>
    <!-- End - simple navigation -->

    <!-- Begin - page intro -->
    <section class="fki-page-intro">
      <div class="container">
        <div class="row">

          <div class="fki-page-intro-title-container col-sm-6 text-center-xs-only">
            <?php print render($title_prefix); ?>
            <?php if (!empty($title)): ?>
              <h1 class="fki-page-intro-title"><?php print ucfirst(strtolower($title)); ?></h1>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
          </div>

          <div class="fki-page-intro-breadcrumb-container col-sm-6 text-center-xs-only text-right">
            <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
          </div>

        </div>
      </div>
    </section>
    <!-- End - page intro -->

    <!-- Begin - content -->
    <div class="content">
      <div class="container">

        <?php print $messages; ?>

        <?php if (!empty($tabs)): ?>
          <!-- Begin - tabs -->
          <div class="content-tabs-container">
            <?php print render($tabs); ?>
          </div>
          <!-- End - tabs -->
        <?php endif; ?>

        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>

        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>

        <a id="main-content"></a>
        <?php print render($page['content']); ?>
      </div>
    </div>
    <!-- End - content -->

  </div>
  <!-- End - inner wrapper -->

</div>
<!-- End - outer wrapper -->
