<?php
/**
 * @file
 * Blame batch functions.
 */

/**
 * Blame clear log batch operation callback.
 */
function blame_clear_log_blame($bid, &$context) {
  entity_delete('blame', $bid);
  $context['results'][] = $bid;
  $context['message'] = t('Removed blame @bid', array('@bid' => $bid));
  $context['finished'] = 1;
}

/**
 * Blame clear log batch finished callback.
 */
function blame_clear_log_finished($success, $results, $operations) {
  if ($success) {
    drupal_set_message(t('Cleared @num Blame log entries.', array('@num' => count($results))));
  }
  else {
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments',
      array(
        '%error_operation' => $error_operation[0],
        '@arguments' => print_r($error_operation[1], TRUE),
      )
    );
    drupal_set_message($message, 'error');
  }
}
