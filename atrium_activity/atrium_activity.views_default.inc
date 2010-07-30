<?php

/**
 * Implementation of hook_views_default_views().
 */
function atrium_activity_views_default_views() {
  $views = array();

  // Exported view: activity_listing
  $view = new view;
  $view->name = 'activity_listing';
  $view->description = 'Atrium > Activity listing';
  $view->tag = 'atrium';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'group_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'group_nid',
      'table' => 'atrium_og_ancestry',
      'field' => 'group_nid',
      'relationship' => 'none',
    ),
    'feature' => array(
      'label' => '',
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'feature',
      'table' => 'spaces_node',
      'field' => 'feature',
      'relationship' => 'none',
    ),
    'atrium_activity_timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'atrium_activity_timestamp',
      'table' => 'comments',
      'field' => 'atrium_activity_timestamp',
      'relationship' => 'none',
      'date_format' => 'time',
      'custom_date_format' => '',
    ),
    'atrium_activity' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'time_horizon' => '30',
      'exclude' => 0,
      'id' => 'atrium_activity',
      'table' => 'comments',
      'field' => 'atrium_activity',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'timestamp' => array(
      'label' => '',
      'link_to_node' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'atrium_activity_timestamp_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'atrium_activity_timestamp_1',
      'table' => 'comments',
      'field' => 'atrium_activity_timestamp',
      'relationship' => 'none',
      'date_format' => 'day',
      'custom_date_format' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'current' => array(
      'operator' => 'active',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'current',
      'table' => 'spaces',
      'field' => 'current',
      'relationship' => 'none',
    ),
    'update_type' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'update_type',
      'table' => 'node',
      'field' => 'update_type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Recent activity');
  $handler->override_option('empty', 'No recent activity found.');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 15);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => 'atrium_activity_timestamp_1',
    'override' => 0,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'group_nid' => 'group_nid',
      'feature' => 'feature',
      'atrium_activity_timestamp' => 'atrium_activity_timestamp',
      'atrium_activity' => 'atrium_activity',
      'timestamp' => 'timestamp',
      'atrium_activity_timestamp_1' => 'atrium_activity_timestamp_1',
    ),
    'info' => array(
      'group_nid' => array(
        'separator' => '',
      ),
      'feature' => array(
        'separator' => '',
      ),
      'atrium_activity_timestamp' => array(
        'separator' => '',
      ),
      'atrium_activity' => array(
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
      'atrium_activity_timestamp_1' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('block', 'Recent activity', 'block_1');
  $handler->override_option('block_description', 'Recent activity');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Files', 'block_2');
  $handler->override_option('fields', array(
    'group_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'group_nid',
      'table' => 'atrium_og_ancestry',
      'field' => 'group_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'feature' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'feature',
      'table' => 'spaces_node',
      'field' => 'feature',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'atrium_activity_timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'time_horizon' => 30,
      'exclude' => 0,
      'id' => 'atrium_activity_timestamp',
      'table' => 'comments',
      'field' => 'atrium_activity_timestamp',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'date_format' => 'reldate',
      'custom_date_format' => '',
    ),
    'atrium_activity_upload' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'time_horizon' => 30,
      'exclude' => 0,
      'id' => 'atrium_activity_upload',
      'table' => 'comments',
      'field' => 'atrium_activity_upload',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Latest files');
  $handler->override_option('empty', 'No recent files found.');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 0,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'group_nid' => 'group_nid',
      'filemime' => 'filemime',
      'filename' => 'filemime',
      'filemime_1' => 'filemime',
      'filename_1' => 'filemime',
      'atrium_activity_timestamp' => 'atrium_activity_timestamp',
      'atrium_activity' => 'atrium_activity',
    ),
    'info' => array(
      'group_nid' => array(
        'separator' => '',
      ),
      'filemime' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'filename' => array(
        'sortable' => 0,
        'separator' => '<br/>',
      ),
      'filemime_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'filename_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'atrium_activity_timestamp' => array(
        'separator' => '',
      ),
      'atrium_activity' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('block_description', 'Latest files');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'User activity', 'block_3');
  $handler->override_option('fields', array(
    'group_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'group_nid',
      'table' => 'atrium_og_ancestry',
      'field' => 'group_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'feature' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'feature',
      'table' => 'spaces_node',
      'field' => 'feature',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'atrium_activity_timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'time_horizon' => 30,
      'exclude' => 0,
      'id' => 'atrium_activity_timestamp',
      'table' => 'comments',
      'field' => 'atrium_activity_timestamp',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'date_format' => 'reldate',
      'custom_date_format' => '',
    ),
    'atrium_activity' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'time_horizon' => '90',
      'exclude' => 0,
      'id' => 'atrium_activity',
      'table' => 'comments',
      'field' => 'atrium_activity',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_node' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'uid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '%1\'s activity',
      'breadcrumb' => '',
      'default_argument_type' => 'user',
      'default_argument' => '',
      'validate_type' => 'user',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'book' => 0,
        'event' => 0,
        'feed_ical' => 0,
        'feed_ical_item' => 0,
        'casetracker_basic_case' => 0,
        'casetracker_basic_project' => 0,
        'group' => 0,
        'profile' => 0,
        'shoutbox' => 0,
        'admin_message' => 0,
        'feedapi_node' => 0,
        'feed_reader' => 0,
        'imageset' => 0,
        'page' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '5' => 0,
        '1' => 0,
        '2' => 0,
        '6' => 0,
        '4' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'update_type' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'update_type',
      'table' => 'node',
      'field' => 'update_type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'group_nid' => 'group_nid',
      'feature' => 'feature',
      'atrium_activity_timestamp' => 'atrium_activity_timestamp',
      'atrium_activity' => 'atrium_activity',
      'timestamp' => 'timestamp',
    ),
    'info' => array(
      'group_nid' => array(
        'separator' => '',
      ),
      'feature' => array(
        'separator' => '',
      ),
      'atrium_activity_timestamp' => array(
        'separator' => '',
      ),
      'atrium_activity' => array(
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('block_description', 'User\'s activity');
  $handler->override_option('block_caching', -1);
  $translatables['activity_listing'] = array(
    t('Defaults'),
    t('Files'),
    t('Latest files'),
    t('No recent activity found.'),
    t('No recent files found.'),
    t('Recent activity'),
    t('User activity'),
    t('User\'s activity'),
  );

  $views[$view->name] = $view;

  return $views;
}