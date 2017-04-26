<?php

/**
 * @file
 * Custom theme implementation for entity.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if ($content['os2intra_bi_plugin_logo']): ?>
    <?php print render($content['os2intra_bi_plugin_logo']); ?>
  <?php endif; ?>
  <div class="entity-os2intra-bi-inner">
    <div class="content"<?php print $content_attributes; ?>>
      <?php
        hide($content['description']);
        hide($content['os2intra_bi_import_file_modified']);
        hide($content['os2intra_bi_plugin_logo']);
        hide($content['os2intra_bi_html_file']);
        print render($content);
      ?>
      <?php if(!empty($content['os2intra_bi_html_file']["#items"][0]['uri'])) :?>
        <div class="bi-import-html-file"> <?php print file_get_contents($content['os2intra_bi_html_file']["#items"][0]['uri']);?></div>
      <?php endif; ?>
      <div class="bi-import-file-modified">
        <?php print render($content['os2intra_bi_import_file_modified']); ?>
      </div>
    </div>
  </div>
</div>
