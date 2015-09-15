<<?php print $layout_wrapper; print $layout_attributes; ?> <?php if ($classes){ print 'class="'. $classes .'"';} ?>>

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($top) : ?>
    <<?php print $top_wrapper ?> <?php if($top_classes){ print 'class="'. trim($top_classes) .'"';} ?>>
      <?php print $top; ?>
    </<?php print $top_wrapper ?>>
  <?php endif ?>

  <?php if ($region_1) : ?>
    <<?php print $region_1_wrapper ?> <?php if($region_1_classes){ print
      'class="'.
      trim($region_1_classes) .'"';} ?>>
      <?php print $region_1; ?>
    </<?php print $region_1_wrapper ?>>
  <?php endif ?>

  <?php if ($region_2) : ?>
    <<?php print $region_2_wrapper ?> <?php if($region_2_classes){ print
      'class="'.
      trim($region_2_classes) .'"';} ?>>
      <?php print $region_2; ?>
    </<?php print $region_2_wrapper ?>>
  <?php endif ?>

  <?php if ($region_3) : ?>
    <<?php print $region_3_wrapper ?> <?php if($region_3_classes){ print
      'class="'.
      trim($region_3_classes) .'"';} ?>>
      <?php print $region_3; ?>
    </<?php print $region_3_wrapper ?>>
  <?php endif ?>

  <?php if ($bottom) : ?>
    <<?php print $bottom_wrapper ?> <?php if($bottom_classes){ print 'class="'. trim($bottom_classes) .'"';} ?>>
      <?php print $bottom; ?>
    </<?php print $bottom_wrapper ?>>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
