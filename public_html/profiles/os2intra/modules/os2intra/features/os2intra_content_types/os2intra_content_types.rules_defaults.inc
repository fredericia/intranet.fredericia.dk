<?php
/**
 * @file
 * os2intra_content_types.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function os2intra_content_types_default_rules_configuration() {
  $items = array();
  $items['rules_nyt_til_faellesnyt'] = entity_import('rules_config', '{ "rules_nyt_til_faellesnyt" : {
      "LABEL" : "Nyt indl\\u00e6g til F\\u00e6llesnyt",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "print_mail" ],
      "ON" : { "node_insert--post" : { "bundle" : "post" } },
      "IF" : [
        { "entity_is_of_type" : {
            "entity" : [ "node:field-os2web-base-field-promote:0" ],
            "type" : "taxonomy_term"
          }
        },
        { "AND" : [] },
        { "NOT user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "7" : "7" } } } }
      ],
      "DO" : [
        { "print_mail_action_submit" : {
            "from" : "[site:mail]",
            "from_name" : "[site:name]",
            "to" : "fs+faellesnyt@bellcom.dk",
            "subject" : "[site:name] - nyt forfremmet indhold ([node:title])",
            "message" : "Der er nyt forfremmet indhold.\\r\\n\\r\\nH\\u00e5ndter indholdet her:\\r\\n[site:url]\\/admin\\/workbench\\/koncernnyheder\\r\\n\\r\\nIndholdets tekst:\\r\\n[node:body]",
            "node" : [ "node" ]
          }
        }
      ]
    }
  }');
  $items['rules_os2intra_flag_info_til_alle_godkendt'] = entity_import('rules_config', '{ "rules_os2intra_flag_info_til_alle_godkendt" : {
      "LABEL" : "Info til alle godkendt",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_flagged_os2intra_flag_info_til_alle" : [] },
      "DO" : []
    }
  }');
  return $items;
}
