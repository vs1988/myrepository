<?php
/**
 * @file
 * widget.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function widget_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'current_sport_lander';
  $page->task = 'page';
  $page->admin_title = 'current sport lander';
  $page->admin_description = '';
  $page->path = 'current_sport_lander';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_current_sport_lander_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'current_sport_lander';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '73088d10-f41d-4863-8670-ee9f2900a21d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a5f8b03-35eb-44fb-b782-c4bd12f431ec';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a5f8b03-35eb-44fb-b782-c4bd12f431ec';
    $display->content['new-0a5f8b03-35eb-44fb-b782-c4bd12f431ec'] = $pane;
    $display->panels['left'][0] = 'new-0a5f8b03-35eb-44fb-b782-c4bd12f431ec';
    $pane = new stdClass();
    $pane->pid = 'new-23d3e1cc-2ce8-4ff5-9673-8bd6104d5088';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'td_homepage_main_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'MEXICO',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23d3e1cc-2ce8-4ff5-9673-8bd6104d5088';
    $display->content['new-23d3e1cc-2ce8-4ff5-9673-8bd6104d5088'] = $pane;
    $display->panels['middle'][0] = 'new-23d3e1cc-2ce8-4ff5-9673-8bd6104d5088';
    $pane = new stdClass();
    $pane->pid = 'new-59814e23-8ff7-41a3-975e-aa377c2e44e8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'td_dynamic_lead_links-td_homepage_bottom_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '59814e23-8ff7-41a3-975e-aa377c2e44e8';
    $display->content['new-59814e23-8ff7-41a3-975e-aa377c2e44e8'] = $pane;
    $display->panels['middle'][1] = 'new-59814e23-8ff7-41a3-975e-aa377c2e44e8';
    $pane = new stdClass();
    $pane->pid = 'new-73fd22fc-cedf-4eda-a0ef-9211455afca1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'mps-midbanner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '73fd22fc-cedf-4eda-a0ef-9211455afca1';
    $display->content['new-73fd22fc-cedf-4eda-a0ef-9211455afca1'] = $pane;
    $display->panels['middle'][2] = 'new-73fd22fc-cedf-4eda-a0ef-9211455afca1';
    $pane = new stdClass();
    $pane->pid = 'new-d977af21-ac97-4e2c-a2ff-9a220b2106af';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd977af21-ac97-4e2c-a2ff-9a220b2106af';
    $display->content['new-d977af21-ac97-4e2c-a2ff-9a220b2106af'] = $pane;
    $display->panels['right'][0] = 'new-d977af21-ac97-4e2c-a2ff-9a220b2106af';
    $pane = new stdClass();
    $pane->pid = 'new-237bab27-0672-452e-883e-971949ea8a11';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-161';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '237bab27-0672-452e-883e-971949ea8a11';
    $display->content['new-237bab27-0672-452e-883e-971949ea8a11'] = $pane;
    $display->panels['right'][1] = 'new-237bab27-0672-452e-883e-971949ea8a11';
    $pane = new stdClass();
    $pane->pid = 'new-fe3fb766-fba4-4c89-9099-be407f36b54b';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-146';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fe3fb766-fba4-4c89-9099-be407f36b54b';
    $display->content['new-fe3fb766-fba4-4c89-9099-be407f36b54b'] = $pane;
    $display->panels['right'][2] = 'new-fe3fb766-fba4-4c89-9099-be407f36b54b';
    $pane = new stdClass();
    $pane->pid = 'new-ab82004b-3dec-4ae1-9b36-de219917ee86';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-151';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ab82004b-3dec-4ae1-9b36-de219917ee86';
    $display->content['new-ab82004b-3dec-4ae1-9b36-de219917ee86'] = $pane;
    $display->panels['right'][3] = 'new-ab82004b-3dec-4ae1-9b36-de219917ee86';
    $pane = new stdClass();
    $pane->pid = 'new-9a60e4ea-d8c6-46e6-a0a4-1daefbb91aea';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-156';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '9a60e4ea-d8c6-46e6-a0a4-1daefbb91aea';
    $display->content['new-9a60e4ea-d8c6-46e6-a0a4-1daefbb91aea'] = $pane;
    $display->panels['right'][4] = 'new-9a60e4ea-d8c6-46e6-a0a4-1daefbb91aea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['current_sport_lander'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'homepage-desktop';
  $page->admin_description = '';
  $page->path = 'homepage-desktop';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4fcaf923-1160-49b3-9feb-6238c893a471';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03c2cfd6-5d1c-4e1e-9d98-5c8593cea752';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '03c2cfd6-5d1c-4e1e-9d98-5c8593cea752';
    $display->content['new-03c2cfd6-5d1c-4e1e-9d98-5c8593cea752'] = $pane;
    $display->panels['left'][0] = 'new-03c2cfd6-5d1c-4e1e-9d98-5c8593cea752';
    $pane = new stdClass();
    $pane->pid = 'new-179ecb32-7d24-472e-9a13-2f57ed560043';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'td_homepage_main_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '179ecb32-7d24-472e-9a13-2f57ed560043';
    $display->content['new-179ecb32-7d24-472e-9a13-2f57ed560043'] = $pane;
    $display->panels['middle'][0] = 'new-179ecb32-7d24-472e-9a13-2f57ed560043';
    $pane = new stdClass();
    $pane->pid = 'new-d0364f65-74df-4572-8fb7-1d3d91715988';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'td_dynamic_lead_links-td_homepage_bottom_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd0364f65-74df-4572-8fb7-1d3d91715988';
    $display->content['new-d0364f65-74df-4572-8fb7-1d3d91715988'] = $pane;
    $display->panels['middle'][1] = 'new-d0364f65-74df-4572-8fb7-1d3d91715988';
    $pane = new stdClass();
    $pane->pid = 'new-7bb3cd77-a1c0-4a38-a54a-f9777a1ca1d7';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'mps-midbanner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7bb3cd77-a1c0-4a38-a54a-f9777a1ca1d7';
    $display->content['new-7bb3cd77-a1c0-4a38-a54a-f9777a1ca1d7'] = $pane;
    $display->panels['middle'][2] = 'new-7bb3cd77-a1c0-4a38-a54a-f9777a1ca1d7';
    $pane = new stdClass();
    $pane->pid = 'new-13775650-53ed-41b2-884a-ffa6cea08097';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13775650-53ed-41b2-884a-ffa6cea08097';
    $display->content['new-13775650-53ed-41b2-884a-ffa6cea08097'] = $pane;
    $display->panels['right'][0] = 'new-13775650-53ed-41b2-884a-ffa6cea08097';
    $pane = new stdClass();
    $pane->pid = 'new-3f4cb41a-f931-4946-b62c-1d3465979359';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-161';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3f4cb41a-f931-4946-b62c-1d3465979359';
    $display->content['new-3f4cb41a-f931-4946-b62c-1d3465979359'] = $pane;
    $display->panels['right'][1] = 'new-3f4cb41a-f931-4946-b62c-1d3465979359';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-03c2cfd6-5d1c-4e1e-9d98-5c8593cea752';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opta_individual_leagues';
  $page->task = 'page';
  $page->admin_title = 'Opta Individual leagues';
  $page->admin_description = '';
  $page->path = 'opta-individual-leagues';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opta_individual_leagues_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'opta_individual_leagues';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a1548763-0f82-4802-a817-2e41c66c303e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83145a96-bc50-4d53-8e53-f693557470b5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '83145a96-bc50-4d53-8e53-f693557470b5';
    $display->content['new-83145a96-bc50-4d53-8e53-f693557470b5'] = $pane;
    $display->panels['left'][0] = 'new-83145a96-bc50-4d53-8e53-f693557470b5';
    $pane = new stdClass();
    $pane->pid = 'new-83d236ca-def0-4535-bd2a-ef047da1262a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Opta Individual Leagues</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '83d236ca-def0-4535-bd2a-ef047da1262a';
    $display->content['new-83d236ca-def0-4535-bd2a-ef047da1262a'] = $pane;
    $display->panels['middle'][0] = 'new-83d236ca-def0-4535-bd2a-ef047da1262a';
    $pane = new stdClass();
    $pane->pid = 'new-94b05052-11ac-4cf2-bfb5-06164bb65162';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-76';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '94b05052-11ac-4cf2-bfb5-06164bb65162';
    $display->content['new-94b05052-11ac-4cf2-bfb5-06164bb65162'] = $pane;
    $display->panels['middle'][1] = 'new-94b05052-11ac-4cf2-bfb5-06164bb65162';
    $pane = new stdClass();
    $pane->pid = 'new-35838d5f-90f8-44a2-8c8b-5a3b211822ab';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '35838d5f-90f8-44a2-8c8b-5a3b211822ab';
    $display->content['new-35838d5f-90f8-44a2-8c8b-5a3b211822ab'] = $pane;
    $display->panels['right'][0] = 'new-35838d5f-90f8-44a2-8c8b-5a3b211822ab';
    $pane = new stdClass();
    $pane->pid = 'new-c1083a43-8e3c-4241-9860-72e9138eafa1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1083a43-8e3c-4241-9860-72e9138eafa1';
    $display->content['new-c1083a43-8e3c-4241-9860-72e9138eafa1'] = $pane;
    $display->panels['right'][1] = 'new-c1083a43-8e3c-4241-9860-72e9138eafa1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opta_individual_leagues'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opta_match_center';
  $page->task = 'page';
  $page->admin_title = 'Opta Match Center';
  $page->admin_description = '';
  $page->path = 'opta-match-center';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_opta_match_center_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'opta_match_center';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a6675a02-7de6-43f6-beee-9161e77637a4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12e41685-11eb-4217-a6a8-237c9f0299da';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'article_page_sidebars-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12e41685-11eb-4217-a6a8-237c9f0299da';
    $display->content['new-12e41685-11eb-4217-a6a8-237c9f0299da'] = $pane;
    $display->panels['left'][0] = 'new-12e41685-11eb-4217-a6a8-237c9f0299da';
    $pane = new stdClass();
    $pane->pid = 'new-dda0129a-42ff-45b1-9cdf-552cec31bd69';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Opta Match Center</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dda0129a-42ff-45b1-9cdf-552cec31bd69';
    $display->content['new-dda0129a-42ff-45b1-9cdf-552cec31bd69'] = $pane;
    $display->panels['middle'][0] = 'new-dda0129a-42ff-45b1-9cdf-552cec31bd69';
    $pane = new stdClass();
    $pane->pid = 'new-eaaea12c-51b8-49a6-a509-4544d950c0fc';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-61';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eaaea12c-51b8-49a6-a509-4544d950c0fc';
    $display->content['new-eaaea12c-51b8-49a6-a509-4544d950c0fc'] = $pane;
    $display->panels['middle'][1] = 'new-eaaea12c-51b8-49a6-a509-4544d950c0fc';
    $pane = new stdClass();
    $pane->pid = 'new-917356ab-037b-4cd6-ab56-f871814b077d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '917356ab-037b-4cd6-ab56-f871814b077d';
    $display->content['new-917356ab-037b-4cd6-ab56-f871814b077d'] = $pane;
    $display->panels['right'][0] = 'new-917356ab-037b-4cd6-ab56-f871814b077d';
    $pane = new stdClass();
    $pane->pid = 'new-f425b049-d0b0-43e5-951f-84aef5e60b38';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f425b049-d0b0-43e5-951f-84aef5e60b38';
    $display->content['new-f425b049-d0b0-43e5-951f-84aef5e60b38'] = $pane;
    $display->panels['right'][1] = 'new-f425b049-d0b0-43e5-951f-84aef5e60b38';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-12e41685-11eb-4217-a6a8-237c9f0299da';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opta_match_center'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_profile';
  $page->task = 'page';
  $page->admin_title = 'player profile';
  $page->admin_description = '';
  $page->path = 'player_profile';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_player_profile_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'player_profile';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '26e5e418-2ee1-44d1-aede-2c9c2cd33e65';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f485bf06-dcb5-4d7c-af58-474b5e0e38ca';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f485bf06-dcb5-4d7c-af58-474b5e0e38ca';
    $display->content['new-f485bf06-dcb5-4d7c-af58-474b5e0e38ca'] = $pane;
    $display->panels['left'][0] = 'new-f485bf06-dcb5-4d7c-af58-474b5e0e38ca';
    $pane = new stdClass();
    $pane->pid = 'new-d0160d88-fe75-4623-b7aa-69e4a264f903';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-201';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0160d88-fe75-4623-b7aa-69e4a264f903';
    $display->content['new-d0160d88-fe75-4623-b7aa-69e4a264f903'] = $pane;
    $display->panels['middle'][0] = 'new-d0160d88-fe75-4623-b7aa-69e4a264f903';
    $pane = new stdClass();
    $pane->pid = 'new-1b3a70f0-6898-4729-a4b8-a037c5ee2eab';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-186';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1b3a70f0-6898-4729-a4b8-a037c5ee2eab';
    $display->content['new-1b3a70f0-6898-4729-a4b8-a037c5ee2eab'] = $pane;
    $display->panels['middle'][1] = 'new-1b3a70f0-6898-4729-a4b8-a037c5ee2eab';
    $pane = new stdClass();
    $pane->pid = 'new-d43f2916-6776-4448-bc16-7e1e734a9697';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd43f2916-6776-4448-bc16-7e1e734a9697';
    $display->content['new-d43f2916-6776-4448-bc16-7e1e734a9697'] = $pane;
    $display->panels['right'][0] = 'new-d43f2916-6776-4448-bc16-7e1e734a9697';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f485bf06-dcb5-4d7c-af58-474b5e0e38ca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_profile'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_ranking_page_league';
  $page->task = 'page';
  $page->admin_title = 'Player Ranking Page League';
  $page->admin_description = '';
  $page->path = 'player-ranking-page-league';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_player_ranking_page_league_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'player_ranking_page_league';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0a55ebf0-6ac2-435d-a6b4-1f33b23aec36';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cf8f9f82-ec84-4f74-894f-3c73130fafd4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_horarios-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf8f9f82-ec84-4f74-894f-3c73130fafd4';
    $display->content['new-cf8f9f82-ec84-4f74-894f-3c73130fafd4'] = $pane;
    $display->panels['left'][0] = 'new-cf8f9f82-ec84-4f74-894f-3c73130fafd4';
    $pane = new stdClass();
    $pane->pid = 'new-f66df742-35a1-4eb6-9e63-c5b4239609f2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f66df742-35a1-4eb6-9e63-c5b4239609f2';
    $display->content['new-f66df742-35a1-4eb6-9e63-c5b4239609f2'] = $pane;
    $display->panels['left'][1] = 'new-f66df742-35a1-4eb6-9e63-c5b4239609f2';
    $pane = new stdClass();
    $pane->pid = 'new-f931428a-d380-4415-b4bd-443680974d26';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Player Ranking Page League</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f931428a-d380-4415-b4bd-443680974d26';
    $display->content['new-f931428a-d380-4415-b4bd-443680974d26'] = $pane;
    $display->panels['middle'][0] = 'new-f931428a-d380-4415-b4bd-443680974d26';
    $pane = new stdClass();
    $pane->pid = 'new-90c6085a-c49e-4aa7-b81a-6fb931b693b7';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-91';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '90c6085a-c49e-4aa7-b81a-6fb931b693b7';
    $display->content['new-90c6085a-c49e-4aa7-b81a-6fb931b693b7'] = $pane;
    $display->panels['middle'][1] = 'new-90c6085a-c49e-4aa7-b81a-6fb931b693b7';
    $pane = new stdClass();
    $pane->pid = 'new-9afc3f05-f847-4279-b27c-1b4987ec6fc5';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9afc3f05-f847-4279-b27c-1b4987ec6fc5';
    $display->content['new-9afc3f05-f847-4279-b27c-1b4987ec6fc5'] = $pane;
    $display->panels['right'][0] = 'new-9afc3f05-f847-4279-b27c-1b4987ec6fc5';
    $pane = new stdClass();
    $pane->pid = 'new-edc567eb-b836-464e-a06b-e1160de09c28';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'edc567eb-b836-464e-a06b-e1160de09c28';
    $display->content['new-edc567eb-b836-464e-a06b-e1160de09c28'] = $pane;
    $display->panels['right'][1] = 'new-edc567eb-b836-464e-a06b-e1160de09c28';
    $pane = new stdClass();
    $pane->pid = 'new-20685e3f-ed52-4fd9-8951-892d4069d708';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'sport_lander_titulares-pane_headlines';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '20685e3f-ed52-4fd9-8951-892d4069d708';
    $display->content['new-20685e3f-ed52-4fd9-8951-892d4069d708'] = $pane;
    $display->panels['right'][2] = 'new-20685e3f-ed52-4fd9-8951-892d4069d708';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_ranking_page_league'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_ranking_page_passes';
  $page->task = 'page';
  $page->admin_title = 'Player Ranking Page Passes';
  $page->admin_description = '';
  $page->path = 'player-ranking-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_player_ranking_page_passes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'player_ranking_page_passes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b78aa52e-b425-467c-82b5-1d541c3783e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3c79dc71-a575-404d-8e2d-b7861895a801';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'article_page_sidebars-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c79dc71-a575-404d-8e2d-b7861895a801';
    $display->content['new-3c79dc71-a575-404d-8e2d-b7861895a801'] = $pane;
    $display->panels['left'][0] = 'new-3c79dc71-a575-404d-8e2d-b7861895a801';
    $pane = new stdClass();
    $pane->pid = 'new-f4afa95a-d98f-4fb6-a1a7-b077ef22f3c1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Opta Match Center</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4afa95a-d98f-4fb6-a1a7-b077ef22f3c1';
    $display->content['new-f4afa95a-d98f-4fb6-a1a7-b077ef22f3c1'] = $pane;
    $display->panels['middle'][0] = 'new-f4afa95a-d98f-4fb6-a1a7-b077ef22f3c1';
    $pane = new stdClass();
    $pane->pid = 'new-8c97db42-8f00-4eb0-a990-fa9dd9344658';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-81';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c97db42-8f00-4eb0-a990-fa9dd9344658';
    $display->content['new-8c97db42-8f00-4eb0-a990-fa9dd9344658'] = $pane;
    $display->panels['middle'][1] = 'new-8c97db42-8f00-4eb0-a990-fa9dd9344658';
    $pane = new stdClass();
    $pane->pid = 'new-08d2ae56-b2b7-43b7-b059-8201d04f9c46';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08d2ae56-b2b7-43b7-b059-8201d04f9c46';
    $display->content['new-08d2ae56-b2b7-43b7-b059-8201d04f9c46'] = $pane;
    $display->panels['right'][0] = 'new-08d2ae56-b2b7-43b7-b059-8201d04f9c46';
    $pane = new stdClass();
    $pane->pid = 'new-0432c840-c8c8-443f-9d1f-10740ed5102d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0432c840-c8c8-443f-9d1f-10740ed5102d';
    $display->content['new-0432c840-c8c8-443f-9d1f-10740ed5102d'] = $pane;
    $display->panels['right'][1] = 'new-0432c840-c8c8-443f-9d1f-10740ed5102d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_ranking_page_passes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'premium_league';
  $page->task = 'page';
  $page->admin_title = 'Premium league';
  $page->admin_description = '';
  $page->path = 'premium_league';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_premium_league_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'premium_league';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '29d553cc-ab72-4214-b42d-c38391063fee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-991f70d9-c5ff-44e3-999c-679955ed59e4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '991f70d9-c5ff-44e3-999c-679955ed59e4';
    $display->content['new-991f70d9-c5ff-44e3-999c-679955ed59e4'] = $pane;
    $display->panels['left'][0] = 'new-991f70d9-c5ff-44e3-999c-679955ed59e4';
    $pane = new stdClass();
    $pane->pid = 'new-a4a361bf-07e3-4346-b1d5-98bf799a43cd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'td_homepage_main_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4a361bf-07e3-4346-b1d5-98bf799a43cd';
    $display->content['new-a4a361bf-07e3-4346-b1d5-98bf799a43cd'] = $pane;
    $display->panels['middle'][0] = 'new-a4a361bf-07e3-4346-b1d5-98bf799a43cd';
    $pane = new stdClass();
    $pane->pid = 'new-71267008-d881-4acd-a64c-64a845078cc5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'td_dynamic_lead_links-td_homepage_bottom_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '71267008-d881-4acd-a64c-64a845078cc5';
    $display->content['new-71267008-d881-4acd-a64c-64a845078cc5'] = $pane;
    $display->panels['middle'][1] = 'new-71267008-d881-4acd-a64c-64a845078cc5';
    $pane = new stdClass();
    $pane->pid = 'new-09d7e0ec-f39a-47c9-b2ac-c31c6b74a4fb';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'mps-midbanner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '09d7e0ec-f39a-47c9-b2ac-c31c6b74a4fb';
    $display->content['new-09d7e0ec-f39a-47c9-b2ac-c31c6b74a4fb'] = $pane;
    $display->panels['middle'][2] = 'new-09d7e0ec-f39a-47c9-b2ac-c31c6b74a4fb';
    $pane = new stdClass();
    $pane->pid = 'new-d650cf60-660d-4741-bf5b-43031c760d27';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-106';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd650cf60-660d-4741-bf5b-43031c760d27';
    $display->content['new-d650cf60-660d-4741-bf5b-43031c760d27'] = $pane;
    $display->panels['middle'][3] = 'new-d650cf60-660d-4741-bf5b-43031c760d27';
    $pane = new stdClass();
    $pane->pid = 'new-afbf4487-bd9a-4d39-b099-ef695c24e955';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-81';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'afbf4487-bd9a-4d39-b099-ef695c24e955';
    $display->content['new-afbf4487-bd9a-4d39-b099-ef695c24e955'] = $pane;
    $display->panels['middle'][4] = 'new-afbf4487-bd9a-4d39-b099-ef695c24e955';
    $pane = new stdClass();
    $pane->pid = 'new-73ae4fa3-50aa-41ad-af8d-f8d3386f18f8';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73ae4fa3-50aa-41ad-af8d-f8d3386f18f8';
    $display->content['new-73ae4fa3-50aa-41ad-af8d-f8d3386f18f8'] = $pane;
    $display->panels['right'][0] = 'new-73ae4fa3-50aa-41ad-af8d-f8d3386f18f8';
    $pane = new stdClass();
    $pane->pid = 'new-f24b02aa-9a22-483e-93b3-3de6dead4e9e';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-161';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f24b02aa-9a22-483e-93b3-3de6dead4e9e';
    $display->content['new-f24b02aa-9a22-483e-93b3-3de6dead4e9e'] = $pane;
    $display->panels['right'][1] = 'new-f24b02aa-9a22-483e-93b3-3de6dead4e9e';
    $pane = new stdClass();
    $pane->pid = 'new-1b740e50-270c-443d-915b-7d058780ddbe';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-146';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1b740e50-270c-443d-915b-7d058780ddbe';
    $display->content['new-1b740e50-270c-443d-915b-7d058780ddbe'] = $pane;
    $display->panels['right'][2] = 'new-1b740e50-270c-443d-915b-7d058780ddbe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-991f70d9-c5ff-44e3-999c-679955ed59e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['premium_league'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'team_estadisticas_page';
  $page->task = 'page';
  $page->admin_title = 'Team Estadisticas Page';
  $page->admin_description = '';
  $page->path = 'team-estadisticas-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_team_estadisticas_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'team_estadisticas_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0d31caa0-39b3-4a71-97c1-0bd4df730f06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-28b4f7fd-ab59-4d0d-b69c-58dc80056f4b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_horarios-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28b4f7fd-ab59-4d0d-b69c-58dc80056f4b';
    $display->content['new-28b4f7fd-ab59-4d0d-b69c-58dc80056f4b'] = $pane;
    $display->panels['left'][0] = 'new-28b4f7fd-ab59-4d0d-b69c-58dc80056f4b';
    $pane = new stdClass();
    $pane->pid = 'new-1d6c7cfe-04db-42da-95ec-ea649cd2e96a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1d6c7cfe-04db-42da-95ec-ea649cd2e96a';
    $display->content['new-1d6c7cfe-04db-42da-95ec-ea649cd2e96a'] = $pane;
    $display->panels['left'][1] = 'new-1d6c7cfe-04db-42da-95ec-ea649cd2e96a';
    $pane = new stdClass();
    $pane->pid = 'new-7892611f-a2b7-4ed9-872e-df3a66cf312d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Team Estadisticas Page</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'plain_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7892611f-a2b7-4ed9-872e-df3a66cf312d';
    $display->content['new-7892611f-a2b7-4ed9-872e-df3a66cf312d'] = $pane;
    $display->panels['middle'][0] = 'new-7892611f-a2b7-4ed9-872e-df3a66cf312d';
    $pane = new stdClass();
    $pane->pid = 'new-9aa2ba8c-8ae7-45db-bfe1-8891697e18ec';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Team Estadisticas Page</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9aa2ba8c-8ae7-45db-bfe1-8891697e18ec';
    $display->content['new-9aa2ba8c-8ae7-45db-bfe1-8891697e18ec'] = $pane;
    $display->panels['middle'][1] = 'new-9aa2ba8c-8ae7-45db-bfe1-8891697e18ec';
    $pane = new stdClass();
    $pane->pid = 'new-ba86345a-aaec-4568-aca7-5a40e2f9b371';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-111';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ba86345a-aaec-4568-aca7-5a40e2f9b371';
    $display->content['new-ba86345a-aaec-4568-aca7-5a40e2f9b371'] = $pane;
    $display->panels['middle'][2] = 'new-ba86345a-aaec-4568-aca7-5a40e2f9b371';
    $pane = new stdClass();
    $pane->pid = 'new-07c8ea5c-4a86-4c30-8832-d2d2ba649018';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07c8ea5c-4a86-4c30-8832-d2d2ba649018';
    $display->content['new-07c8ea5c-4a86-4c30-8832-d2d2ba649018'] = $pane;
    $display->panels['right'][0] = 'new-07c8ea5c-4a86-4c30-8832-d2d2ba649018';
    $pane = new stdClass();
    $pane->pid = 'new-e6efa683-49e8-4eac-ac6d-77dac201c177';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e6efa683-49e8-4eac-ac6d-77dac201c177';
    $display->content['new-e6efa683-49e8-4eac-ac6d-77dac201c177'] = $pane;
    $display->panels['right'][1] = 'new-e6efa683-49e8-4eac-ac6d-77dac201c177';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-28b4f7fd-ab59-4d0d-b69c-58dc80056f4b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['team_estadisticas_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'team_plantel_page';
  $page->task = 'page';
  $page->admin_title = 'Team Plantel Page';
  $page->admin_description = '';
  $page->path = 'team-plantel-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_team_plantel_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'team_plantel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '85835381-5175-454d-9714-cc7c701b9fc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c530e623-ab62-4778-8d99-3c78c4f6fce0';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c530e623-ab62-4778-8d99-3c78c4f6fce0';
    $display->content['new-c530e623-ab62-4778-8d99-3c78c4f6fce0'] = $pane;
    $display->panels['left'][0] = 'new-c530e623-ab62-4778-8d99-3c78c4f6fce0';
    $pane = new stdClass();
    $pane->pid = 'new-164e7688-005a-4e65-b46e-a9684fc65386';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Team Plantel Page</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '164e7688-005a-4e65-b46e-a9684fc65386';
    $display->content['new-164e7688-005a-4e65-b46e-a9684fc65386'] = $pane;
    $display->panels['middle'][0] = 'new-164e7688-005a-4e65-b46e-a9684fc65386';
    $pane = new stdClass();
    $pane->pid = 'new-aacd7a9d-f859-4ca3-aece-bbca8771e4eb';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-196';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aacd7a9d-f859-4ca3-aece-bbca8771e4eb';
    $display->content['new-aacd7a9d-f859-4ca3-aece-bbca8771e4eb'] = $pane;
    $display->panels['middle'][1] = 'new-aacd7a9d-f859-4ca3-aece-bbca8771e4eb';
    $pane = new stdClass();
    $pane->pid = 'new-684b5a3c-02db-48cc-b9cd-914546665508';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '684b5a3c-02db-48cc-b9cd-914546665508';
    $display->content['new-684b5a3c-02db-48cc-b9cd-914546665508'] = $pane;
    $display->panels['right'][0] = 'new-684b5a3c-02db-48cc-b9cd-914546665508';
    $pane = new stdClass();
    $pane->pid = 'new-8120252f-4bab-4a96-a3ff-222a5f8f198e';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8120252f-4bab-4a96-a3ff-222a5f8f198e';
    $display->content['new-8120252f-4bab-4a96-a3ff-222a5f8f198e'] = $pane;
    $display->panels['right'][1] = 'new-8120252f-4bab-4a96-a3ff-222a5f8f198e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c530e623-ab62-4778-8d99-3c78c4f6fce0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['team_plantel_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'team_stats_page_plus';
  $page->task = 'page';
  $page->admin_title = 'Team Stats Page Plus';
  $page->admin_description = '';
  $page->path = 'team-stats-page-plus';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_team_stats_page_plus_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'team_stats_page_plus';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c2fc4400-0225-40e0-8618-a5164e835b81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c7d1cec2-f81b-45aa-b397-d3171987dde5';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'show_horarios-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c7d1cec2-f81b-45aa-b397-d3171987dde5';
    $display->content['new-c7d1cec2-f81b-45aa-b397-d3171987dde5'] = $pane;
    $display->panels['left'][0] = 'new-c7d1cec2-f81b-45aa-b397-d3171987dde5';
    $pane = new stdClass();
    $pane->pid = 'new-c03ded41-a3e4-421b-8959-cc33b5d092cb';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c03ded41-a3e4-421b-8959-cc33b5d092cb';
    $display->content['new-c03ded41-a3e4-421b-8959-cc33b5d092cb'] = $pane;
    $display->panels['left'][1] = 'new-c03ded41-a3e4-421b-8959-cc33b5d092cb';
    $pane = new stdClass();
    $pane->pid = 'new-9c23bd3b-6859-4242-ba1a-3e7bacfe9895';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Team Stats Page Plus</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9c23bd3b-6859-4242-ba1a-3e7bacfe9895';
    $display->content['new-9c23bd3b-6859-4242-ba1a-3e7bacfe9895'] = $pane;
    $display->panels['middle'][0] = 'new-9c23bd3b-6859-4242-ba1a-3e7bacfe9895';
    $pane = new stdClass();
    $pane->pid = 'new-f5808e77-ce64-437b-b187-a0f61cd575fc';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-106';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5808e77-ce64-437b-b187-a0f61cd575fc';
    $display->content['new-f5808e77-ce64-437b-b187-a0f61cd575fc'] = $pane;
    $display->panels['middle'][1] = 'new-f5808e77-ce64-437b-b187-a0f61cd575fc';
    $pane = new stdClass();
    $pane->pid = 'new-8eedc86b-bd36-44d7-a3d4-34bdb74785f0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8eedc86b-bd36-44d7-a3d4-34bdb74785f0';
    $display->content['new-8eedc86b-bd36-44d7-a3d4-34bdb74785f0'] = $pane;
    $display->panels['right'][0] = 'new-8eedc86b-bd36-44d7-a3d4-34bdb74785f0';
    $pane = new stdClass();
    $pane->pid = 'new-43b3a536-ecd6-4bc5-85fd-a378f7828dec';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43b3a536-ecd6-4bc5-85fd-a378f7828dec';
    $display->content['new-43b3a536-ecd6-4bc5-85fd-a378f7828dec'] = $pane;
    $display->panels['right'][1] = 'new-43b3a536-ecd6-4bc5-85fd-a378f7828dec';
    $pane = new stdClass();
    $pane->pid = 'new-3d7440d2-48b9-4089-a0a2-b4a23641c8a3';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-66';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d7440d2-48b9-4089-a0a2-b4a23641c8a3';
    $display->content['new-3d7440d2-48b9-4089-a0a2-b4a23641c8a3'] = $pane;
    $display->panels['top'][0] = 'new-3d7440d2-48b9-4089-a0a2-b4a23641c8a3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3d7440d2-48b9-4089-a0a2-b4a23641c8a3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['team_stats_page_plus'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'team_tournament_resultados_page';
  $page->task = 'page';
  $page->admin_title = 'Team Tournament Resultados Page';
  $page->admin_description = '';
  $page->path = 'team-tournament-resultados-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_team_tournament_resultados_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'team_tournament_resultados_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '443e6b91-1ed0-4358-afc8-8cc86ce46266';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ae12984-db08-4492-888a-215df0326134';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ae12984-db08-4492-888a-215df0326134';
    $display->content['new-9ae12984-db08-4492-888a-215df0326134'] = $pane;
    $display->panels['left'][0] = 'new-9ae12984-db08-4492-888a-215df0326134';
    $pane = new stdClass();
    $pane->pid = 'new-1fd01d18-9ca7-4f40-86f0-0672851821d4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Team Tournament Resultados Page</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1fd01d18-9ca7-4f40-86f0-0672851821d4';
    $display->content['new-1fd01d18-9ca7-4f40-86f0-0672851821d4'] = $pane;
    $display->panels['middle'][0] = 'new-1fd01d18-9ca7-4f40-86f0-0672851821d4';
    $pane = new stdClass();
    $pane->pid = 'new-d65d423f-6c91-4892-88b5-a29972d018f1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-181';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd65d423f-6c91-4892-88b5-a29972d018f1';
    $display->content['new-d65d423f-6c91-4892-88b5-a29972d018f1'] = $pane;
    $display->panels['middle'][1] = 'new-d65d423f-6c91-4892-88b5-a29972d018f1';
    $pane = new stdClass();
    $pane->pid = 'new-eda5cbd6-0fe7-459a-9e5f-295d575fd394';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eda5cbd6-0fe7-459a-9e5f-295d575fd394';
    $display->content['new-eda5cbd6-0fe7-459a-9e5f-295d575fd394'] = $pane;
    $display->panels['right'][0] = 'new-eda5cbd6-0fe7-459a-9e5f-295d575fd394';
    $pane = new stdClass();
    $pane->pid = 'new-2f693c83-32c8-4c37-90e8-5b76308026d1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2f693c83-32c8-4c37-90e8-5b76308026d1';
    $display->content['new-2f693c83-32c8-4c37-90e8-5b76308026d1'] = $pane;
    $display->panels['right'][1] = 'new-2f693c83-32c8-4c37-90e8-5b76308026d1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9ae12984-db08-4492-888a-215df0326134';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['team_tournament_resultados_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tournament_posiciones_page';
  $page->task = 'page';
  $page->admin_title = 'Tournament Posiciones Page';
  $page->admin_description = '';
  $page->path = 'tournament-posiciones-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tournament_posiciones_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tournament_posiciones_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ba960e5a-794d-4405-8ead-a5bb1545496a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9e820929-4455-486b-a864-74ceb6e800bc';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e820929-4455-486b-a864-74ceb6e800bc';
    $display->content['new-9e820929-4455-486b-a864-74ceb6e800bc'] = $pane;
    $display->panels['left'][0] = 'new-9e820929-4455-486b-a864-74ceb6e800bc';
    $pane = new stdClass();
    $pane->pid = 'new-c488d695-0de3-4568-a37f-17cf83397eaf';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Tournament Posiciones Page</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c488d695-0de3-4568-a37f-17cf83397eaf';
    $display->content['new-c488d695-0de3-4568-a37f-17cf83397eaf'] = $pane;
    $display->panels['middle'][0] = 'new-c488d695-0de3-4568-a37f-17cf83397eaf';
    $pane = new stdClass();
    $pane->pid = 'new-5f4c9be0-83f8-4847-8d7d-6eedba26cf81';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-206';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5f4c9be0-83f8-4847-8d7d-6eedba26cf81';
    $display->content['new-5f4c9be0-83f8-4847-8d7d-6eedba26cf81'] = $pane;
    $display->panels['middle'][1] = 'new-5f4c9be0-83f8-4847-8d7d-6eedba26cf81';
    $pane = new stdClass();
    $pane->pid = 'new-f88692ff-0edf-4289-b610-ba06fd335336';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f88692ff-0edf-4289-b610-ba06fd335336';
    $display->content['new-f88692ff-0edf-4289-b610-ba06fd335336'] = $pane;
    $display->panels['right'][0] = 'new-f88692ff-0edf-4289-b610-ba06fd335336';
    $pane = new stdClass();
    $pane->pid = 'new-41914859-184c-4073-afdd-924517f10343';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '41914859-184c-4073-afdd-924517f10343';
    $display->content['new-41914859-184c-4073-afdd-924517f10343'] = $pane;
    $display->panels['right'][1] = 'new-41914859-184c-4073-afdd-924517f10343';
    $pane = new stdClass();
    $pane->pid = 'new-c8cbe693-da32-4c7b-ad59-27027abcb309';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c8cbe693-da32-4c7b-ad59-27027abcb309';
    $display->content['new-c8cbe693-da32-4c7b-ad59-27027abcb309'] = $pane;
    $display->panels['right'][2] = 'new-c8cbe693-da32-4c7b-ad59-27027abcb309';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9e820929-4455-486b-a864-74ceb6e800bc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tournament_posiciones_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tournament_resultados_page';
  $page->task = 'page';
  $page->admin_title = 'Tournament Resultados Page';
  $page->admin_description = '';
  $page->path = 'tournament-resultados-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tournament_resultados_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tournament_resultados_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '80da52d2-1f95-498b-b229-c7f6db6dd14f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-672a9031-9608-46e3-8454-f6e673e0ecc5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'td_landing-horarios_sports_lander';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '672a9031-9608-46e3-8454-f6e673e0ecc5';
    $display->content['new-672a9031-9608-46e3-8454-f6e673e0ecc5'] = $pane;
    $display->panels['left'][0] = 'new-672a9031-9608-46e3-8454-f6e673e0ecc5';
    $pane = new stdClass();
    $pane->pid = 'new-3a9ebdf7-bd46-40cb-bec2-5505a75ba994';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="sports-lander-title-widgets">
<p>Tournament Resultados Page</p>
<img class="image-style-none" width="725" height="55" src="http://stage.nbcdeportes.com/sites/default/files/liga-mx-header-rebrand.jpg">
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a9ebdf7-bd46-40cb-bec2-5505a75ba994';
    $display->content['new-3a9ebdf7-bd46-40cb-bec2-5505a75ba994'] = $pane;
    $display->panels['middle'][0] = 'new-3a9ebdf7-bd46-40cb-bec2-5505a75ba994';
    $pane = new stdClass();
    $pane->pid = 'new-de178169-a3fb-4071-9cb3-24951c26ab62';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-181';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'de178169-a3fb-4071-9cb3-24951c26ab62';
    $display->content['new-de178169-a3fb-4071-9cb3-24951c26ab62'] = $pane;
    $display->panels['middle'][1] = 'new-de178169-a3fb-4071-9cb3-24951c26ab62';
    $pane = new stdClass();
    $pane->pid = 'new-e3cb3cb0-1806-43a3-a946-6a7aa97e4da9';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'td_videoplayer-td_videoplayer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3cb3cb0-1806-43a3-a946-6a7aa97e4da9';
    $display->content['new-e3cb3cb0-1806-43a3-a946-6a7aa97e4da9'] = $pane;
    $display->panels['right'][0] = 'new-e3cb3cb0-1806-43a3-a946-6a7aa97e4da9';
    $pane = new stdClass();
    $pane->pid = 'new-1e82314e-7045-493e-8218-01e0ee9cd8d9';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'mps-topmulti';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1e82314e-7045-493e-8218-01e0ee9cd8d9';
    $display->content['new-1e82314e-7045-493e-8218-01e0ee9cd8d9'] = $pane;
    $display->panels['right'][1] = 'new-1e82314e-7045-493e-8218-01e0ee9cd8d9';
    $pane = new stdClass();
    $pane->pid = 'new-e260a2d7-6eb8-46a7-b2b5-813f52a332df';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e260a2d7-6eb8-46a7-b2b5-813f52a332df';
    $display->content['new-e260a2d7-6eb8-46a7-b2b5-813f52a332df'] = $pane;
    $display->panels['right'][2] = 'new-e260a2d7-6eb8-46a7-b2b5-813f52a332df';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-672a9031-9608-46e3-8454-f6e673e0ecc5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tournament_resultados_page'] = $page;

  return $pages;

}
