<?php
/**
 * @file
 * resources_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function resources_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:resources
  $menu_links['main-menu:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');


  return $menu_links;
}
