<?php

/**
 * @file
 * Taxonomy Machine Name Migrate Module File.
 */

/**
 * Class MigrateTaxonomyTermMachineNameHandler
 */
class MigrateTaxonomyTermMachineNameHandler extends MigrateDestinationHandler {
  /**
   * Specify list of types supports.
   */
  public function __construct() {
    $this->registerTypes(array('taxonomy_term'));
  }

  /**
   * List of fields supported.
   *
   * @return array
   *   List.
   */
  public function fields() {
    return array(
      'machine_name' => t('Machine name'),
    );
  }
}

/**
 * Class MigrateDestinationTermMachineName
 */
class MigrateDestinationTermMachineName extends MigrateDestinationTerm {
  /**
   * Attempt to find a term that has the same machine name.
   *
   * @param object $term
   *   A taxonomy term object with at least the machine
   *   name and vid properties defined.
   *
   * @return object
   *   A matching taxonomy term object if found, otherwise FALSE.
   */
  public function findMatchingTerm($term) {
    $candidate = taxonomy_term_machine_name_load(trim($term->machine_name), $term->vid);

    if (is_object($candidate)) {
      return $candidate;
    }
    else {
      return FALSE;
    }
  }
}

/**
 * Class MigrateTaxonomyTermReferenceMachineNameFieldHandler
 */
class MigrateTaxonomyTermReferenceMachineNameFieldHandler extends MigrateTaxonomyTermReferenceFieldHandler {
  /**
   * Implementation of MigrateFieldHandler::fields().
   *
   * @param $type
   *  The field type.
   * @param $instance
   *  Instance info for the field.
   * @param Migration $migration
   *  The migration context for the parent field. We can look at the mappings
   *  and determine which subfields are relevant.
   * @return array
   */
  public function fields($type, $instance, $migration = NULL) {
    $fields = parent::fields($type, $instance, $migration);

    $fields['machine_name'] = t('Option: Set to TRUE to use machine_name instead of name to determinate source ID');

    return $fields;
  }

  public function prepare($entity, array $field_info, array $instance, array $values) {
    if (isset($values['arguments'])) {
      $arguments = $values['arguments'];
      unset($values['arguments']);
    }
    else {
      $arguments = array();
    }
    if (empty($values[0])) {
      $values = array();
    }

    $tids = array();
    if (isset($arguments['source_type']) && $arguments['source_type'] == 'tid') {
      // Nothing to do. We have tids already.
      $tids = $values;
    }
    elseif ($values) {
      $vocab_name = $field_info['settings']['allowed_values'][0]['vocabulary'];
      $names = taxonomy_vocabulary_get_names();

      // Get the vocabulary for this term
      if (isset($field_info['settings']['allowed_values'][0]['vid'])) {
        $vid = $field_info['settings']['allowed_values'][0]['vid'];
      }
      else {
        $vid = $names[$vocab_name]->vid;
      }

      // Remove leading and trailing spaces in term names
      $values = array_map('trim', $values);

      // Cannot use taxonomy_term_load_multiple() since we have an array of names.
      // It wants a singular value. This query may return case-insensitive
      // matches.
      $field_name = (empty($arguments['machine_name']) ? 'name' : 'machine_name');
      $existing_terms = db_select('taxonomy_term_data', 'td')
        ->fields('td', array('tid', $field_name))
        ->condition('td.' . $field_name, $values, 'IN')
        ->condition('td.vid', $vid)
        ->execute()
        ->fetchAllKeyed(1, 0);
      // If we're ignoring case, change both the matched term name keys and the
      // source values to lowercase.
      if (isset($arguments['ignore_case']) && $arguments['ignore_case']) {
        $ignore_case = TRUE;
        $existing_terms = array_change_key_case($existing_terms);
        foreach ($values as $value) {
          $lower_values[$value] = strtolower($value);
        }
      }
      else {
        $ignore_case = FALSE;
      }
      foreach ($values as $value) {
        if (isset($existing_terms[$value])) {
          $tids[] = $existing_terms[$value];
        }
        elseif ($ignore_case && isset($existing_terms[$lower_values[$value]])) {
          $tids[] = $existing_terms[$lower_values[$value]];
        }
        elseif (!empty($arguments['create_term'])) {
          $new_term = new stdClass();
          $new_term->vid = $vid;
          $new_term->name = $value;
          if (!empty($arguments['machine_name'])) {
            $new_term->machine_name = $value;
          }
          $new_term->vocabulary_machine_name = $vocab_name;

          // This term is being created with no fields, but we should still call
          // field_attach_validate() before saving, as that invokes
          // hook_field_attach_validate().
          field_attach_validate('taxonomy_term', $new_term);

          taxonomy_term_save($new_term);
          $tids[] = $new_term->tid;
          // Add newly created term to existing array.
          $existing_terms[$value] = $new_term->tid;
        }
        else {
          // No term is found for the source value and none is set to be
          // created: warn that data has not been imported.
          $migration = Migration::currentMigration();
          $migration->saveMessage(t("No matching taxonomy term found for source value '@value' in vocabulary %vocab.", array(
            '@value' => $value,
            '%vocab' => $names[$vocab_name]->name,
          )), MigrationBase::MESSAGE_INFORMATIONAL);
        }
      }
    }

    $language = $this->getFieldLanguage($entity, $field_info, $arguments);
    $result = array();
    $delta = 0;
    foreach ($tids as $tid) {
      if (is_array($language)) {
        $current_language = $language[$delta];
      }
      else {
        $current_language = $language;
      }
      $result[$current_language][] = array('tid' => $tid);
      $delta++;
    }
    return $result;
  }
}
