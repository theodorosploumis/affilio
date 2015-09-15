<?php

/*
function trendies_form_alter(&$form, &$form_state, $form_id){
  //dpm($form);
}
*/

/**
 * hook_form_FORM_ID_alter
 * @param $form
 * @param $form_state
 * @param $form_id
 */
function trendies_form_search_api_ranges_block_slider_view_form_alter(&$form, &$form_state, $form_id){
  $form['submit']['#value'] = t('Apply Filter');
}

/**
 * theme_faceapi_count()
 * found at http://cgit.drupalcode.org/facetapi/tree/facetapi.theme.inc?id=refs/heads;id2=7.x-1.x#l35
 * @param $vars
 * @return string
 */
function trendies_facetapi_count($vars) {
  return '<span class="counter">(' . (int) $vars['count'] . ')</span>';
}

/**
 * hook_preprocess_html
 * @param $vars
 */
function trendies_preprocess_html(&$vars) {
  if (!empty($vars['page']['sidebar_first_middle']) || !empty
    ($vars['page']['sidebar_first_top']) || !empty($vars['page']['sidebar_first_bottom'])) {
    //dpm($vars);
    $vars['classes_array'][] = 'sidebar-first';
    $vars['classes_array'] = array_values(array_diff($vars['classes_array'],array('no-sidebars')));
  }
  if (isset($_GET["format"])) {
    if ($_GET["format"] == "light") {
      $vars['classes_array'][] = 'with-lightbox';
    }
  }
}

function trendies_preprocess_field(&$variables) {
  if($variables['element']['#field_name'] == 'field_category') {
    //dpm($variables);
	}
}