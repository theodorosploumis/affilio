<?php
/**
 * @file
 * affilio_site_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function affilio_site_menus_menu_default_menu_custom() {
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
  // Exported menu: menu-basic.
  $menus['menu-basic'] = array(
    'menu_name' => 'menu-basic',
    'title' => 'Basic Menu',
    'description' => '',
  );
  // Exported menu: menu-social.
  $menus['menu-social'] = array(
    'menu_name' => 'menu-social',
    'title' => 'Social',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administer Content');
  t('Administer Products');
  t('Administer Taxonomies');
  t('Basic Menu');
  t('Social');


  return $menus;
}
