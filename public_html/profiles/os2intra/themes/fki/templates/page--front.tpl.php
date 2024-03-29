<!-- Begin - outer wrapper -->
<div class="outer-wrapper">

  <!-- Begin - sidebar left -->
  <div class="sidebar sidebar-left">

    <!-- Begin - inner wrapper -->
    <div class="sidebar-inner-wrapper">


      <!-- Begin - logo -->
      <div class="sidebar-logo">
        <a href="<?php print $front_page; ?>" class="sidebar-logo-link">
          <img src="<?php print $path_img . '/logo-sidebar-wide-new.png'; ?>" class="sidebar-logo-image sidebar-logo-image-wide" alt="<?php print $site_name . t(' logo'); ?>" />
          <img src="<?php print $path_img . '/logo-sidebar-narrow-new.png'; ?>" class="sidebar-logo-image sidebar-logo-image-narrow" alt="<?php print $site_name . t(' logo'); ?>" />
        </a>
      </div>
      <!-- End - logo -->

      <?php if (isset($sidebar_primary)): ?>
        <!-- Begin - navigation -->
        <?php print render($sidebar_primary); ?>
        <!-- End - navigation -->
      <?php endif; ?>

      <div class="visible-xs">

        <?php if (isset($sidebar_secondary)): ?>
          <!-- Begin - navigation -->
          <?php print render($sidebar_secondary); ?>
          <!-- End - navigation -->
        <?php endif; ?>

      </div>

      <!-- Dine favoritter / Favorites -->

      <?php if (user_is_logged_in()): ?>

      <div class="favorites-wrapper">
        <a class="favorites-link" href="/content/dine-favoritter"><i class="fa fa-heart" aria-hidden="true"></i>Dine favoritter</a>
      </div>

      <?php endif; ?>

    </div>
    <!-- End - inner wrapper -->

  </div>
  <!-- End - sidebar left -->

  <!-- Begin - inner wrapper -->
  <div class="inner-wrapper" role="document">

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
        <img src="<?php print $path_img . '/logo-simple-navigation-new.png'; ?>" class="simple-navigation-logo-image" alt="<?php print t('intranet.fredericia.dk logo'); ?>" />
      </a>
      <!-- End - logo -->

    </nav>
    <!-- End - simple navigation -->

    <?php
    // Get the file ID from theme settings
    $file_id = theme_get_setting('fki_image');

    // Load the file object from the file ID
    $file = file_load($file_id);

    // Create the image URL from the file URI
    $image_url = file_create_url($file->uri);
    ?>

    <div class="banner-outer">
      <div class="banner-inner" style="background-image: url('<?php print $image_url; ?>')"></div>
    </div>

    <!-- Begin - content -->
    <div class="content">
      <div class="container container-fluid-lg-only container-fluid-md-only">

        <?php if (user_is_logged_in()): ?>
          <?php if (isset($find_colleague_block)): ?>
            <!-- Begin - find colleague -->
            <div class="search-btn-wrapper">
              <a href="/search/node" class="search-btn">
                Søg <i class="fa fa-search"></i>
              </a>
            </div>
            <div class="popover-button popover-button-find-colleague">
              <a href="#" class="popover-button-toggle"><?php print t('Find colleague'); ?></a>

              <div class="popover-button-content">
                <?php print render($find_colleague_block['content']); ?>
              </div>
            </div>
          <div class="user-group-btn-wrapper" style="right: -52px;">
            <button class="user-group-btn" style="line-height: 1.2;">Min afdeling</button>
            <?php if (isset($main_navigation_secondary)): ?>
            <div class="usergroup-dropdown" style="display: none;">
              <?php print render($main_navigation_secondary); ?>
            </div>
            <?php endif; ?>
          </div>
            <div class="my-profile-btn-wrapper">
              <a href="/user" class="my-profile-btn">Min profil</a>
            </div>
            <!-- End - find colleague -->
          <?php endif ?>
        <?php endif ?>

        <?php print $messages; ?>

        <?php if (user_is_logged_in()): ?>

<!--        <nav class="main-navigation-wrapper">-->
<!--          <section class="main-navigation-bar">-->
<!--            <div class="row">-->
<!---->
<!--              -->
<!--              <div class="col-md-4">-->
<!--                <div class="main-navigation-form">-->
<!--                  --><?php //print render($main_navigation_search); ?>
<!--                </div>-->
<!--              </div>-->
<!--              -->
<!--              --><?php //if (isset($main_navigation_secondary)): ?>
<!--                <div class="col-md-8 main-navigation-right">-->
<!---->
<!--            -->
<!--                  --><?php //print render($main_navigation_secondary); ?>
<!--                  -->
<!---->
<!--                </div>-->
<!--              --><?php //endif; ?>
<!--              -->
<!---->
<!--            </div>-->
<!--          </section>-->
<!--        </nav>-->
        <!-- End - main navigation -->
        <?php endif; ?>

        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>

        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>

        <?php if (!empty($breadcrumb)): ?>
          <!-- Begin - breadcrumb -->
          <section class="os2-breadcrumb-container">
            <div class="row">
              <div class="col-xs-12">
                <?php print $breadcrumb; ?>
              </div>
            </div>
          </section>
          <!-- End - breadcrumb -->
        <?php endif;?>

        <?php if (!empty($tabs_primary)): ?>
          <!-- Begin - tabs primary -->
          <div class="os2-tabs-container os2-tabs-variant-default">
            <?php print render($tabs_primary); ?>
          </div>
          <!-- End - tabs primary -->
        <?php endif; ?>

        <?php if (!empty($tabs_secondary)): ?>
          <!-- Begin - tabs secondary -->
          <div class="os2-tabs-container os2-tabs-variant-tertiary">
            <?php print render($tabs_secondary); ?>
          </div>
          <!-- End - tabs secondary -->
        <?php endif; ?>

        <a id="main-content"></a>
        <?php if (user_is_logged_in()): ?>

        <?php print render($page['content']); ?>

        <?php else: ?>

        <div class="os2-box">
          <div class="os2-box-body">
            <?php print render($page['content']); ?>
          </div>
        </div>
        <?php endif; ?>


      </div>
    </div>
    <!-- End - content -->

  </div>
  <!-- End - inner wrapper -->

</div>
<!-- End - outer wrapper -->

