<?php
/**
 * @file
 * affilio_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function affilio_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_10-find_replace';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:10';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ',',
    'replace' => '.',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['linkwise-xpathparser_10-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_11-php';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return _good_discount_value($field);',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Run _good_discount_value';
  $export['linkwise-xpathparser_11-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_12-php';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$replace = _replace_keywords($field, "replace_size");
return _good_string_size($replace);',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Replace values and run _good_string_size()';
  $export['linkwise-xpathparser_12-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_13-php';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:13';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$replace = _replace_keywords($field, "replace_colors");
return _good_string_color($replace);',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Replace values and run _good_string_color()';
  $export['linkwise-xpathparser_13-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_14-strip_tags';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:14';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['linkwise-xpathparser_14-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_15-php';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return _clean_string($field);',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Run _clean_string()';
  $export['linkwise-xpathparser_15-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_2-convert_case';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Uppercase';
  $export['linkwise-xpathparser_2-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_4-strip_tags';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['linkwise-xpathparser_4-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_5-convert_case';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Uppercase';
  $export['linkwise-xpathparser_5-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_6-php';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return _greekurl($field);',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Run _greek_url';
  $export['linkwise-xpathparser_6-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_7-php';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => 'return _greekurl($field);',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Run _greek_url';
  $export['linkwise-xpathparser_7-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'linkwise-xpathparser_9-find_replace';
  $feeds_tamper->importer = 'linkwise';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ',',
    'replace' => '.',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['linkwise-xpathparser_9-find_replace'] = $feeds_tamper;

  return $export;
}
