<?php

/**
 * Implementation of hook_strongarm().
 */
function wi1init_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = '0';
  $export['date_default_timezone'] = $strongarm;

  return $export;
}
