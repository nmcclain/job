<?php

// $Id$

/**
 * @file
 * Rules module support for the Job module.
 */

/**
 * Implementation of hook_rules_action_info().
 */
function job_rules_action_info() {
  $items = array();
  $items['job_action_submit'] = array(
    'label' => t('Submit job'),
    'description' => t('Submit a job with default parameters'),
    'parameter' => array(
      'node' => array(
        'type' => 'node',
        'label' => t('Job Node'),
        'description' => t('The Job Node')
      ),
    ),
    'group' => t('Job'),
  );

  return $items;
}

/**
 * Action implementation: 
 */
function job_action_submit($node) {
  job_webform_submit($node->nid);
}

