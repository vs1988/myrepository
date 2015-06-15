<?php

function form_riverdelta_custom($form, &$form_state) {

  $form['description'] = array(
    '#type' => 'item',
    '#title' => t('A form with required fields'),
  );

  $form['name'] = array(
    '#type' => 'fieldset',
    '#title' => t('Name'),
    // Make the fieldset collapsible.
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  // Make these fields required.
  $form['name']['first'] = array(
    '#type' => 'textfield',
    '#title' => t('name'),
    '#required' => TRUE,
  );
  
   $form['name']['usersname'] = array(
    '#type' => 'textfield',
    '#title' => t('Usersname:'),
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );
  return $form;
}


