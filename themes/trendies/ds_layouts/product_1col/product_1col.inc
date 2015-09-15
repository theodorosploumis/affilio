<?php
function ds_product_1col() {
  return array(
    'label' => t('Product: 1 column with 5 regions'),
    'regions' => array(
      'top' => t('top'),
      'region_1' => t('region 1'),
      'region_2' => t('region 2'),
      'region_3' => t('region 3'),
      'bottom' => t('bottom'),
    ),
//  'css' => TRUE,
    'image' => TRUE,
  );
}
