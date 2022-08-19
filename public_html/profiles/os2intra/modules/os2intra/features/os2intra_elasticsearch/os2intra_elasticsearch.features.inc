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
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "1",
            "bundles" : {
              "os2intra_message_notification" : "os2intra_message_notification",
              "os2web_base_selfservice_link" : "os2web_base_selfservice_link",
              "spotbox" : "spotbox"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "body:value" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_title" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_title" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "body:value" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_title" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_title" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_title" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "excerpt_fragments" : "3",
            "concatenator" : "...",
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_prefix_search" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : {
              "title" : true,
              "body:value" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_title" : true,
              "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : true
            }
          }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "field_os2intra_base_structure:name" : { "type" : "text", "boost" : "0.1" },
        "field_os2intra_base_structure:parent:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.1" },
        "field_os2intra_base_vejledning:field_os2intra_itvejledninger_4:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2intra_base_vejledning:field_os2intra_paragraph_text:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2intra_base_vejledning:field_os2intra_paragraph_title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2intra_organisation" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_os2intra_paragraph:field_os2intra_paragraph_text:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2intra_paragraph:field_os2intra_paragraph_title" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_os2intra_physical_location:name" : { "type" : "text", "boost" : "0.1" },
        "field_os2web_base_field_edi_tags:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_os2web_base_field_intro" : { "type" : "text", "boost" : "2.0" },
        "nid" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
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
  $items['intranet_multi_index'] = entity_import('search_api_index', '{
    "name" : "Intranet multi-index",
    "machine_name" : "intranet_multi_index",
    "description" : null,
    "server" : "elasticsearch_server",
    "item_type" : "multiple",
    "options" : {
      "datasource" : { "types" : [ "node", "taxonomy_term" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "index_name" : {
        "index" : "intranet_multi_index",
        "cluster_id" : "elasticsearch_cluster"
      },
      "collect_index_statistics" : 0,
      "log_only_not_found" : 0,
      "index_statistics_ttl" : "365d",
      "fields" : {
        "node" : { "type" : "integer", "entity_type" : "node" },
        "node:author" : { "type" : "integer", "entity_type" : "user" },
        "node:body:value" : { "type" : "text" },
        "node:changed" : { "type" : "date" },
        "node:comment_count" : { "type" : "integer" },
        "node:created" : { "type" : "date" },
        "node:field_os2intra_base_structure:name" : { "type" : "text", "boost" : "0.1" },
        "node:field_os2intra_base_structure:parent:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.1" },
        "node:field_os2intra_base_vejledning:field_os2intra_itvejledninger_4:value" : { "type" : "list\\u003Ctext\\u003E" },
        "node:field_os2intra_base_vejledning:field_os2intra_paragraph_text:value" : { "type" : "list\\u003Ctext\\u003E" },
        "node:field_os2intra_base_vejledning:field_os2intra_paragraph_title" : { "type" : "list\\u003Ctext\\u003E" },
        "node:field_os2intra_organisation" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "node:field_os2intra_paragraph:field_os2intra_paragraph_text:value" : { "type" : "list\\u003Ctext\\u003E" },
        "node:field_os2intra_paragraph:field_os2intra_paragraph_title" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "node:field_os2intra_physical_location:name" : { "type" : "text", "boost" : "0.1" },
        "node:field_os2web_base_field_edi_tags:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "node:field_os2web_base_field_intro" : { "type" : "text", "boost" : "2.0" },
        "node:nid" : { "type" : "integer" },
        "node:promote" : { "type" : "boolean" },
        "node:status" : { "type" : "integer" },
        "node:sticky" : { "type" : "boolean" },
        "node:title" : { "type" : "text", "boost" : "5.0" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "taxonomy_term" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "taxonomy_term:description" : { "type" : "text" },
        "taxonomy_term:name" : { "type" : "text", "boost" : "5.0" },
        "taxonomy_term:tid" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "1",
            "bundles" : {
              "node:it_vejledning" : "node:it_vejledning",
              "node:os2web_base_selfservice_link" : "node:os2web_base_selfservice_link",
              "node:spotbox" : "node:spotbox"
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_elasticsearch_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "excerpt_fragments" : "3",
            "concatenator" : "...",
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_prefix_search" : { "status" : 0, "weight" : "35", "settings" : { "fields" : [] } },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : [], "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
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
