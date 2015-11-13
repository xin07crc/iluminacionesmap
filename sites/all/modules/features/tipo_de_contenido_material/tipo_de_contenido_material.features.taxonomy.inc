<?php
/**
 * @file
 * tipo_de_contenido_material.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tipo_de_contenido_material_taxonomy_default_vocabularies() {
  return array(
    'lista_materiales' => array(
      'name' => 'Lista materiales',
      'machine_name' => 'lista_materiales',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
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
