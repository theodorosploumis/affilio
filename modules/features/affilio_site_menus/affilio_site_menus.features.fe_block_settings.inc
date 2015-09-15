<?php
/**
 * @file
 * affilio_site_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function affilio_site_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-administer-content'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-administer-content',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -17,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => 0,
      ),
      'trendies' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-administer-products'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-administer-products',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -18,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => 0,
      ),
      'trendies' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-administer-taxonomies'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-administer-taxonomies',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -19,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => 0,
      ),
      'trendies' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-basic'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-basic',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => 0,
      ),
      'trendies' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-social'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-social',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => 0,
      ),
      'trendies' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
