<?php
/**
 * @file
 * Configuration interface for stanford_feeds_helper.
 */

function stanford_feeds_helper_configure() {
  $form = array();

  $form['stanford_feeds_helper_prevent_duplicates'] = array(
    '#type' => 'checkbox',
    '#title' => t('Prevent duplicate items.'),
    '#description' => t("Prevent duplicate items from being created across all feeds importers."),
    '#default_value' => variable_get("stanford_feeds_helper_prevent_duplicates", FALSE),
  );


  return system_settings_form($form);
}
