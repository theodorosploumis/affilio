<?php
/**
 * @file
 * affilio_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function affilio_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'linkwise';
  $feeds_importer->config = array(
    'name' => 'Linkwise',
    'description' => 'Import Products from Linkwi.se affiliate network with XML file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'xml html htm',
        'direct' => 1,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:16' => 'site_url',
          'xpathparser:0' => 'tracking_url',
          'xpathparser:1' => 'product_name',
          'xpathparser:2' => 'brand_name',
          'xpathparser:4' => 'description',
          'xpathparser:5' => 'program_name | ../@name',
          'xpathparser:6' => 'image_url',
          'xpathparser:7' => 'image_url',
          'xpathparser:8' => 'in_stock',
          'xpathparser:17' => 'currency',
          'xpathparser:9' => 'full_price',
          'xpathparser:10' => 'price',
          'xpathparser:11' => 'discount',
          'xpathparser:12' => 'size',
          'xpathparser:13' => 'colour',
          'xpathparser:14' => '.',
          'xpathparser:15' => 'category',
        ),
        'rawXML' => array(
          'xpathparser:16' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:17' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
        ),
        'context' => '//product',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:16' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:17' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:16',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_tracking_url',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_brand',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_description',
            'format' => 'html',
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_shop',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_image_url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_images:uri',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_in_stock',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_currency',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_price_full',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_price',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_discount',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_size',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          14 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_colour',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          15 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_xml_source',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_unassigned_category',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'product',
        'update_non_existent' => 'unpublish',
      ),
    ),
    'content_type' => 'affiliate_source',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 1,
  );
  $export['linkwise'] = $feeds_importer;

  return $export;
}
