<?php

/**
 * @file
 * Taxonomy Machine Name API File.
 */

/**
 * Provides a case-insensitive and trimmed matching.
 *
 * @param string     $machine_name
 *   Machine name of the term to search for.
 * @param int|object $vocabulary
 *   Vocabulary machine name to limit the search.
 *
 * @return object|bool
 *   Matching term object or FALSE if not found.
 */
function taxonomy_term_machine_name_load($machine_name, $vocabulary) {
  $conditions = array('machine_name' => trim($machine_name));

  // Support for machine_name form callback.
  $args = func_get_args();
  if (isset($args[2]['term']) && is_object($args[2]['term'])) {
    $vocabulary = $args[2]['term']->vocabulary_machine_name;
  }

  // Load vocabulary from its machine name.
  if (is_string($vocabulary)) {
    $vocabularies = &drupal_static(__FUNCTION__);

    if (NULL === $vocabularies) {
      $vocabularies = taxonomy_vocabulary_get_names();
    }

    $vocabulary = $vocabularies[$vocabulary];
  }

  if (is_object($vocabulary)) {
    $conditions['vid'] = $vocabulary->vid;
  }
  elseif (is_numeric($vocabulary)) {
    $conditions['vid'] = (int) $vocabulary;
  }
  else {
    return FALSE;
  }

  $term = taxonomy_term_load_multiple(array(), $conditions);

  return $term ? reset($term) : FALSE;
}
