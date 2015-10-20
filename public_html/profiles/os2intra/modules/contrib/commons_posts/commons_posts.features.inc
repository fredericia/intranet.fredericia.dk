<?php
/**
 * @file
 * commons_posts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commons_posts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function commons_posts_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function commons_posts_default_message_type() {
  $items = array();
  $items['commons_posts_post_created'] = entity_import('message_type', '{
    "name" : "commons_posts_post_created",
    "description" : "Commons Posts - Post Created",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 1, "quota" : "", "days" : "" }
    },
    "language" : "da",
    "arguments" : null,
    "message_text" : {
      "da" : [
        {
          "value" : "[message:user:picture:35x35]",
          "format" : "filtered_html",
          "safe_value" : "[message:user:picture:35x35]"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E oprettede\\u0026nbsp;\\u003Ca href=\\u0022[message:field-target-nodes:0:url]\\u0022\\u003E[message:field-target-nodes:0:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E oprettede\\u0026nbsp;\\u003Ca href=\\u0022[message:field-target-nodes:0:url]\\u0022\\u003E[message:field-target-nodes:0:title]\\u003C\\/a\\u003E"
        },
        {
          "value" : "[commons-groups:in-groups-text]",
          "format" : "full_html",
          "safe_value" : "[commons-groups:in-groups-text]"
        }
      ],
      "en" : [
        {
          "value" : "[message:user:picture:35x35]",
          "format" : "filtered_html",
          "safe_value" : "[message:user:picture:35x35]"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E oprettede\\u0026nbsp;\\u003Ca href=\\u0022[message:field-target-nodes:0:url]\\u0022\\u003E[message:field-target-nodes:0:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E oprettede\\u0026nbsp;\\u003Ca href=\\u0022[message:field-target-nodes:0:url]\\u0022\\u003E[message:field-target-nodes:0:title]\\u003C\\/a\\u003E"
        },
        {
          "value" : "[commons-groups:in-groups-text]",
          "format" : "full_html",
          "safe_value" : "[commons-groups:in-groups-text]"
        }
      ],
      "und" : [
        {
          "value" : "[message:user:picture:35x35]",
          "format" : "filtered_html",
          "safe_value" : "[message:user:picture:35x35]"
        },
        {
          "value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E oprettede\\u0026nbsp;\\u003Ca href=\\u0022[message:field-target-nodes:0:url]\\u0022\\u003E[message:field-target-nodes:0:title]\\u003C\\/a\\u003E",
          "format" : "full_html",
          "safe_value" : "\\u003Ca href=\\u0022[message:user:url:absolute]\\u0022\\u003E[message:user:name]\\u003C\\/a\\u003E oprettede\\u0026nbsp;\\u003Ca href=\\u0022[message:field-target-nodes:0:url]\\u0022\\u003E[message:field-target-nodes:0:title]\\u003C\\/a\\u003E"
        },
        {
          "value" : "[commons-groups:in-groups-text]",
          "format" : "full_html",
          "safe_value" : "[commons-groups:in-groups-text]"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function commons_posts_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Indlæg'),
      'base' => 'node_content',
      'description' => t('Nyheder og informationer som er relateret til grupper.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
