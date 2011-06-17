<?php
/**
 * @file
 * job.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function job_taxonomy_default_vocabularies() {
  return array(
    'job_tags' => array(
      'name' => 'Job Tags',
      'machine_name' => 'job_tags',
      'description' => '',
      'hierarchy' => '0',
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
