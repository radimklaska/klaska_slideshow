<?php
/**
 * @file
 * klaska_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function klaska_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'více';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Řadit dle';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Výchozí',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_article_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_article_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_article_image' => 'field_article_image',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Vztah: Obsah: Cíl (field_slide_refnode) */
  $handler->display->display_options['relationships']['field_slide_refnode_nid']['id'] = 'field_slide_refnode_nid';
  $handler->display->display_options['relationships']['field_slide_refnode_nid']['table'] = 'field_data_field_slide_refnode';
  $handler->display->display_options['relationships']['field_slide_refnode_nid']['field'] = 'field_slide_refnode_nid';
  $handler->display->display_options['relationships']['field_slide_refnode_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_slide_refnode_nid']['delta'] = '-1';
  /* Pole: Obsah: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_slide_refnode_nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Pole: Obsah: Obrázek */
  $handler->display->display_options['fields']['field_slideshow_slide']['id'] = 'field_slideshow_slide';
  $handler->display->display_options['fields']['field_slideshow_slide']['table'] = 'field_data_field_slideshow_slide';
  $handler->display->display_options['fields']['field_slideshow_slide']['field'] = 'field_slideshow_slide';
  $handler->display->display_options['fields']['field_slideshow_slide']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['path'] = '[nid]';
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_slide']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_slide']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_slide']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_slide']['settings'] = array(
    'image_style' => 'slide_img',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slideshow_slide']['field_api_classes'] = 0;
  /* Sort criterion: Obsah: Datum vytvoření */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Obsah: Vydáno */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Obsah: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slide' => 'slide',
  );

  /* Display: Blok-slide */
  $handler = $view->new_display('block', 'Blok-slide', 'block_1');
  $translatables['slideshow'] = array(
    t('Master'),
    t('více'),
    t('Použít'),
    t('Reset'),
    t('Řadit dle'),
    t('Asc'),
    t('Desc'),
    t('field_slide_refnode'),
    t('Nid'),
    t('node/[nid]'),
    t('[nid]'),
    t('Blok-slide'),
  );
  $export['slideshow'] = $view;

  return $export;
}
