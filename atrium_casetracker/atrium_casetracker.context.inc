<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_casetracker_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'casetracker_book';
  $context->description = '';
  $context->tag = 'Casetracker';
  $context->conditions = array(
    'bookroot' => array(
      'values' => array(
        'casetracker_basic_project' => 'casetracker_basic_project',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'diff-inline' => array(
          'module' => 'diff',
          'delta' => 'inline',
          'region' => 'right',
          'weight' => 0,
        ),
        'atrium_book-book' => array(
          'module' => 'atrium_book',
          'delta' => 'book',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'casetracker',
  );
  $context->condition_mode = 0;

  $translatables['casetracker_book'] = array(
    t('Casetracker'),
  );

  $export['casetracker_book'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'casetracker_listing';
  $context->description = '';
  $context->tag = 'Casetracker';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'casetracker_basic_case' => 'casetracker_basic_case',
        'casetracker_basic_project' => 'casetracker_basic_project',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'views' => array(
      'values' => array(
        'casetracker_cases' => 'casetracker_cases',
        'casetracker_projects' => 'casetracker_projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'atrium_casetracker-filters' => array(
          'module' => 'atrium_casetracker',
          'delta' => 'filters',
          'region' => 'right',
          'weight' => 2,
        ),
        'views-casetracker_cases-block_2' => array(
          'module' => 'views',
          'delta' => 'casetracker_cases-block_2',
          'region' => 'right',
          'weight' => 3,
        ),
        'views-3de5a072e9754aa7bce60e3f05d1538e' => array(
          'module' => 'views',
          'delta' => '3de5a072e9754aa7bce60e3f05d1538e',
          'region' => 'page_tools',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'casetracker',
  );
  $context->condition_mode = 0;

  $translatables['casetracker_listing'] = array(
    t('Casetracker'),
  );

  $export['casetracker_listing'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'casetracker_project';
  $context->description = '';
  $context->tag = 'Casetracker';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'casetracker_basic_project' => 'casetracker_basic_project',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-casetracker_cases-block_1' => array(
          'module' => 'views',
          'delta' => 'casetracker_cases-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['casetracker_project'] = array(
    t('Casetracker'),
  );

  $export['casetracker_project'] = $context;
  return $export;
}