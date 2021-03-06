<?php

/**
 * Implementation of hook_strongarm().
 */
function devtrac_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_default_state';
  $strongarm->value = '1';
  $export['collapsiblock_default_state'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_settings';
  $strongarm->value = array(
    'block-devtrack_module-4' => '3',
    'block-quicktabs-geosearch' => '1',
  );
  $export['collapsiblock_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_slide_speed';
  $strongarm->value = '200';
  $export['collapsiblock_slide_speed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_slide_type';
  $strongarm->value = '1';
  $export['collapsiblock_slide_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_imagecache_preset';
  $strongarm->value = '0';
  $export['colorbox_imagecache_preset'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_imagefield_gallery';
  $strongarm->value = '3';
  $export['colorbox_imagefield_gallery'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_inline';
  $strongarm->value = 0;
  $export['colorbox_inline'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_actionitem';
  $strongarm->value = '2';
  $export['comment_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_actionitem';
  $strongarm->value = 0;
  $export['comment_anonymous_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fieldtrip';
  $strongarm->value = 0;
  $export['comment_anonymous_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ftritem';
  $strongarm->value = 0;
  $export['comment_anonymous_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_place';
  $strongarm->value = 0;
  $export['comment_anonymous_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_user_profile';
  $strongarm->value = 0;
  $export['comment_anonymous_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_actionitem';
  $strongarm->value = '3';
  $export['comment_controls_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_fieldtrip';
  $strongarm->value = '3';
  $export['comment_controls_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ftritem';
  $strongarm->value = '3';
  $export['comment_controls_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_place';
  $strongarm->value = '3';
  $export['comment_controls_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_user_profile';
  $strongarm->value = '3';
  $export['comment_controls_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_actionitem';
  $strongarm->value = '4';
  $export['comment_default_mode_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fieldtrip';
  $strongarm->value = '4';
  $export['comment_default_mode_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ftritem';
  $strongarm->value = '4';
  $export['comment_default_mode_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_place';
  $strongarm->value = '4';
  $export['comment_default_mode_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_user_profile';
  $strongarm->value = '4';
  $export['comment_default_mode_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_actionitem';
  $strongarm->value = '1';
  $export['comment_default_order_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_fieldtrip';
  $strongarm->value = '1';
  $export['comment_default_order_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ftritem';
  $strongarm->value = '1';
  $export['comment_default_order_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_place';
  $strongarm->value = '1';
  $export['comment_default_order_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_user_profile';
  $strongarm->value = '1';
  $export['comment_default_order_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_actionitem';
  $strongarm->value = '50';
  $export['comment_default_per_page_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fieldtrip';
  $strongarm->value = '50';
  $export['comment_default_per_page_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ftritem';
  $strongarm->value = '50';
  $export['comment_default_per_page_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_place';
  $strongarm->value = '50';
  $export['comment_default_per_page_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_user_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fieldtrip';
  $strongarm->value = '0';
  $export['comment_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_actionitem';
  $strongarm->value = '0';
  $export['comment_form_location_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fieldtrip';
  $strongarm->value = '0';
  $export['comment_form_location_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ftritem';
  $strongarm->value = '0';
  $export['comment_form_location_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_place';
  $strongarm->value = '0';
  $export['comment_form_location_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_user_profile';
  $strongarm->value = '0';
  $export['comment_form_location_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ftritem';
  $strongarm->value = '0';
  $export['comment_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_place';
  $strongarm->value = '0';
  $export['comment_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_actionitem';
  $strongarm->value = '0';
  $export['comment_preview_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fieldtrip';
  $strongarm->value = '1';
  $export['comment_preview_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ftritem';
  $strongarm->value = '1';
  $export['comment_preview_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_place';
  $strongarm->value = '1';
  $export['comment_preview_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_user_profile';
  $strongarm->value = '1';
  $export['comment_preview_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_actionitem';
  $strongarm->value = '0';
  $export['comment_subject_field_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fieldtrip';
  $strongarm->value = '1';
  $export['comment_subject_field_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ftritem';
  $strongarm->value = '1';
  $export['comment_subject_field_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_place';
  $strongarm->value = '1';
  $export['comment_subject_field_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_user_profile';
  $strongarm->value = '1';
  $export['comment_subject_field_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_user_profile';
  $strongarm->value = '0';
  $export['comment_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_settings';
  $strongarm->value = array(
    'view' => array(
      'fieldtrip' => array(
        0 => 1,
        1 => 2,
        2 => 3,
      ),
      'ftritem' => array(
        0 => 1,
        1 => 2,
        2 => 3,
      ),
    ),
    'view_own' => array(
      'fieldtrip' => array(
        0 => 1,
        1 => 2,
        2 => 3,
      ),
      'ftritem' => array(
        0 => 1,
        1 => 2,
        2 => 3,
      ),
    ),
    'per_node' => array(
      'fieldtrip' => 1,
      'ftritem' => 0,
    ),
    'priority' => array(
      'fieldtrip' => '0',
      'ftritem' => '0',
    ),
  );
  $export['content_access_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_actionitem';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '5',
    'author' => '6',
    'options' => '7',
    'comment_settings' => '3',
    'menu' => '4',
    'book' => '10',
    'path' => '8',
    'print' => '30',
  );
  $export['content_extra_weights_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_fieldtrip';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '9',
    'author' => '11',
    'options' => '12',
    'comment_settings' => '10',
    'menu' => '8',
    'taxonomy' => '-3',
    'book' => '14',
    'path' => '13',
    'print' => '15',
    'custom_breadcrumbs' => '16',
  );
  $export['content_extra_weights_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ftritem';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '6',
    'author' => '8',
    'options' => '9',
    'comment_settings' => '7',
    'menu' => '3',
    'taxonomy' => '-4',
    'book' => '11',
    'path' => '10',
    'print' => '13',
    'custom_breadcrumbs' => '12',
  );
  $export['content_extra_weights_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_place';
  $strongarm->value = array(
    'title' => '-1',
    'revision_information' => '8',
    'author' => '11',
    'options' => '12',
    'comment_settings' => '9',
    'menu' => '7',
    'taxonomy' => '0',
    'book' => '10',
    'path' => '13',
    'print' => '14',
  );
  $export['content_extra_weights_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_user_profile';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'comment_settings' => '2',
    'menu' => '-3',
    'taxonomy' => '-4',
    'book' => '-2',
    'path' => '3',
    'print' => '5',
    'custom_breadcrumbs' => '4',
  );
  $export['content_extra_weights_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_user_profile';
  $strongarm->value = 1;
  $export['content_profile_use_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_user_profile';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => 'full',
    'edit_link' => 0,
    'edit_tab' => 'sub',
    'add_link' => 1,
    'page_redirect' => '1',
    'edit_page_redirect' => '0',
    'values' => array(
      0 => 2,
      1 => 3,
      2 => 4,
      3 => 5,
      4 => 6,
    ),
  );
  $export['content_profile_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hidden_comment_default_reasons';
  $strongarm->value = 'Mistake
Comment No Longer Relevant
Other';
  $export['hidden_comment_default_reasons'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array(
    'Add another item' => 'Add another photo',
    'Publish' => 'Restore',
    'This action can be reverted by the unhide functionality. Not be scared!' => 'This action can be reversed later by clicking "unhide".',
    'Unpublish' => 'Remove',
    'View' => 'Overview',
  );
  $export['locale_custom_strings_en'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_actionitem';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_book'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fieldtrip';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ftritem';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_place';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_user_profile';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_user_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_openstreetmap_country';
  $strongarm->value = 'UG';
  $export['openlayers_geosearch_openstreetmap_country'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_openstreetmap_maxresults';
  $strongarm->value = '15';
  $export['openlayers_geosearch_openstreetmap_maxresults'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_geofield';
  $strongarm->value = 'Devtrac:the_geom';
  $export['openlayers_geosearch_wfs_geofield'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_layer';
  $strongarm->value = 'HealthUnits';
  $export['openlayers_geosearch_wfs_layer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_namespace';
  $strongarm->value = 'Devtrac';
  $export['openlayers_geosearch_wfs_namespace'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_queryfield';
  $strongarm->value = 'name';
  $export['openlayers_geosearch_wfs_queryfield'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_resultfields';
  $strongarm->value = 'gml:name,Devtrac:district';
  $export['openlayers_geosearch_wfs_resultfields'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_geosearch_wfs_url';
  $strongarm->value = 'http://geoserver.mountbatten.net/wfs';
  $export['openlayers_geosearch_wfs_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_page_orientation';
  $strongarm->value = 'portrait';
  $export['print_pdf_page_orientation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quicktabs_tabstyle';
  $strongarm->value = 'Zen';
  $export['quicktabs_tabstyle'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_footer';
  $strongarm->value = '<a href="http://www.unicef.org" target="_blank" ><span class="uniceflogo"></span>(c) Unicef Uganda.</a><br/>
<a href="http://www.mountbatten.net" target="_blank" ><span class="mblogo"></span>Built by Mountbatten Ltd.</a>
<br/><div class="uganda"></div><div  class="hosted">Hosted in Uganda.</div>
<div class="text-footer"><p>All Ugandan data layers displayed are from the <a href="http://www.ugandaclusters.ug/geo-im.htm" class="text-footer-links">Geo-Information Management Working Group.</a> <!-- & <a href="http://www.geonames.org/">Geonames</a> --></p></div>
<div class="license"><a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/"><img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by-sa/3.0/80x15.png" /></a><br />This work by <a xmlns:cc="http://creativecommons.org/ns#" href="http://www.devtrac.ug" property="cc:attributionName" rel="cc:attributionURL">UNICEF Uganda</a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/">Creative Commons Attribution-ShareAlike 3.0 Unported License</a>.</div>';
  $export['site_footer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_actionitem' => 0,
    'toggle_node_info_bbsync' => 1,
    'toggle_node_info_book' => 0,
    'toggle_node_info_fieldtrip' => 0,
    'toggle_node_info_ftritem' => 0,
    'toggle_node_info_page' => 0,
    'toggle_node_info_place' => 0,
    'toggle_node_info_questionaire_question' => 1,
    'toggle_node_info_story' => 1,
    'toggle_node_info_user_profile' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'collapsiblock_block' => 'div.block',
    'collapsiblock_title' => '.content a.detail button',
    'collapsiblock_content' => '.content ul',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_actionitem';
  $strongarm->value = '1';
  $export['upload_actionitem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_fieldtrip';
  $strongarm->value = '0';
  $export['upload_fieldtrip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_ftritem';
  $strongarm->value = '1';
  $export['upload_ftritem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_place';
  $strongarm->value = '0';
  $export['upload_place'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_user_profile';
  $strongarm->value = '0';
  $export['upload_user_profile'] = $strongarm;

  return $export;
}
