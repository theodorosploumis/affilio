<?php

/**
 * @file
 * Advanced migration examples. These serve two purposes:
 *
 * 1. To demonstrate some of the more advanced usages of the Migrate module.
 *    Search for "TIP:" below for features not found in the basic example.
 * 2. To provide thorough test cases for the simpletest suite.
 *
 */

/**
 * An alternative approach using MigrateSourceSQL. This uses a different
 * XML library, which advances element-by-element through the XML file rather
 * than reading in the whole file. This source will work better with large XML
 * files, but is slower for small files and has a more restrictive query
 * language for selecting the elements to process.
 */

/**
 * This uses a different
 * XML library, which advances element-by-element through the XML file rather
 * than reading in the whole file. This source will work better with large XML
 * files, but is slower for small files and has a more restrictive query
 * language for selecting the elements to process.
 */
class LinkwiseNodeMigration extends XMLMigration {
  /**
   * @param array $arguments
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('XML feed with products from Linkwise');

    $this->team = array(
      new MigrateTeamMember('Theo Pl.', 'me@theodorosploumis.com', t('tplcom')),
    );

    // Track changes
    //$options = array('track_changes' => 1);
    $options = array();

    $fields = array(
      'site_url' => t('Product/Site URL'),
      'tracking_url' => t('Tracking URL'),
      'product_name' => t('Product Name - Title'),
      'price' => t('Price, final'),
      'full_price' => t('Price, old'),
      'image_url' => t('Image'),
      'discount' => t('Discount'),
      'currency' => t('Currency'),
      'description' => t('Description'),
      'in_stock' => t('In Stock'),
      'xml_source' => t('XML Source'),
      'category' => t('Category, term'),
      'size' => t('Size, term'),
      'colour' => t('Colour, term'),
      'brand_name' => t('Brand Name, term'),
      'program_name' => t('Shop - Program Name, term'),
    );

    // Get the source from xml files
    $xml_folder = drupal_realpath("public://feeds/");
    //print $xml_folder;

    //$xml_file = "asos.xml";
    //$items_url = $xml_folder ."/". $xml_file;

    /**
     * Multiple xml files from live urls.
     * We use values modules to create the list.
     */
    // Get array of the values list
    $values_list = "affiliate_feeds";
    $values_array = values_load($values_list)->data;

    // Create a new array using keys and values of sub-arrays
    /**
    $xml_list_keys = array_map(function ($array) { return $array['key']; },
      $values_array);
    $values = array_map(function ($array) { return "'" . $array['value'] .
    "'"; },
      $values_array);
    // Final array of files that need to be migrated
    $items_url = array_combine($xml_list_keys,$values);

    //$items_url = array_keys($values_array);
     */

    // Local xml files
    $mask = '/.+\.xml/i';
    $xml_files = file_scan_directory($xml_folder, $mask);
    $items_url = array_keys($xml_files);

    // Xpath elements
    $item_xpath = '/product_feed/program/product';  // relative to document
    $item_ID_xpath = 'site_url';        // relative to item_xpath

    // Create the source mapping
    $this->source = new MigrateSourceXML($items_url, $item_xpath,
      $item_ID_xpath, $fields, $options);

    // Create the destination mapping
    $this->destination = new MigrateDestinationNode('product');

    // Update using destination not source
    //$this->systemOfRecord = Migration::DESTINATION;

    // Start migration and add connecting field
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'site_url' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'The hashed url of the Product as UID',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Default node
    $this->addFieldMapping('uid')
      ->defaultValue('1');
    $this->addFieldMapping('title', 'product_name')
      ->xpath('product_name');

    // Product fields
    $this->addFieldMapping('field_site_url', 'site_url')
      ->xpath('site_url');

    $this->addFieldMapping('field_tracking_url', 'tracking_url')
      ->xpath('tracking_url');

    $this->addFieldMapping('field_description', 'description')
      ->xpath('description')
      ->callbacks('strip_tags');
    $this->addFieldMapping('field_description:format')
      ->defaultValue('plain_text');

    $this->addFieldMapping('field_price', 'price')
      ->xpath('price');

