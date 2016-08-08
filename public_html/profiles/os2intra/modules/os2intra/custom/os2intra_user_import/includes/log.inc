<?php
/**
 * Save log message to db
 */
function os2intra_user_import_save_log($uuid, $message) {
  try {
    db_insert('os2intra_user_import_log')
      ->fields(array(
        'uuid'    => $uuid,
        'message' => $message,
        'created' => time(),
      ))
      ->execute();

    return TRUE;

  } catch (PDOException $e) {
    return FALSE;
  }
}

/**
 * Clear log
 */
function os2intra_user_import_clear_log() {
  try {
    db_query('DELETE FROM {os2intra_user_import_log} WHERE 1')->execute();
    return TRUE;

  } catch (PDOException $e) {
    return FALSE;
  }
}

/**
 * Page callback for log
 */
function os2intra_user_import_log() {
  try {
    $result = db_select('os2intra_user_import_log', 'l')
      ->fields('l')
      ->orderBy('created', 'DESC')
      ->execute()
      ->fetchAll();
  } catch (Exception $e) {
    $result = array();
  }

  foreach ($result as $row) {
    $rows[] = array($row->message, date('d-m-y H:i:s', $row->created));
  }

  $header = array(t('Message'), t('Date'));

  return theme('table', array('header' => $header, 'rows' => $rows));
}
