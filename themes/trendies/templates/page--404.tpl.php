<header role="banner">
  <?php if ($logo): ?>
    <figure>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
      </a>
    </figure>
  <?php endif; ?>
</header>

<article>
  <h1>Not Found</h1>
  <p>Sorry, but the page you were trying to view does not exist.</p>
  <p><b><a href="/">Go to the homepage</a></b></p>
</article>
