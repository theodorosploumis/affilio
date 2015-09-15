<?php
/**
 * @file
 * affilio_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function affilio_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright Details';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'custom_copyright';
  $fe_block_boxes->body = '<p>Copyright © SITE_NAME - All rights reserved</p>
';

  $export['custom_copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Small Add - Linkwise';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'custom_small_adds';
  $fe_block_boxes->body = '<a href="http://go.linkwi.se/z/399-522/CD18508/?" style="border:none;outline:none;" target="_blank">
 <img src="http://go.linkwi.se/delivery/cr.php?an=CD18508&amp;cn=399-522&amp;" style="width:120px;height:600px;border:none;outline:none;" alt="Advertisement"/>
</a>';

  $export['custom_small_adds'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social links';
  $fe_block_boxes->format = 'ds';
  $fe_block_boxes->machine_name = 'custom_social_links';
  $fe_block_boxes->body = '<ul class="list-social">
<li><a href="http://facebook.com" class="facebook-social social-link">Facebook</a></li>
<li><a href="http://pinterest.com" class="pinterest-social social-link">Pinterest</a></li>
<li><a href="http://twitter.com" class="twitter-social social-link">Twitter</a></li>
</ul>';

  $export['custom_social_links'] = $fe_block_boxes;

  return $export;
}
