<?php
/**
 * @file
 * pro_101_seo_infrastructure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_seo_infrastructure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access google analytics reports.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'google_analytics_reports',
  );

  // Exported permission: administer chart.
  $permissions['administer chart'] = array(
    'name' => 'administer chart',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'chart',
  );

  // Exported permission: administer consumers.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer google analytics reports.
  $permissions['administer google analytics reports'] = array(
    'name' => 'administer google analytics reports',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'google_analytics_api',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer oauth.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'path',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'path',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'metatag',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: oauth authorize any consumers.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: oauth register any consumers.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: perform content analysis.
  $permissions['perform content analysis'] = array(
    'name' => 'perform content analysis',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'contentanalysis',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'googleanalytics',
  );

  return $permissions;
}
