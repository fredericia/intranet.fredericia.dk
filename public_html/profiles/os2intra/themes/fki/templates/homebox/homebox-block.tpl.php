<?php

// As we have no preprocess function for each homebox block, we add PHP here.
$box_class = strtolower('fki-box-homebox-' . drupal_clean_css_identifier($block->subject));
$newest_content_box = $box_class == 'fki-box-homebox-nyeste-indhold-fra-dine-grupper' ? true : false;

?>

<!-- homebox-block.tpl.php -->
<!-- Begin - homebox block -->
<div id="homebox-block-<?php print $block->key; ?>" class="<?php print $block->homebox_classes ?> <?php print $box_class; ?> <?php if ( ! $newest_content_box) print  'fki-box fki-box-homebox'; ?> block block-<?php print $block->module ?>">

  <?php if ( ! $newest_content_box): ?>
  <div class="fki-box-heading portlet-header">

    <h4 class="fki-box-heading-title">

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

  <div class="fki-box-body">

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

    <?php if (is_string($block->content)){ print $block->content; } else { print drupal_render($block->content); } ?>
  </div>

</div>
<!-- End - homebox block -->
