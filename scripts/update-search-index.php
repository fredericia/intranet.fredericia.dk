<?php
// Will change index used by elasticsearch. Used when we copy prod db to preprod, test and dev.
// Delete this if we find a way to add this to a featues or settings.php
// Usage, drush scr ../scripts/update-search-index.php --env=<preprod|test|dev>
// mmh@bellcom.dk, 2015

$env = drush_get_option('env');
if (empty($env)) {
  echo "USAGE: cd public_html && drush scr ../scripts/update-search-index.php --env=<preprod|test|dev>\n";
}
  else {
  $newindex = $env."_intranet_search";

  $indexes = array("default_user_index", "default_node_index");

  foreach ($indexes as $index) {

    $sql = 'SELECT options FROM {search_api_index} WHERE machine_name = \''.$index.'\';';
    $options = unserialize(db_query($sql)->fetchField());
    $oldindex = $options['index_name']['index'];

    echo "Changing ".$index." from ".$oldindex." to ".$newindex."\n";
    $options['index_name']['index'] = $newindex;
    db_update('search_api_index')
      ->fields(array('options' => serialize($options), ))
      ->condition('machine_name', $index)
      ->execute();
  }
}
