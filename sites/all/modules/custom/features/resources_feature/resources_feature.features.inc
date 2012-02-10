<?php
/**
 * @file
 * resources_feature.features.inc
 */

/**
 * Implements hook_content_type_groups_features_default_settings().
 */
function resources_feature_content_type_groups_features_default_settings() {
 $content_type_groups = array();

 $content_type_groups['resources'] = array(
   'type' => 'resources',
   'name' => 'Resources',
   'content_types' => array(
     'resource_extension' => array(
       'name' => 'Resource: Extension',
       'weight' => '4',
     ),
     'resource_guide' => array(
       'name' => 'Resource: Guide',
       'weight' => '5',
     ),
     'resource_utility' => array(
       'name' => 'Resource: Utility',
       'weight' => '6',
     ),
   ),
 );

 return $content_type_groups;
}

/**
 * Implements hook_views_api().
 */
function resources_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function resources_feature_node_info() {
  $items = array(
    'resource_extension' => array(
      'name' => t('Resource: Extension'),
      'base' => 'node_content',
      'description' => t('Extensions and add-ons to the RL framework'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource_guide' => array(
      'name' => t('Resource: Guide'),
      'base' => 'node_content',
      'description' => t('Guides, tutorials, how-to\'s, examples'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource_utility' => array(
      'name' => t('Resource: Utility'),
      'base' => 'node_content',
      'description' => t('Utilities, tools, templates to be used in IDE\'s, everything that allows for working with RL more easily, BUT IS NOT AN EXTENSION TO THE FRAMEWORK'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
