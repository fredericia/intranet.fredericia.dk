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
          "value" : "\\u003Cp\\u003ENew [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]\\u003C\\/p\\u003E\\r\\n",
          "format" : "indhold",
          "safe_value" : "\\u003Cp\\u003ENew [message:field-target-nodes:0:content-type] in [message:field-target-nodes:0:og-group-ref:0:title]: [message:field-target-nodes:0:title_field]\\u003C\\/p\\u003E"
        },
        {
          "value" : "\\u003Cp\\u003EHi [message:user:name],\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] \\u0026ldquo;[message:field-target-nodes:0:title_field]\\u0026rdquo; on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\r\\nPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\r\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EChange email notifications at [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E\\r\\n",
          "format" : "indhold",
          "safe_value" : "\\u003Cp\\u003EHi [message:user:name],\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[message:field-target-nodes:0:author] created the [message:field-target-nodes:0:content-type] \\u0026ldquo;[message:field-target-nodes:0:title_field]\\u0026rdquo; on [site:name] [commons-groups:in-groups-text] on [message:field-target-nodes:0:created]:\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[message:field-target-nodes:0:body]\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E\\u003Cbr \\/\\u003E\\nPermalink: [message:field-target-nodes:0:url]\\u003Cbr \\/\\u003E\\nAdd a comment at [message:field-target-nodes:0:url]#comment-form\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003EChange email notifications at [site:url]user\\/[message:user:uid]\\/notification-settings\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  return $items;
}
