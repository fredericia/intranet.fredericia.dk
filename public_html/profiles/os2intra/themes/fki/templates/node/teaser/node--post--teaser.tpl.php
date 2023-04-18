<?php if ($view_mode == 'teaser'): ?>
  <!-- node--post--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-box os2-box-small-spacing"<?php print $attributes; ?>>
    <div class="table">
      <div class="table-row">

        <?php hide($content['links']); ?>

        <?php if (isset($content['field_os2intra_image'])): ?>
          <div class="table-cell os2-node-teaser-image-container">

            <!-- Begin - image -->
            <div class="os2-node-teaser-image">
              <?php print render($content['field_os2intra_image']); ?>
            </div>
            <!-- End - image -->

          </div>
        <?php endif; ?>

        <!--        --><?php //if (isset($content['field_os2intra_images'])): ?>
        <!--          <div class="table-cell os2-node-teaser-image-container">-->
        <!---->
        <!--            Begin - images -->
        <!--            <div class="os2-node-teaser-image">-->
        <!--              --><?php //print render($content['field_os2intra_images']); ?>
        <!--            </div>-->
        <!--            End - images ---->
        <!--          </div>-->
        <!--        --><?php //endif; ?>

        <?php if (isset($content['field_os2intra_images'])): ?>
          <div class="table-cell os2-node-teaser-image-container">
            <!-- Begin - images -->
            <div class="os2-node-teaser-image">
              <?php
              $first_image_item = field_get_items('node', $node, 'field_os2intra_images');
              if (!empty($first_image_item)) {
                print render($content['field_os2intra_images'][0]);
              }
              ?>
            </div>
            <!-- End - images -->
          </div>
        <?php endif; ?>

        <div class="table-cell">

          <?php if (isset($author_full_name) and $updated_at_short): ?>
            <!-- Begin - entity info -->
            <ul class="os2-node-teaser-info os2-entity-info">
              <li><?php print l($author_full_name, 'user/' . $node->uid); ?></li>
              <li><span><?php print t('Sidst opdateret d.'); ?> <?php print $updated_at_short; ?></span></li>
            </ul>
            <!-- End - entity info -->
          <?php endif ?>

          <!-- Begin - heading -->
          <div class="os2-node-teaser-heading">
            <h3 class="os2-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
          </div>

          <!-- End - heading -->

          <!-- Begin - body -->
          <div class="os2-node-teaser-body">
            <?php if (isset($content['body'])): ?>
              <!-- Begin - body -->
              <div class="os2-node-teaser-body-content">
                <?php print render($content['body']); ?>
              </div>
              <!-- End - body -->
            <?php endif; ?>

            <?php print render($content['og_group_ref']); ?>

          </div>
          <!-- End - body -->

        </div>
      </div>
    </div>

    <!-- Begin - footer -->
    <div class="os2-node-teaser-footer os2-footer-elements">

      <!-- Begin - number of hits -->
      <span class="os2-footer-element">
        <span class="icon fa fa-eye"></span>
        <?php print $number_of_hits; ?>
      </span>
      <!-- End - number of hits -->

      <!-- Begin - number of comments -->
      <span class="os2-footer-element">
        <span class="icon fa fa-comment"></span>
        <?php print $number_of_comments; ?>
      </span>
      <!-- End - number of comments -->

      <!-- Begin - read more -->
      <span class="os2-footer-element">
        <?php print render($content['links']['node']); ?>
      </span>
      <!-- End - read more -->

    </div>
    <!-- End - footer -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
