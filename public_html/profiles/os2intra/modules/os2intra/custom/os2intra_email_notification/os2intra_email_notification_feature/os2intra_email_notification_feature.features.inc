<?php
/**
 * @file
 * os2intra_email_notification_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_email_notification_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function os2intra_email_notification_feature_default_message_type() {
  $items = array();
  $items['os2intra_msgtp_afdelingsindhold'] = entity_import('message_type', '{
    "name" : "os2intra_msgtp_afdelingsindhold",
    "description" : "Intranet Notificering Afdelingsindhold",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "da",
    "arguments" : null,
    "message_text" : { "da" : [
        {
          "value" : "[Nyt indhold] [message:field-target-nodes:content-type] i [message:field-os2intra-afdindh-afdeling:title]: [message:field-target-nodes:title]\\r\\n",
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003E[Nyt indhold] [message:field-target-nodes:content-type] i [message:field-os2intra-afdindh-afdeling:title]: [message:field-target-nodes:title]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003ETil [message:user:name],\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:field-target-nodes:content-type] - [message:field-target-nodes:author] - [message:field-target-nodes:created]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[site:name] \\/ [message:field-os2intra-afdindh-afdeling:title] - [message:field-os2intra-afdindh-afdeling:url]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Ch2 class=\\u0022h2\\u0022\\u003E[message:field-target-nodes:title]\\u003C\\/h2\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:field-target-nodes:body]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\r\\nLink: [message:field-target-nodes:url]\\u003C\\/p\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\n\\u003Cp\\u003E\\u003Ci\\u003ESkift indstillinger for notifikationer via email her: [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/i\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "emails",
          "safe_value" : "\\u003Cp\\u003ETil [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:content-type] - [message:field-target-nodes:author] - [message:field-target-nodes:created]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E[site:name] \\/ [message:field-os2intra-afdindh-afdeling:title] - [message:field-os2intra-afdindh-afdeling:url]\\u003C\\/p\\u003E\\n\\u003Ch2 class=\\u0022h2\\u0022\\u003E[message:field-target-nodes:title]\\u003C\\/h2\\u003E\\n\\u003Cp\\u003E[message:field-target-nodes:body]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\nLink: [message:field-target-nodes:url]\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Ci\\u003ESkift indstillinger for notifikationer via email her: [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/i\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
