<?php
/**
 * @file
 * affilio_product_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function affilio_product_type_taxonomy_default_vocabularies() {
  return array(
    'brand' => array(
      'name' => 'Brand',
      'machine_name' => 'brand',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'category' => array(
      'name' => 'Categories',
      'machine_name' => 'category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'color' => array(
      'name' => 'Color',
      'machine_name' => 'color',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'shop' => array(
      'name' => 'Shop',
      'machine_name' => 'shop',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'size' => array(
      'name' => 'Size',
      'machine_name' => 'size',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'special' => array(
      'name' => 'Special',
      'machine_name' => 'special',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'unassigned' => array(
      'name' => 'Unassigned',
      'machine_name' => 'unassigned',
      'description' => 'Categories that need to be assigned to other Vocabularies',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