    $this->addFieldMapping('field_price_full', 'full_price')
      ->xpath('full_price');

    $this->addFieldMapping('field_in_stock', 'in_stock')
      ->xpath('in_stock')
      ->callbacks('textToNumber');

    $this->addFieldMapping('field_discount', 'discount')
      ->xpath('discount');

    $this->addFieldMapping('field_currency', 'currency')
      ->xpath('currency');

    // Images
    $this->addFieldMapping('field_images', 'image_url')
      ->xpath('image_url');
    $this->addFieldMapping('field_images:file_replace')
      ->defaultValue(FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_images:preserve_files')
      ->defaultValue(FALSE);

    $this->addFieldMapping('field_image_url', 'image_url')
      ->xpath('image_url');

    // Debugging fields
    $this->addFieldMapping('field_xml_source', 'xml_source')
      ->xpath('.');

    // Taxonomies
    $this->addFieldMapping('field_shop', 'program_name')
      ->xpath('program_name')
      ->callbacks('grstrtoupper');
    $this->addFieldMapping('field_shop:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_brand', 'brand_name')
      ->xpath('brand_name')
      ->callbacks('grstrtoupper');
    $this->addFieldMapping('field_brand:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_colour', 'colour')
      ->xpath('colour')
      ->callbacks('betterColorArray');
    $this->addFieldMapping('field_colour:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_size', 'size')
      ->xpath('size')
      ->callbacks('betterSizeArray');
    $this->addFieldMapping('field_size:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_unassigned_category', 'category')
      ->xpath('category')
      ->callbacks('betterTaxonomyString');
    $this->addFieldMapping('field_unassigned_category:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_unassigned_category:machine_name')
      ->callbacks('greeklish')
      ->defaultValue(TRUE);


    // DNM fields
    $this->addUnmigratedDestinations(array(
      'changed',
      'created',
      'is_new',
      'language',
      'log',
      'revision',
      'revision_uid',
      'status',
      'sticky',
      'tnid',
      'translate',
    ));
  }

  /**
   * Default implementation of prepareRow(). This method is called from the source
   * plugin upon first pulling the raw data from the source.
   *
   * @param $row
   *  Object containing raw source data.
   * @return bool
   *  TRUE to process this row, FALSE to have the source skip it.
   */
  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    //drush_print_r($row);

    // xml_source is used for debugging as also as for free search.
    // We do add these values to the field "field_xml_source".
    $row->xml_source .= "name: ".(String) $row->xml->product_name ."\n";
    $row->xml_source .= "description: ".(String) strip_tags($row->xml->description) ."\n";
    $row->xml_source .= "shop: ".(String) $row->xml->program_name ."\n";
    $row->xml_source .= "brand: ".(String) $row->xml->brand_name ."\n";
    $row->xml_source .= "price: ".(String) $row->xml->price ."\n";
    $row->xml_source .= "size: ".(String) $row->xml->size ."\n";
    $row->xml_source .= "colour: ".(String) $row->xml->colour . "\n";
    $row->xml_source .= "category: ".(String) $row->xml->category;

    // Exclude rows using taxonomy term name of vocabulary "Unassigned".
    // Basic variables
    $excluded_list = "excluded_categories"; // Values list name
    $bundle = "unassigned"; // Vocabulary machine_name

    // Do some manipulation for the xml value.
    $category = _clean_string($row->xml->category);

    // Get result for regex excluded (using values module).
    $regex_excluded = _regex_values_excluded($category, $excluded_list);
    if ($regex_excluded == 0) {
      return FALSE;
    } else {
      // Get result for field_excluded of taxonomy term.
      $field_excluded = _taxonomy_field_excluded($bundle, $category);
      if ($field_excluded == 0) {
        return FALSE;
      }
    }

    return TRUE;
  }

  /**
   * Prepare a proper unique key.
   * @param array $source_key
   * @param array $row
   * @return array $key
   */
  public function prepareKey($source_key, $row) {
    $row->site_url = hash('sha256', $row->site_url);

    //$row->xml->some_non_key_FIELD

    $key = array();
    $key['site_url'] = $row->site_url;

    //drush_print_r($key);

    return $key;
  }
}

