<?php
/**
 * @file
 * pro_101_seo_infrastructure.metatag.inc
 */

/**
 * Implements hook_metatag_config_default().
 */
function pro_101_seo_infrastructure_metatag_config_default() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->cid = '2';
  $config->instance = 'node:blog';
  $config->config = array();
  $export['node:blog'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->cid = '3';
  $config->instance = 'node:page';
  $config->config = array();
  $export['node:page'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->cid = '4';
  $config->instance = 'node:specialty';
  $config->config = array();
  $export['node:specialty'] = $config;

  return $export;
}
