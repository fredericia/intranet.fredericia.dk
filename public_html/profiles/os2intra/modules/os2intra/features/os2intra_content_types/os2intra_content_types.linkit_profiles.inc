<?php
/**
 * @file
 * os2intra_content_types.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function os2intra_content_types_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'linkit_ckeditor';
  $linkit_profile->admin_title = 'Linkit CKeditor';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'indhold' => 0,
      'fuld_html' => 0,
      'kommentar' => 0,
      'plain_text' => 0,
    ),
    'search_plugins' => array(
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:webform_workflow_state' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_os2intra_org_group_unit' => 0,
        'comment_node_event' => 0,
        'comment_node_os2intra_canteen_menu' => 0,
        'comment_node_os2intra_group' => 0,
        'comment_node_it_vejledning' => 0,
        'comment_node_node_basket' => 0,
        'comment_node_post' => 0,
        'comment_node_os2intra_message_notification' => 0,
        'comment_node_os2intra_base_page' => 0,
        'comment_node_os2intra_referat' => 0,
        'comment_node_os2web_base_selfservice_link' => 0,
        'comment_node_webform' => 0,
        'comment_node_wiki' => 0,
        'comment_node_spotbox' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'os2intra_org_group_unit' => 'os2intra_org_group_unit',
        'event' => 'event',
        'os2intra_group' => 'os2intra_group',
        'it_vejledning' => 'it_vejledning',
        'post' => 'post',
        'os2intra_base_page' => 'os2intra_base_page',
        'os2intra_referat' => 'os2intra_referat',
        'wiki' => 'wiki',
        'os2intra_canteen_menu' => 0,
        'node_basket' => 0,
        'os2intra_message_notification' => 0,
        'os2web_base_selfservice_link' => 0,
        'webform' => 0,
        'spotbox' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'document' => 'document',
        'image' => 0,
        'video' => 0,
        'audio' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'download',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'os2web_base_tax_site_structure' => 'os2web_base_tax_site_structure',
        'os2web_taxonomies_tax_places' => 'os2web_taxonomies_tax_places',
        'os2intra_canteen' => 0,
        'topics' => 0,
        'os2web_base_tax_promoteto' => 0,
        'os2web_taxonomies_tax_comittee' => 0,
        'os2web_taxonomies_tax_editor_tag' => 0,
        'os2web_taxonomies_tax_kle' => 0,
        'os2web_taxonomies_tax_politics' => 0,
        'os2web_taxonomies_tax_portal_cat' => 0,
        'os2web_taxonomies_tax_user_pos' => 0,
        'tags' => 0,
        'os2intra_organisation_tax' => 0,
        'user_hobbies' => 0,
        'user_jobtitle' => 0,
        'user_skills' => 0,
        'indlaegstyper' => 0,
        'begivenhedstyper' => 0,
        'os2web_taxonomies_tax_org' => 0,
      ),
      'group_by_bundle' => 1,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:webform_workflow_state' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['linkit_ckeditor'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'linkit_field_node';
  $linkit_profile->admin_title = 'Linkit Field Node';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:webform_workflow_state' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_os2intra_org_group_unit' => 0,
        'comment_node_event' => 0,
        'comment_node_os2intra_canteen_menu' => 0,
        'comment_node_os2intra_group' => 0,
        'comment_node_it_vejledning' => 0,
        'comment_node_node_basket' => 0,
        'comment_node_post' => 0,
        'comment_node_os2intra_message_notification' => 0,
        'comment_node_os2intra_base_page' => 0,
        'comment_node_os2intra_referat' => 0,
        'comment_node_os2web_base_selfservice_link' => 0,
        'comment_node_webform' => 0,
        'comment_node_wiki' => 0,
        'comment_node_spotbox' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'os2intra_org_group_unit' => 'os2intra_org_group_unit',
        'event' => 'event',
        'os2intra_group' => 'os2intra_group',
        'it_vejledning' => 'it_vejledning',
        'post' => 'post',
        'os2intra_base_page' => 'os2intra_base_page',
        'os2intra_referat' => 'os2intra_referat',
        'webform' => 'webform',
        'wiki' => 'wiki',
        'os2intra_canteen_menu' => 0,
        'node_basket' => 0,
        'os2intra_message_notification' => 0,
        'os2web_base_selfservice_link' => 0,
        'spotbox' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'os2intra_canteen' => 0,
        'os2web_base_tax_site_structure' => 0,
        'topics' => 0,
        'os2web_base_tax_promoteto' => 0,
        'os2web_taxonomies_tax_comittee' => 0,
        'os2web_taxonomies_tax_editor_tag' => 0,
        'os2web_taxonomies_tax_kle' => 0,
        'os2web_taxonomies_tax_places' => 0,
        'os2web_taxonomies_tax_politics' => 0,
        'os2web_taxonomies_tax_portal_cat' => 0,
        'os2web_taxonomies_tax_user_pos' => 0,
        'tags' => 0,
        'os2intra_organisation_tax' => 0,
        'user_hobbies' => 0,
        'user_jobtitle' => 0,
        'user_skills' => 0,
        'indlaegstyper' => 0,
        'begivenhedstyper' => 0,
        'os2web_taxonomies_tax_org' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:webform_workflow_state' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'html_link',
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['linkit_field_node'] = $linkit_profile;

  return $export;
}
