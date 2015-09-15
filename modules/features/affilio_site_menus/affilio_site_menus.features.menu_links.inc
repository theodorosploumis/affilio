<?php
/**
 * @file
 * affilio_site_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function affilio_site_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-administer-content_add-new-blog:node/add/blog
  $menu_links['menu-administer-content_add-new-blog:node/add/blog'] = array(
    'menu_name' => 'menu-administer-content',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Add new Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-content_add-new-blog:node/add/blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-content_add-new-page:node/add/page
  $menu_links['menu-administer-content_add-new-page:node/add/page'] = array(
    'menu_name' => 'menu-administer-content',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Add new Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-content_add-new-page:node/add/page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-content_administer-pagesblog:admin/content
  $menu_links['menu-administer-content_administer-pagesblog:admin/content'] = array(
    'menu_name' => 'menu-administer-content',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Administer Pages/Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-content_administer-pagesblog:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-content_administer-products:admin/products
  $menu_links['menu-administer-content_administer-products:admin/products'] = array(
    'menu_name' => 'menu-administer-content',
    'link_path' => 'admin/products',
    'router_path' => 'admin/products',
    'link_title' => 'Administer Products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-content_administer-products:admin/products',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-products_add-new-feed:node/add/feed
  $menu_links['menu-administer-products_add-new-feed:node/add/feed'] = array(
    'menu_name' => 'menu-administer-products',
    'link_path' => 'node/add/feed',
    'router_path' => 'node/add/feed',
    'link_title' => 'Add new Feed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-products_add-new-feed:node/add/feed',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-products_add-new-product:node/add/product
  $menu_links['menu-administer-products_add-new-product:node/add/product'] = array(
    'menu_name' => 'menu-administer-products',
    'link_path' => 'node/add/product',
    'router_path' => 'node/add/product',
    'link_title' => 'Add new Product',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-products_add-new-product:node/add/product',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-products_administer-all-products:admin/products
  $menu_links['menu-administer-products_administer-all-products:admin/products'] = array(
    'menu_name' => 'menu-administer-products',
    'link_path' => 'admin/products',
    'router_path' => 'admin/products',
    'link_title' => 'Administer All Products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-products_administer-all-products:admin/products',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-products_administer-feeds:admin/content
  $menu_links['menu-administer-products_administer-feeds:admin/content'] = array(
    'menu_name' => 'menu-administer-products',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Administer Feeds',
    'options' => array(
      'query' => array(
        'type' => 'feed',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-products_administer-feeds:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-products_affiliate-feeds-url:admin/structure/values/affiliate_feeds
  $menu_links['menu-administer-products_affiliate-feeds-url:admin/structure/values/affiliate_feeds'] = array(
    'menu_name' => 'menu-administer-products',
    'link_path' => 'admin/structure/values/affiliate_feeds',
    'router_path' => 'admin/structure/values/%',
    'link_title' => 'Affiliate feeds (url)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-products_affiliate-feeds-url:admin/structure/values/affiliate_feeds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-products_feeds-log:admin/reports/feeds
  $menu_links['menu-administer-products_feeds-log:admin/reports/feeds'] = array(
    'menu_name' => 'menu-administer-products',
    'link_path' => 'admin/reports/feeds',
    'router_path' => 'admin/reports/feeds',
    'link_title' => 'Feeds log',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-products_feeds-log:admin/reports/feeds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-taxonomies_add-new-taxonomy-details:node/add/taxonomy-details
  $menu_links['menu-administer-taxonomies_add-new-taxonomy-details:node/add/taxonomy-details'] = array(
    'menu_name' => 'menu-administer-taxonomies',
    'link_path' => 'node/add/taxonomy-details',
    'router_path' => 'node/add/taxonomy-details',
    'link_title' => 'Add new Taxonomy Details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-taxonomies_add-new-taxonomy-details:node/add/taxonomy-details',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-taxonomies_administer-all-taxonomies:admin/taxonomies
  $menu_links['menu-administer-taxonomies_administer-all-taxonomies:admin/taxonomies'] = array(
    'menu_name' => 'menu-administer-taxonomies',
    'link_path' => 'admin/taxonomies',
    'router_path' => 'admin/taxonomies',
    'link_title' => 'Administer All Taxonomies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-taxonomies_administer-all-taxonomies:admin/taxonomies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-taxonomies_administer-category-tax:admin/structure/taxonomy/category
  $menu_links['menu-administer-taxonomies_administer-category-tax:admin/structure/taxonomy/category'] = array(
    'menu_name' => 'menu-administer-taxonomies',
    'link_path' => 'admin/structure/taxonomy/category',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Administer Category tax.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-taxonomies_administer-category-tax:admin/structure/taxonomy/category',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-taxonomies_administer-special-tax:admin/structure/taxonomy/special
  $menu_links['menu-administer-taxonomies_administer-special-tax:admin/structure/taxonomy/special'] = array(
    'menu_name' => 'menu-administer-taxonomies',
    'link_path' => 'admin/structure/taxonomy/special',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Administer Special tax.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-taxonomies_administer-special-tax:admin/structure/taxonomy/special',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-administer-taxonomies_administertaxonomy-details:admin/content
  $menu_links['menu-administer-taxonomies_administertaxonomy-details:admin/content'] = array(
    'menu_name' => 'menu-administer-taxonomies',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'AdministerTaxonomy Details',
    'options' => array(
      'query' => array(
        'type' => 'taxonomy_details',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-administer-taxonomies_administertaxonomy-details:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-basic_about:<front>
  $menu_links['menu-basic_about:<front>'] = array(
    'menu_name' => 'menu-basic',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-basic_about:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-basic_blog:blog
  $menu_links['menu-basic_blog:blog'] = array(
    'menu_name' => 'menu-basic',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-basic_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-basic_brands:brand
  $menu_links['menu-basic_brands:brand'] = array(
    'menu_name' => 'menu-basic',
    'link_path' => 'brand',
    'router_path' => 'brand',
    'link_title' => 'Brands',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-basic_brands:brand',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-basic_categories:node
  $menu_links['menu-basic_categories:node'] = array(
    'menu_name' => 'menu-basic',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'Categories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-basic_categories:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-basic_new-arrivals:node
  $menu_links['menu-basic_new-arrivals:node'] = array(
    'menu_name' => 'menu-basic',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'New arrivals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-basic_new-arrivals:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-basic_popular:node
  $menu_links['menu-basic_popular:node'] = array(
    'menu_name' => 'menu-basic',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'Popular',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-basic_popular:node',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-basic_shops:shop
  $menu_links['menu-basic_shops:shop'] = array(
    'menu_name' => 'menu-basic',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Shops',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-basic_shops:shop',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-social_facebook:http://facebook.com
  $menu_links['menu-social_facebook:http://facebook.com'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://facebook.com',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social_facebook:http://facebook.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social_pinterest:http://pinterest.com
  $menu_links['menu-social_pinterest:http://pinterest.com'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://pinterest.com',
    'router_path' => '',
    'link_title' => 'Pinterest',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social_pinterest:http://pinterest.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social_twitter:http://twitter.com
  $menu_links['menu-social_twitter:http://twitter.com'] = array(
    'menu_name' => 'menu-social',
    'link_path' => 'http://twitter.com',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social_twitter:http://twitter.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Add new Blog');
  t('Add new Feed');
  t('Add new Page');
  t('Add new Product');
  t('Add new Taxonomy Details');
  t('Administer All Products');
  t('Administer All Taxonomies');
  t('Administer Category tax.');
  t('Administer Feeds');
  t('Administer Pages/Blog');
  t('Administer Products');
  t('Administer Special tax.');
  t('AdministerTaxonomy Details');
  t('Affiliate feeds (url)');
  t('Blog');
  t('Brands');
  t('Categories');
  t('Facebook');
  t('Feeds log');
  t('New arrivals');
  t('Pinterest');
  t('Popular');
  t('Shops');
  t('Twitter');


  return $menu_links;
}
