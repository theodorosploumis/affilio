<?php
/**
 * @file
 * affilio_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function affilio_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-custom_copyright'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'custom_copyright',
    'module' => 'block',
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
        'weight' => -15,
      ),
      'trendies' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-custom_small_adds'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'custom_small_adds',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'blog*',
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
        'weight' => 2,
      ),
      'trendies' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-custom_social_links'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'custom_social_links',
    'module' => 'block',
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
        'weight' => 4,
      ),
      'trendies' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['blockify-blockify-breadcrumb'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'blockify-breadcrumb',
    'module' => 'blockify',
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
        'weight' => -16,
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

  $export['blockify-blockify-logo'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'blockify-logo',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 3,
      ),
      'subminimal' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'subminimal',
        'weight' => -17,
      ),
      'trendies' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['blockify-blockify-page-title'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'blockify-page-title',
    'module' => 'blockify',
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
        'weight' => -1,
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

  $export['current_search-standard'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'standard',
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -10,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -14,
      ),
      'trendies' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['facetapi-1fotRDhYiZSE89GjmErIdOM77rBityhH'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '1fotRDhYiZSE89GjmErIdOM77rBityhH',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -1,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -5,
      ),
      'trendies' => array(
        'region' => 'content_pre',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -14,
      ),
    ),
    'title' => 'Size',
    'visibility' => 0,
  );

  $export['facetapi-Likx1kkVRM2SNrQOaBKL84j9ENisTlIL'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Likx1kkVRM2SNrQOaBKL84j9ENisTlIL',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -3,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -7,
      ),
      'trendies' => array(
        'region' => 'content_pre',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -17,
      ),
    ),
    'title' => 'Price €',
    'visibility' => 0,
  );

  $export['facetapi-NvJGyYO00ACUT1Jn8lRFZpiQfL1odPjg'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'NvJGyYO00ACUT1Jn8lRFZpiQfL1odPjg',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -4,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -8,
      ),
      'trendies' => array(
        'region' => 'content_pre',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -16,
      ),
    ),
    'title' => 'Discount %',
    'visibility' => 0,
  );

  $export['facetapi-UvF5u2HOAi6pa77FCG9Kt85sEpt4HX1j'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'UvF5u2HOAi6pa77FCG9Kt85sEpt4HX1j',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -7,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -10,
      ),
      'trendies' => array(
        'region' => 'content_pre',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -19,
      ),
    ),
    'title' => 'Brand',
    'visibility' => 0,
  );

  $export['facetapi-pNqhZqLxe4Lw874NMb2P77aS8mBnyCiv'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'pNqhZqLxe4Lw874NMb2P77aS8mBnyCiv',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -2,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -6,
      ),
      'trendies' => array(
        'region' => 'content_pre',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-zKA80II8X8oVmntuhyivwbVb5fkSkRbL'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'zKA80II8X8oVmntuhyivwbVb5fkSkRbL',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -5,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -9,
      ),
      'trendies' => array(
        'region' => 'content_pre',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -15,
      ),
    ),
    'title' => 'Color',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'taxonomy/term/*',
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
        'weight' => 7,
      ),
      'trendies' => array(
        'region' => 'pre_details',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => 0,
      ),
    ),
    'title' => 'Subcategories',
    'visibility' => 1,
  );

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search-sorts',
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 9,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => 1,
      ),
      'trendies' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'subminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'subminimal',
        'weight' => -9,
      ),
      'trendies' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-products-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-products-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -8,
      ),
      'subminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subminimal',
        'weight' => -11,
      ),
      'trendies' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'trendies',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
