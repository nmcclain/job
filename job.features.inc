<?php
// $Id$

/**
 * @file
 * job.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function job_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function job_node_info() {
  $items = array(
    'aws_account' => array(
      'name' => t('AWS Account'),
      'base' => 'node_content',
      'description' => t('Amazon AWS account credentials used by Jobs'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Manage execution of external jobs, such as XXX and XXX.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'job_host' => array(
      'name' => t('Job Host'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Hostname'),
      'help' => '',
    ),
    'ssh_credentials' => array(
      'name' => t('SSH Credentials'),
      'base' => 'node_content',
      'description' => t('SSH account credentials used by Jobs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
