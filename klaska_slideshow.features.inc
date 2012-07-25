<?php
/**
 * @file
 * klaska_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function klaska_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function klaska_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function klaska_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slide_img.
  $styles['slide_img'] = array(
    'name' => 'slide_img',
    'effects' => array(
      4 => array(
        'label' => 'Změnit velikost se zachováním poměru stran a oříznout',
        'help' => 'Nejprve se provede změna velikosti se zachováním poměru stran původního obrázku a teprve potom se ořízne delší rozměr. Vhodné pro vytváření náhledů s pravidelnými rozměry bez roztahování obrázku.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '875',
          'height' => '342',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function klaska_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('Přidá slideshow'),
      'has_title' => '1',
      'title_label' => t('Slideshow'),
      'help' => '',
    ),
  );
  return $items;
}
