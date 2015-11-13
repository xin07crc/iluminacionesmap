<?php
/**
 * @file
 * tipo_de_contenido_material.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tipo_de_contenido_material_node_info() {
  $items = array(
    'material' => array(
      'name' => t('Material'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Materiales'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
