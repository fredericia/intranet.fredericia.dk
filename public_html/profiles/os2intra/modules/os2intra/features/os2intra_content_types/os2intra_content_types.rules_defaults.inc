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
  $items['rules_koncernnyhed'] = entity_import('rules_config', '{ "rules_koncernnyhed" : {
    "LABEL" : "Koncern nyheder",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "rules", "mimemail" ],
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
      { "mimemail" : {
          "key" : "nid-[node:nid]-u-[site:current-user]-d-[site:current-date]",
          "to" : "kommunikation@fredericia.dk",
          "from_name" : "Intranet Beskeder",
          "from_mail" : "intrabeskeder@fredericia.dk",
          "subject" : "Der er nyt forfremmet indhold ([node:author]: [node:title])",
          "body" : "Der er nyt forfremmet indhold af [node:author] - [node:created] - [node:status]\r\n\r\nH\u00e5ndter indholdet her:\r\n[site:url]\/admin\/workbench\/koncernnyheder\r\n\r\n\u003Ch2\u003E[node:title]\u003C\/h2\u003E\r\n\u003Ci\u003E[node:url]\u003C\/i\u003E\r\n\r\n------\r\n\u003Ch3\u003E[node:og-group-ref]\u003C\/h3\u003E\r\n[node:body]\r\n-----\r\nSlet: [node:flag-papirkurv-link]\r\nKlon: [node:url]\/clone\/confirm",
          "plaintext" : "Der er nyt forfremmet indhold af [node:author] - [node:created] - [node:status]\r\n\r\nH\u00e5ndter indholdet her:\r\n[site:url]\/admin\/workbench\/koncernnyheder\r\n\r\nTitel: [node:title]\r\nUrl: [node:url]\r\n\r\n------\r\nGruppe\/afdeling: [node:og-group-ref]\r\n\r\n[node:body]\r\n-----\r\nSlet: [node:flag-papirkurv-link]\r\nKlon: [node:url]\/clone\/confirm",
          "language" : [ "" ]
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


