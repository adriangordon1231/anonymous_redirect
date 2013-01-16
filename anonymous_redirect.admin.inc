<?php

/**
 * Form builder function for Anonymous Redirect settings.
 */
function anonymous_redirect_settings($form, &$form_state) {
  $example = 'http://example.com';
  $form['anonymous_redirect_enable'] = array(
    '#type' => 'radios',
    '#title' => t('Enable Anonymous Redirect'),
    '#default_value' => variable_get('anonymous_redirect_enable', 0),
    '#options' => array(t('Disabled'), t('Enabled')),
  );
  $form['anonymous_redirect_base'] = array(
    '#type' => 'textfield',
    '#title' => t('Redirect Base URL'),
    '#default_value' => variable_get('anonymous_redirect_base', ''),
    '#description' => t('Include <em>http://</em> and NO trailing slash. For example, <em>!example</em> or <em>!example2</em>.', array(
      '!example' => $example,
      '!example2' => $example . '/drupal',
    )),
  );
  if (module_exists('elements')) {
    $form['anonymous_redirect_base']['#placeholder'] = 'http://www.example.com';
  }
  return system_settings_form($form);
}
