<?php
/**
 * @file
 * affilio_site_menus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function affilio_site_menus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
