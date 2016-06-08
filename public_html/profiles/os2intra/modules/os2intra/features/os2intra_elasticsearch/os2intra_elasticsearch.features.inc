<?php
/**
 * @file
 * os2intra_elasticsearch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_elasticsearch_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elasticsearch_connector" && $api == "elasticsearch_connector_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2intra_elasticsearch_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function os2intra_elasticsearch_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "elasticsearch_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "index_name" : {
        "index" : "intranet_search_index",
        "cluster_id" : "elasticsearch_cluster"
      },
      "collect_index_statistics" : 1,
      "log_only_not_found" : 0,
      "index_statistics_ttl" : "365d",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2intra_paragraph:field_os2intra_paragraph_title" : { "type" : "list\\u003Ctext\\u003E" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['default_user_index'] = entity_import('search_api_index', '{
    "name" : "Default user index",
    "machine_name" : "default_user_index",
    "description" : null,
    "server" : "elasticsearch_server",
    "item_type" : "user",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "index_name" : {
        "index" : "intranet_search_index",
        "cluster_id" : "elasticsearch_cluster"
      },
      "collect_index_statistics" : 0,
      "log_only_not_found" : 0,
      "index_statistics_ttl" : "365d",
      "fields" : {
        "mail" : { "type" : "text" },
        "name" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function os2intra_elasticsearch_default_search_api_server() {
  $items = array();
  $items['elasticsearch_server'] = entity_import('search_api_server', '{
    "name" : "Elasticsearch Server",
    "machine_name" : "elasticsearch_server",
    "description" : "",
    "class" : "search_api_elasticsearch_connector",
    "options" : { "cluster" : "elasticsearch_cluster", "facet_limit" : "10" },
    "enabled" : "1"
  }');
  return $items;
}
