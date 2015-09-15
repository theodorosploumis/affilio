<?php
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php
?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- page.tpl.php-->
<?php } ?>

<?php
if (isset($_GET["format"])) {
  if ($_GET["format"] == "light") {
    include ('lightbox.tpl.php');
    return;
  }
}
?>

<?php print $mothership_poorthemers_helper; ?>

<header role="banner" class="header">
  <?php if($page['header']): ?>
      <?php print render($page['header']); ?>
  <?php endif; ?>
</header>

<div class="page">

  <div class="page-inner">
    <div role="main" id="main-content">

      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

      <?php if (isset($tabs['#primary'][0]) || isset($tabs['#secondary'][0])): ?>
        <nav class="tabs"><?php print render($tabs); ?></nav>
      <?php endif; ?>

      <?php if($messages){ ?>
        <div class="drupal-messages">
          <?php print $messages; ?>
        </div>
      <?php } ?>

      <?php if($page['highlighted']){ ?>
        <?php print render($page['highlighted']); ?>
      <?php } ?>

      <?php print render($page['pre_details']); ?>

      <?php print render($page['content_pre']); ?>

      <?php print render($page['content']); ?>

      <?php print render($page['content_post']); ?>

    </div><!-- /main-->

    <?php if ($page['sidebar_first'] || $page['sidebar_first_middle'] ||
    $page['sidebar_first_top'] ||
      $page['sidebar_first_bottom']): ?>
      <div id="sidebar-first">
        <?php print render($page['sidebar_first_top']); ?>
        <?php print render($page['sidebar_first_middle']); ?>
        <?php print render($page['sidebar_first']); ?>
        <?php print render($page['sidebar_first_bottom']); ?>
      </div>
    <?php endif; ?>
  </div>

</div><!-- /page-->

<footer role="contentinfo" class="footer">
  <?php print render($page['footer']); ?>
</footer>

