<?php
/**
 * @file
 * affilio_values_lists.default_values_sets.inc
 */

/**
 * Implements hook_default_values_values().
 */
function affilio_values_lists_default_values_values() {
  $export = array();

  $values = new stdClass();
  $values->disabled = FALSE; /* Edit this to true to make a default values disabled initially */
  $values->api_version = 1;
  $values->name = 'affiliate_feeds';
  $values->title = 'Affiliate Feeds';
  $values->description = 'List of xml files that will be downloaded with a cron job';
  $values->data = array();
  $export['affiliate_feeds'] = $values;

  $values = new stdClass();
  $values->disabled = FALSE; /* Edit this to true to make a default values disabled initially */
  $values->api_version = 1;
  $values->name = 'excluded_categories';
  $values->title = 'Excluded Categories';
  $values->description = 'Products with these Categories (starting with) will not be imported';
  $values->data = array(
    0 => array(
      'key' => 'paidi',
      'value' => 'ΠΑΙΔΙ',
      'weight' => '-4',
    ),
    1 => array(
      'key' => 'andr',
      'value' => 'ΑΝΔΡ',
      'weight' => '-4',
    ),
    2 => array(
      'key' => 'antr',
      'value' => 'ΑΝΤΡ',
      'weight' => '-4',
    ),
    3 => array(
      'key' => 'home_men',
      'value' => 'HOME | MEN',
      'weight' => '-4',
    ),
  );
  $export['excluded_categories'] = $values;

  $values = new stdClass();
  $values->disabled = FALSE; /* Edit this to true to make a default values disabled initially */
  $values->api_version = 1;
  $values->name = 'replace_categories';
  $values->title = 'Replace categories';
  $values->description = 'Replace categories with existing';
  $values->data = array(
    0 => array(
      'key' => 'BELTS',
      'value' => 'ΖΩΝΕΣ',
      'weight' => '-18',
    ),
    1 => array(
      'key' => 'CLOTHING',
      'value' => 'ΡΟΥΧΑ',
      'weight' => '-18',
    ),
    2 => array(
      'key' => 'SHOES',
      'value' => 'ΠΑΠΟΥΤΣΙΑ',
      'weight' => '-18',
    ),
    3 => array(
      'key' => 'BOOTIES',
      'value' => 'ΜΠΟΤΑΚΙΑ',
      'weight' => '-18',
    ),
    4 => array(
      'key' => 'ACCESSORIES',
      'value' => 'ΑΞΕΣΟΥΑΡ',
      'weight' => '-18',
    ),
    5 => array(
      'key' => 'CLOTHING',
      'value' => 'ΕΝΔΥΜΑΤΑ',
      'weight' => '-18',
    ),
    6 => array(
      'key' => 'CLOTHING',
      'value' => 'ΓΥΝΑΙΚΕΙΑ ΕΝΔΥΣΗ',
      'weight' => '-18',
    ),
    7 => array(
      'key' => 'BOOTS',
      'value' => 'ΜΠΟΤΕΣ',
      'weight' => '-18',
    ),
    8 => array(
      'key' => 'BOOTIES',
      'value' => 'ΜΠΟΤΙΝΙ',
      'weight' => '-17',
    ),
    9 => array(
      'key' => 'SPORTS',
      'value' => 'ΑΘΛΗΤΙΚΑ',
      'weight' => '-14',
    ),
    10 => array(
      'key' => 'SPORTS',
      'value' => 'RUNNING',
      'weight' => '-13',
    ),
    11 => array(
      'key' => 'ESPANTRIGIES',
      'value' => 'ΕΣΠΑΝΤΡΙΓΙΕΣ',
      'weight' => '-12',
    ),
    12 => array(
      'key' => 'FLATS',
      'value' => 'ΜΠΑΛΑΡΙΝΕΣ',
      'weight' => '-10',
    ),
    13 => array(
      'key' => 'PANTS',
      'value' => 'ΠΑΝΤΕΛΟΝΙ',
      'weight' => '-9',
    ),
    14 => array(
      'key' => 'SANDALS',
      'value' => 'ΠΕΔΙΛΑ',
      'weight' => '-6',
    ),
    15 => array(
      'key' => 'SANDALS',
      'value' => 'ΣΑΓΙΟΝΑΡΕΣ',
      'weight' => '-4',
    ),
    16 => array(
      'key' => 'SANDALS',
      'value' => 'ΣΑΝΔΑΛΙΑ',
      'weight' => '-3',
    ),
    17 => array(
      'key' => 'BAGS',
      'value' => 'ΤΣΑΝΤΕΣ',
      'weight' => '-1',
    ),
    18 => array(
      'key' => 'TOPS',
      'value' => 'JERSEY TOPS',
      'weight' => '18',
    ),
    19 => array(
      'key' => 'SOCKS_PANTYHOZ',
      'value' => 'SOCKS &amp; TIGHTS',
      'weight' => '19',
    ),
    20 => array(
      'key' => 'SUNGLASSES_EYEWEAR',
      'value' => 'SUNGLASSES',
      'weight' => '20',
    ),
    21 => array(
      'key' => 'BAGS',
      'value' => 'BAGS &amp; PURSES',
      'weight' => '21',
    ),
  );
  $export['replace_categories'] = $values;

  $values = new stdClass();
  $values->disabled = FALSE; /* Edit this to true to make a default values disabled initially */
  $values->api_version = 1;
  $values->name = 'replace_colors';
  $values->title = 'Replace Colors';
  $values->description = 'Replace color names etc';
  $values->data = array(
    0 => array(
      'key' => 'BLACK',
      'value' => 'ΜΑΥΡΟ',
      'weight' => '-11',
    ),
    1 => array(
      'key' => 'WHITE',
      'value' => 'ΑΣΠΡΟ',
      'weight' => '-10',
    ),
    2 => array(
      'key' => 'WHITE',
      'value' => 'ΛΕΥΚΟ',
      'weight' => '-9',
    ),
    3 => array(
      'key' => 'RED',
      'value' => 'ΚΟΚΚΙΝΟ',
      'weight' => '-8',
    ),
    4 => array(
      'key' => 'BLUE',
      'value' => 'ΜΠΛΕ',
      'weight' => '-7',
    ),
    5 => array(
      'key' => 'PINK',
      'value' => 'ΡΟΖ',
      'weight' => '-6',
    ),
    6 => array(
      'key' => 'BRONZE',
      'value' => 'ΜΠΡΟΝΖΕ',
      'weight' => '-5',
    ),
    7 => array(
      'key' => 'GOLDEN',
      'value' => 'ΧΡΥΣΑΦΙ',
      'weight' => '-4',
    ),
    8 => array(
      'key' => 'YELLOW',
      'value' => 'ΚΙΤΡΙΝΟ',
      'weight' => '-3',
    ),
    9 => array(
      'key' => 'GOLDEN',
      'value' => 'ΧΡΥΣΟ',
      'weight' => '-2',
    ),
    10 => array(
      'key' => 'GREEN',
      'value' => 'ΠΡΑΣΙΝΟ',
      'weight' => '-1',
    ),
    11 => array(
      'key' => 'SILVER',
      'value' => 'ΑΣΗΜΙ',
      'weight' => '11',
    ),
  );
  $export['replace_colors'] = $values;

  $values = new stdClass();
  $values->disabled = FALSE; /* Edit this to true to make a default values disabled initially */
  $values->api_version = 1;
  $values->name = 'replace_size';
  $values->title = 'Replace size';
  $values->description = 'Replace size names etc';
  $values->data = array();
  $export['replace_size'] = $values;

  return $export;
}
