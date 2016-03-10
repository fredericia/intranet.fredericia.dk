<?php
/**
 * @file
 * rules_new_comment.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_new_comment_default_rules_configuration() {
  $items = array();
  $items['rules_new_comment'] = entity_import('rules_config', '{ "rules_new_comment" : {
      "LABEL" : "Ny kommentar",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "comment:node:author:mail" ],
            "subject" : "Ny kommentar til [comment:node] p\\u00e5 [site:name]",
            "message" : "Hej,\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nDer er en ny kommentar til\\u003Cbr \\/\\u003E\\r\\n[comment:node] p\\u00e5\\u003Cbr \\/\\u003E\\r\\n[site:name], klik og se mere: [comment:url]\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nMed venlig hilsen\\u003Cbr \\/\\u003E\\r\\n[site:name]\\u003Cbr \\/\\u003E\\r\\n[site:url]\\u003Cbr \\/\\u003E",
            "from" : "[site:mail]",
            "language" : "da"
          }
        },
        { "mail" : {
            "to" : [ "comment:parent:mail" ],
            "subject" : "Svar p\\u00e5 din kommentar til [comment:node] fra [comment:name] p\\u00e5 [site:name]",
            "message" : "Hej,\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nDer er en ny kommentar til\\u003Cbr \\/\\u003E\\r\\n[comment:node] p\\u00e5 \\u003Cbr \\/\\u003E\\r\\n[site:name], klik og se mere: [comment:url]\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nMed venlig hilsen\\u003Cbr \\/\\u003E\\r\\n[site:name]\\u003Cbr \\/\\u003E\\r\\n[site:url]\\u003Cbr \\/\\u003E",
            "from" : "[site:mail]",
            "language" : "da"
          }
        }
      ]
    }
  }');
  return $items;
}
