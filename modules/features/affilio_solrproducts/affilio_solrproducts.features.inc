<?php
/**
 * @file
 * affilio_solrproducts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function affilio_solrproducts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function affilio_solrproducts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function affilio_solrproducts_default_search_api_index() {
  $items = array();
  $items['node_products'] = entity_import('search_api_index', '{
    "name" : "Node Products",
    "machine_name" : "node_products",
    "description" : "Index of Products (nodes) imported from feeds.",
    "server" : "products_solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "300",
      "fields" : {
        "created" : { "type" : "integer" },
        "field_brand" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_colour" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_discount" : { "type" : "integer" },
        "field_price" : { "type" : "decimal" },
        "field_shop" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_size" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_special" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_xml_source" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "product" : "product" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_xml_source" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "field_xml_source" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "sorts_widget" : { "enabled" : 1, "autosubmit" : 1, "autosubmit_hide" : 1, "title" : "" }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function affilio_solrproducts_default_search_api_server() {
  $items = array();
  $items['products_solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "products_solr",
    "description" : "Solr 4.x with Jetty 9",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "127.0.0.1",
      "port" : "8099",
      "path" : "\\/solr\\/core0",
      "http_user" : "tplcom",
      "http_pass" : "pass@ladies.octo2015",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "4",
      "http_method" : "AUTO"
    },
    "enabled" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function affilio_solrproducts_default_search_api_sort() {
  $items = array();
  $items['node_products__created'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "created",
    "name" : "Newest",
    "enabled" : "1",
    "weight" : "-98",
    "identifier" : "node_products__created",
    "default_sort" : "1",
    "default_sort_no_terms" : "1",
    "default_order" : "desc",
    "options" : { "field_name" : "Date created" }
  }');
  $items['node_products__field_brand'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "field_brand",
    "name" : "Brand",
    "enabled" : "0",
    "weight" : "-96",
    "identifier" : "node_products__field_brand",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Brand" }
  }');
  $items['node_products__field_colour'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "field_colour",
    "name" : "Colour",
    "enabled" : "0",
    "weight" : "-93",
    "identifier" : "node_products__field_colour",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Color" }
  }');
  $items['node_products__field_discount'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "field_discount",
    "name" : "Discount",
    "enabled" : "1",
    "weight" : "-97",
    "identifier" : "node_products__field_discount",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Discount" }
  }');
  $items['node_products__field_price'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "field_price",
    "name" : "Price",
    "enabled" : "1",
    "weight" : "-99",
    "identifier" : "node_products__field_price",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "asc",
    "options" : { "field_name" : "Price" }
  }');
  $items['node_products__field_price_full'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "field_price_full",
    "name" : "Price (low to high)",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "node_products__field_price_full",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "asc",
    "options" : { "field_name" : "field_price_full" }
  }');
  $items['node_products__field_shop'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "field_shop",
    "name" : "Shop",
    "enabled" : "0",
    "weight" : "-95",
    "identifier" : "node_products__field_shop",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Shop" }
  }');
  $items['node_products__field_size'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "field_size",
    "name" : "Size",
    "enabled" : "0",
    "weight" : "-94",
    "identifier" : "node_products__field_size",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Size" }
  }');
  $items['node_products__search_api_language'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "search_api_language",
    "name" : "Item language",
    "enabled" : "0",
    "weight" : "-92",
    "identifier" : "node_products__search_api_language",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Item language" }
  }');
  $items['node_products__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "node_products",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "node_products__search_api_relevance",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" }
  }');
  return $items;
}
