<?php
/**
 * @file
 * os2intra_organisation.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function os2intra_organisation_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'os2intra_organisation';
  $feeds_importer->config = array(
    'name' => 'OS2Intra organisation',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml, xls, xlsx',
        'direct' => 0,
        'directory' => 'public://os2intra-organisation',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExcelParser',
      'config' => array(
        'all_worksheets' => 0,
        'max_rows' => '5000',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'id',
            'target' => 'field_os2intra_department_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'parentOrgUnit',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'longName',
            'target' => 'name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'shortName',
            'target' => 'field_os2intra_shortname',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'os2intra_organisation_tax',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['os2intra_organisation'] = $feeds_importer;

  return $export;
}
