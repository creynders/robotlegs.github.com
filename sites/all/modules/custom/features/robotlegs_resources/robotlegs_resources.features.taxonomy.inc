<?php
/**
 * @file
 * robotlegs_resources.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function robotlegs_resources_taxonomy_default_vocabularies() {
  return array(
    'robotlegs_version' => array(
      'name' => 'Robotlegs version',
      'machine_name' => 'robotlegs_version',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
