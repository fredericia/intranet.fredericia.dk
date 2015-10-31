<?php
/**
 * @file
 * trash_can.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function trash_can_default_rules_configuration() {
  $items = array();
  $items['rules_add_to_trash_can'] = entity_import('rules_config', '{ "rules_add_to_trash_can" : {
      "LABEL" : "Add to trash can",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_papirkurv" : [] },
      "DO" : [ { "node_unpublish" : { "node" : [ "flagged-node" ] } } ]
    }
  }');
  $items['rules_restore_from_trash_can'] = entity_import('rules_config', '{ "rules_restore_from_trash_can" : {
      "LABEL" : "Restore from trash can",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_unflagged_papirkurv" : [] },
      "DO" : [ { "node_publish" : { "node" : [ "flagged-node" ] } } ]
    }
  }');
  return $items;
}
