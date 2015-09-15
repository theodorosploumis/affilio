<?php
/**
 * @file
 * affilio_values_lists.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function affilio_values_lists_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "values" && $api == "default_values_sets") {
    return array("version" => "1");
  }
}
