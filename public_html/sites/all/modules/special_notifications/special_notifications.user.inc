<?php

/*
 * Form output.
 */
function special_notifications_settings_form($form, &$form_state) {

	_special_notifications_settings_check_user();

	$weekdays = _special_notifications_settings_arr('weekdays');
	$time = _special_notifications_settings_arr('time');

	$form['markup'] = array(
		'#type' => 'markup',
		'#markup' => '<p>' . t('Please specify when you are ready to receive notifications') . ':</p>'
	);

	$i = 1;
	$form['div-1'] = array(
		'#type' => 'markup',
		'#markup' => '<div style="float:left; width:200px;">'
	);

	foreach ($weekdays as $w_key => $w_value) {
		$form['day_' . $w_key . '_title'] = array(
			'#type' => 'markup',
			'#markup' => '<h1>' . $w_value . '</h1>'
		);

		$day_period = array();
		foreach($time as $t_key => $t_value) {
			$day_period[$t_key] = $t_value;
		}

		$form['day_' . $w_key] = array(
			'#type' => 'checkboxes',
			'#options' => $day_period,
			'#default_value' => _special_notifications_settings_get_hours($w_key),
		);

		$form['div-' . ++$i] = array(
			'#type' => 'markup',
			'#markup' => '</div><div style="float:left; width:200px;">'
		);
	}

	$form['div-' . ++$i] = array(
		'#type' => 'markup',
		'#markup' => '</div><div style="clear:both;"></div>'
	);

	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => 'Save changes',
	);

	return $form;
}


/**
 * Validate the form.
 */
function special_notifications_settings_form_validate($form, &$form_state) {
	/* We're not doing anything right now... */
}


/*
 * Form submission.
 */
function special_notifications_settings_form_submit($form, &$form_state) {

	global $user;
	$query = db_update('special_notifications_settings');

	$weekdays = _special_notifications_settings_arr('weekdays');
	$time = _special_notifications_settings_arr('time');
	$tmp = array();

	foreach ($weekdays as $w_key => $w_value) {
		foreach ($time as $t_key => $t_value) {
			$val = $form_state['values']['day_' . $w_key][$t_key];

			if ($val != '0') $val = '1';
			$tmp[$w_key . '_' . $t_key] = $val;
		}
	}

	$query->fields($tmp);
	$query->condition('uid', $user->uid);
	$query->execute();

	drupal_set_message(t('The form has been submitted.'));
}


/* Helper functions */

/*
 * Check if user exists in the database. If not, then add new entry.
 */
function _special_notifications_settings_check_user() {
	global $user;

	$uid = $user->uid;
	$table = 'special_notifications_settings';

	$res = db_select($table, 'sns')
		->fields('sns', array('uid'))
		->condition('uid', $uid, '=')
		->execute();

	if ($res->rowCount() == 0) {
		$ins = db_insert($table)->fields(array('uid' => $uid))->execute();
	}

	return true;
}


function _special_notifications_settings_get_hours($weekday) {
	global $user;

	$arr_list = array();
	$time_list = array_keys(_special_notifications_settings_arr('time'));
	$day_time_list = array();

	foreach ($time_list as $t) {
		$day_time_list[] = $weekday . '_' . $t;
	}

	$db_results = db_select('special_notifications_settings', 'sns')
		->fields('sns', $day_time_list)
		->condition('uid', $user->uid, '=')
		->execute()
		->fetchAssoc();

	foreach ($time_list as $dt) {
		if ($db_results[$weekday . '_' . $dt] == '1') {
			$arr_list[] = $dt;
		}
	}

	return $arr_list;
}


function _special_notifications_settings_arr($type) {
	if ($type == 'weekdays') {
		return array(
			'mon' => 'Monday',
			'tue' => 'Tuesday',
			'wed' => 'Wednesday',
			'thu' => 'Thursday',
			'fri' => 'Friday',
			'sat' => 'Saturday',
			'sun' => 'Sunday',
		);
	} elseif ($type == 'time') {
		return array(
			'00_05' => '00:00 - 05:59',
			'06_11' => '06:00 - 11:59',
			'12_17' => '12:00 - 17:59',
			'18_23' => '18:00 - 23:59',
		);
	} else {
		return $array();
	}
}

