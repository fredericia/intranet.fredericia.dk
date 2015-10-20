<?php

/**
 * Email notifier.
 */
class MessageNotifierEmail extends MessageNotifierBase {

  public function deliver(array $output = array()) {
    $plugin = $this->plugin;
    $message = $this->message;

    $options = $plugin['options'];

    $account = user_load($message->uid);
    $mail = $options['mail'] ? $options['mail'] : $account->mail;

    $languages = language_list();
error_log(__FILE__);
error_log(print_r($languages, 1));
    if (!$options['language override']) {
      $lang = !empty($account->language) && $account->language != LANGUAGE_NONE ? $languages[$account->language]: language_default();
    }
    else {
      $lang = $languages[$message->language];
    }
error_log(print_r($options['language override'], 1));
error_log(print_r($lang, 1));
    //r The subject in an email can't be with HTML, so strip it.

    $output['message_notify_email_subject'] = strip_tags($output['message_notify_email_subject']);

    // Pass the message entity along to hook_drupal_mail().
    $output['message_entity'] = $message;

    $result =  drupal_mail('message_notify', $message->type, $mail, $lang, $output);
    return $result['result'];
  }

}
