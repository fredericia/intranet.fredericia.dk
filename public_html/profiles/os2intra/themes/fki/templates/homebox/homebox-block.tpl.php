<?php

// As we have no preprocess function for each homebox block, we add PHP here.
$box_class = strtolower('os2-box-homebox-' . drupal_clean_css_identifier($block->subject));
$newest_content_box = $box_class == 'os2-box-homebox-os2intra-front-og-content' ? true : false;
$important_message_box = $box_class == 'os2-box-homebox-vigtige-meddelelser' ? true : false;

?>

<!-- homebox-block.tpl.php -->
<!-- Begin - homebox block -->
<div id="homebox-block-<?php print $block->key; ?>" class="<?php print $block->homebox_classes ?> <?php print $box_class; ?> <?php if ( ! $newest_content_box && ! $important_message_box) print  'os2-box os2-box-homebox'; ?> portlet-maximized block block-<?php print $block->module ?>">

  <?php if ( ! $newest_content_box && ! $important_message_box): ?>
  <div class="os2-box-heading portlet-header">

    <h4 class="os2-box-heading-title">

      <?php print $block->subject ?>

      <?php if ($block->closable): ?>
        <a class="portlet-icon portlet-close" title="<?php print t('Close'); ?>"></a>
      <?php endif; ?>

      <a class="portlet-icon portlet-minus" title="<?php print t('Collapse'); ?>"></a>

      <?php if ($page->settings['color'] || isset($block->edit_form)): ?>
        <a class="portlet-icon portlet-settings" title="<?php print t('Settings'); ?>"></a>
      <?php endif; ?>

    </h4>

  </div>
  <?php endif; ?>

  <div class="os2-box-body">

    <div class="portlet-config">
      <?php if ($page->settings['color']): ?>
        <div class="clearfix"><div class="homebox-colors">
            <span class="homebox-color-message"><?php print t('Select a color') . ':'; ?></span>
            <?php for ($i=0; $i < HOMEBOX_NUMBER_OF_COLOURS; $i++): ?>
              <span class="homebox-color-selector" style="background-color: <?php print $page->settings['colors'][$i] ?>;">&nbsp;</span>
            <?php endfor ?>
          </div></div>
      <?php endif; ?>
      <?php if (isset($block->edit_form)): print $block->edit_form; endif; ?>
    </div>

    <div class="portlet-content">
      <?php if (is_string($block->content)){ print $block->content; } else { print drupal_render($block->content); } ?>
    </div>
  </div>

</div>
<!-- End - homebox block -->
