<?php
	/*
regions[header]         = Header
regions[navigation]     = Navigation bar
regions[highlighted]    = Highlighted
regions[help]           = Help
regions[content]        = Content
regions[sidebar_first]  = First sidebar
regions[sidebar_second] = Second sidebar
regions[footer_first]   = Footer First Column
regions[footer_second]  = Footer Second Column
regions[bottom]         = Page bottom
regions[custom_nav]     = Custom Nav
	*/
?>

<div id="page">
	<section>
		<div id="top_navigation">
			<?php if ($page['top_bar_content']): ?>
			<div id="">
			<?php print render($page['top_bar_content']); ?>
			</div>
		<?php endif; ?>
		</div>
	</section>
  <header class="header" id="header" role="banner">
	<div id="hero">
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>
	
	<?php if ($page['custom_nav']): ?>
		
		  <div id="cust_nav" >
			<?php print render($page['custom_nav']); ?>
		  </div>
  
		<?php endif; ?>

	
    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
	
	

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>
	
    <?php print render($page['header']); ?>
	</div>
  </header>

    <div id="main">
		<?php if ($page['slider']): ?>
			<div>
			<?php print render($page['slider']); ?>
			</div>
		<?php endif; ?>
		
		<?php if ($page['rdi_qtab_content']): ?>
			<div>
			<?php print render($page['rdi_qtab_content']); ?>
			</div>
		<?php endif; ?>
		
    <div id="content" class="column" role="main" style="width:940px;margin:0 auto;float: none;"> 
		  
		 
		<div class="container" style="width:600px;float:right;height:auto;">
			 <?php print render($tabs); ?>
		  <?php print render($page['help']); ?>
		  <?php if ($action_links): ?>
			<ul class="action-links"><?php print render($action_links); ?></ul>
		  <?php endif; ?>
		 
		  <?php print render($page['content']); ?>
		  <?php print $feed_icons; ?>
		  
		</div> 	
     
		 <?php
		  // Render the sidebars to see if there's anything in them.
		  $sidebar_first  = render($page['sidebar_first']);
		  
		 ?>

		<?php if ($sidebar_first): ?>
		
		  <aside class="sidebars" style="float:left;width:300px; height:auto;">
			<?php print $sidebar_first; ?>
			
		  </aside>
		  
		<?php endif; ?>

		</div>
  
</div>

		<div style="width:940px;margin:0 auto;float: none;"> 
	
			<?php if ($page['recent_blog_post']): ?>
				<div id="blog_post">
					<?php print render($page['recent_blog_post']); ?>
				</div>
			<?php endif; ?>
	
		</div>

		
<div id="footer_container">
	<div id="footer_wrapper">
		<div class="footer_column first">
			<?php print render($page['footer_first']); ?>
		</div>
		<div class="footer_column last" id="">
			<?php print render($page['footer_second']); ?>
		</div>
	</div>	
</div>
</div>

<?php print render($page['bottom']); ?>
  
     

     
	
      
    
	

    
	

   