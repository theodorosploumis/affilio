<?php
/**
 * @file
 * affilio_administration_views.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function affilio_administration_views_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-administer-content.
  $menus['menu-administer-content'] = array(
    'menu_name' => 'menu-administer-content',
    'title' => 'Administer Content',
    'description' => '',
  );
  // Exported menu: menu-administer-products.
  $menus['menu-administer-products'] = array(
    'menu_name' => 'menu-administer-products',
    'title' => 'Administer Products',
    'description' => '',
  );
  // Exported menu: menu-administer-taxonomies.
  $menus['menu-administer-taxonomies'] = array(
    'menu_name' => 'menu-administer-taxonomies',
    'title' => 'Administer Taxonomies',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administer Content');
  t('Administer Products');
  t('Administer Taxonomies');


  return $menus;
}
