
var _fredericia_first_pageload = true;

function fredericia_menu() {
	var items = {};

	items['main_page'] = {
		title: 'Fredericia Kommune',
		page_callback: 'fredericia_main_page',
		pageshow: 'fredericia_main_page_pageshow'
	};

	return items;
}


function fredericia_main_page() {
	var content = {};

	content['main_page'] = {
		title: 'OS2INTRA GROUP TERM ACTIVITY',
		theme: 'jqm_item_list',
		items: [],
		attributes: {id: 'fredericia-feed-list'}
	};

	return content;
}


function fredericia_main_page_pageshow() {
	views_datasource_get_view_result('os2intra-group-term-activity.json', {
		success: function(data) {
			var items = [];

			if (data.nodes.length > 0) {
				$.each(data.nodes, function(index, object) {
					var node = object.node;
					var url = Drupal.settings.site_path + node.path;
					var link = _fredericia_link(url, node.title);

					var author_url = Drupal.settings.site_path + '/user/' + node.author_uid;
					var author_link = _fredericia_link(author_url, node.author_name);

					var group_url = Drupal.settings.site_path + '/node/' + node.group_division_id;
					var group_link = _fredericia_link(group_url, node.group_division);

					items.push(
						'<div class="fredericia-feed-item">' +
						'<div class="fredericia-feed-item-author">' +
						'<span class="fredericia-custom-icon custom-icon-' + node.type + '"></span>' +
						author_link + '</div>' +
						'/ opd. ' + node.date_updated +
						'<h1 class="fredericia-feed-item-title">' + link + '</h1>' +

						'<div class="fredericia-feed-item-date">' +
						_fredericia_date_formatter(node.date) + '</div>' +

						'<div class="fredericia-feed-item-body">' + node.body + '</div>' +
						'<h3 class="fredericia-feed-item-group">' + group_link + '</h3>' +

						'<div class="fredericia-feed-item-info">' + 
						'<div class="fredericia-feed-item-viewings">' +
						'<span class="icon fa fa-eye""></span>' + 
						'Seen by ' + node.total_views + ' ' +
						(node.total_views === '1' ? 'person' : 'persons') + '</div>' +
						'<div class="fredericia-feed-item-comments">' + 
						'<span class="icon fa fa-comment"></span>' +
						node.comment_count + ' ' + (node.comment_count === '1' ? 'comment' : 'comments') + '</div>' +
						'<div class="fredericia-clearboth"></div>' +
						'</div><!-- .fredericia-feed-item-info //-->' +
						
						'</div><!-- .fredericia-feed-item //-->'
					);
				});

				drupalgap_item_list_populate('#fredericia-feed-list', items);
			}
		}
	});
}


/* Slider Menu functions (BEGIN) */

/*
 * Implements hook_block_info().
 */
function fredericia_block_info() {
	try {
		var blocks = {};

		blocks['fredericia_panel_block'] = {
			delta: 'fredericia_panel_block',
			module: 'fredericia'
		};

		blocks['fredericia_panel_block_button'] = {
			delta: 'fredericia_panel_block_button',
			module: 'fredericia'
		};

		return blocks;
	} catch (error) { console.log('fredericia_block_info - ' + error); }
}


/*
 * Implements hook_block_view().
 */
function fredericia_block_view(delta, region) {
	try {
		var content = '';
		var links_basket_arr = _fredericia_basket_links_array();
		var links_groups_arr = _fredericia_groups_links_array();

		var menu_links_list = function(source_arr, icon) {
			var link_url, link_title;
			var items = [];

			for (var i in source_arr) {
				link_url = Drupal.settings.site_path + '/node/' + source_arr[i][0];
				link_title = source_arr[i][1];

				items.push(
					bl(link_title, null, {
						attributes: {
							onclick: "window.open('" + link_url + "', '_system', 'location=yes')",
							'data-icon': icon
						}
					})
				);
			}

			return items;
		};

		var tmp_items1 = menu_links_list(links_basket_arr, 'cloud');
		var tmp_items2 = menu_links_list(links_groups_arr, 'star');
		var items = tmp_items1.concat(tmp_items2);

		switch (delta) {

			// The slide menu (aka panel).
			case 'fredericia_panel_block':

				var attrs = {
					id: drupalgap_panel_id(delta),
					'data-role': 'panel',
					'data-position': 'left', // left or right
					'data-display': 'overlay' // overlay, reveal or push
				};

				content += ('' +
					'<div ' + drupalgap_attributes(attrs) + '>' +
					'<a href="#" onclick="javascript:drupalgap_goto(\'' + drupalgap.settings.front + '\');" class="fredericia-ui-panel-logo">&nbsp;</a>' +
					((Drupal.user.uid) ? theme('jqm_item_list', { items: items }) : '') +
					'</div>'
				);

				break;

			// The button to open the menu.
			case 'fredericia_panel_block_button':

				content = bl('Open panel', '#' + drupalgap_panel_id('fredericia_panel_block'), {
					attributes: {
						'data-icon': 'bars',
						'data-iconpos': 'notext',
						'class': 'ui-btn-left'
					}
				});

				break;
		}

		return content;
	} catch (error) { console.log('fredericia_block_view - ' + error); }
}

/* Slider Menu functions (END) */


function fredericia_services_postprocess(options, result) {
	try {
		var user_data, lang;

		if (options.service == 'system' &&
			options.resource == 'connect' &&
			_fredericia_first_pageload == true) {

			if (!Drupal.user.uid || Drupal.user.uid === 0) {
				Drupal.settings.language_default = _fredericia_site_lang();
			} else {
				Drupal.settings.language_default = _fredericia_user_lang(Drupal.user.uid);
			}

			drupalgap_goto(drupalgap.settings.front, {reloadPage: true});
			_fredericia_first_pageload = false;
		}

		if (options.service == 'user') {
			if (options.resource == 'login') {
				if (Drupal.user.uid === 0) return;

				Drupal.settings.language_default = _fredericia_user_lang(Drupal.user.uid);
				drupalgap_goto(drupalgap.settings.front, {reloadPage: true});
			} else if (options.resource == 'logout') {
				Drupal.settings.language_default = _fredericia_site_lang();
				drupalgap_goto(drupalgap.settings.front, {reloadPage: true});
			}
		}

	} catch (error) {
		console.log('fredericia_services_postprocess - ' + error);
	}
}


function fredericia_install() {
	var css_1 = drupalgap_get_path('module', 'fredericia') + '/font-awesome/css/font-awesome.min.css';
	var css_2 = drupalgap_get_path('module', 'fredericia') + '/fredericia.css';
	drupalgap_add_css(css_1);
	drupalgap_add_css(css_2);
}


function fredericia_locale() {
	return ['da'];
}


function fredericia_deviceready() {
	try {
		drupalgap.menu_links['user/%/edit'].page_callback = 'drupalgap_get_form';
		drupalgap.menu_links['user/%/edit'].page_arguments = ['fredericia_user_profile_edit_form'];
	}
	catch (error) { console.log('fredericia_deviceready - ' + error); }
}


function fredericia_user_profile_edit_form(form, form_state) {
	try {
		var user_data;
		user_load(Drupal.user.uid, {
			success: function(account) {
				user_data = account;
			}
		});

		form.elements['name_first'] = {
			type: 'textfield',
			title: 'Fornavn',
			required: false,
			default_value: (Object.keys(user_data['field_name_first']).length > 0) ? user_data['field_name_first']['und'][0]['value'] : '',
		};

		form.elements['name_last'] = {
			type: 'textfield',
			title: 'Efternavn',
			required: false,
			default_value: (Object.keys(user_data['field_name_last']).length > 0) ? user_data['field_name_last']['und'][0]['value'] : '',

		};

		form.elements['os2intra_user_titles'] = {
			type: 'select',
			title: 'Jobtitle',
			required: false,
			options: _fredericia_get_taxomony_terms_array('/user-jobtitle.json'),
			default_value: (Object.keys(user_data['field_jobtitle']).length > 0) ? user_data['field_jobtitle']['und'][0]['target_id'] : '_none',
		};

		form.elements['os2intra_phone'] = {
			type: 'textfield',
			title: 'Telefon nummer',
			required: false,
			default_value: (Object.keys(user_data['field_os2intra_phone']).length > 0) ? user_data['field_os2intra_phone']['und'][0]['value'] : '',
		};

		form.elements['os2intra_mobile'] = {
			type: 'textfield',
			title: 'Mobil nummer',
			required: false,
			default_value: (Object.keys(user_data['field_os2intra_mobile']).length > 0) ? user_data['field_os2intra_mobile']['und'][0]['value'] : '',
		};

		form.elements['os2intra_physical_location'] = {
			type: 'select',
			title: 'Fysisk lokation',
			options: _fredericia_get_taxomony_terms_array('/os2intra-physical-location.json'),
			required: true,
			default_value: (Object.keys(user_data['field_os2intra_physical_location']).length > 0) ? user_data['field_os2intra_physical_location']['und'][0]['target_id'] : '',
		};

		form.elements['name'] = {
			type: 'textfield',
			title: 'Username',
			required: user_access('change own username') ? true : false,
			access: user_access('change own username') ? true : false,
			default_value: user_data['name'],
		};

		form.elements['mail'] = {
			type: 'textfield',
			title: 'Email',
			required: true,
			default_value: user_data['mail'],
		};

		form.elements['current_pass'] = {
			'title': t('Current password'),
			'type': 'password',
			'description': t('Enter your current password to change the E-mail address or Password.')
		};

		form.elements['pass_pass1'] = {
			'title': t('Password'),
			'type': 'password'
		};

		form.elements['pass_pass2'] = {
			'title': t('Confirm password'),
			'type': 'password',
			'description': t('To change the current user password, enter the new ' +
			'password in both fields.')
		};

		form.elements['submit'] = {
			type: 'submit',
			value: 'Save'
		};

		console.log(Object.keys(user_data['field_os2intra_phone']).length);
		return form;
	} catch (error) { console.log('fredericia_custom_form - ' + error); }
}


/* Helper functions */

function _fredericia_date_formatter(date_str) {
	var d = date_str;

	if (!d) return '';

	d = d.replace(', 1 ', ', 01 ');
	d = d.replace(', 2 ', ', 02 ');
	d = d.replace(', 3 ', ', 03 ');
	d = d.replace(', 4 ', ', 04 ');
	d = d.replace(', 5 ', ', 05 ');
	d = d.replace(', 6 ', ', 06 ');
	d = d.replace(', 7 ', ', 07 ');
	d = d.replace(', 8 ', ', 08 ');
	d = d.replace(', 9 ', ', 09 ');

	d = d.replace('Monday, ', '');
	d = d.replace('Tuesday, ', '');
	d = d.replace('Wednesday, ', '');
	d = d.replace('Thursday, ', '');
	d = d.replace('Friday, ', '');
	d = d.replace('Saturday, ', '');
	d = d.replace('Sunday, ', '');

	d = d.replace(' January, ', '.01.');
	d = d.replace(' February, ', '.02.');
	d = d.replace(' March, ', '.03.');
	d = d.replace(' April, ', '.04.');
	d = d.replace(' May, ', '.05.');
	d = d.replace(' June, ', '.06.');
	d = d.replace(' July, ', '.07.');
	d = d.replace(' August, ', '.08.');
	d = d.replace(' September, ', '.09.');
	d = d.replace(' October, ', '.10.');
	d = d.replace(' November, ', '.11.');
	d = d.replace(' December, ', '.12.');

	d = d.substring(0, 18);

	return d;
}


function _fredericia_basket_links_array() {
	var json_data = _fredericia_get_JSON_data('/node-basket.json');
	var result = [];
	var tmp_ids = [], tmp_titles = [];

	for (var i in json_data['nodes']) {

		if (json_data['nodes'][i]['node'].title === 'admin basket') {

			tmp_ids = (json_data['nodes'][i]['node'].references_ids).split(', ');
			tmp_titles = (json_data['nodes'][i]['node'].references_titles).split("\\n");

			for (var j = 0, k = tmp_ids.length; j < k; j++) {
				result.push(new Array());
				result[j].push(tmp_ids[j]);
				result[j].push(tmp_titles[j]);
			}

			break;
		}
	}

	return result;
}


function _fredericia_groups_links_array() {
	var json_data = _fredericia_get_JSON_data('/os2intra-user-groups.json');
	var result = [];

	for (var i in json_data['nodes']) {
		result.push(new Array());
		result[i].push(json_data['nodes'][i]['node'].nid);
		result[i].push(json_data['nodes'][i]['node'].title);
	}

	return result;
}


function _fredericia_link(url, title) {
	var link = l(title, null, {
		attributes: {
			onclick: "window.open('" + url + "', '_system', 'location=yes')"
		}
	});

	return link;
}


function _fredericia_get_JSON_data(addr) {
	var arr = [];
	var xml_http = new XMLHttpRequest();

	if (xml_http != null) {
		xml_http.open('GET', Drupal.settings.site_path + addr, false);
		xml_http.send(null);
		arr = JSON.parse(xml_http.responseText);
	}

	return arr;
}


function _fredericia_get_taxomony_terms_array(url) {
	var json_data = _fredericia_get_JSON_data(url);
	var result = '';
	var fieldObject = {};

	fieldObject['_none']='-None-';
	for (var i in json_data['terms']) {
		fieldObject[String(json_data['terms'][i]['term'].tid)] = json_data['terms'][i]['term'].name;
	}

	return fieldObject;
}


function _fredericia_user_lang(user_id) {
	var user_data = _fredericia_get_JSON_data('/?q=drupalgap/user/' + user_id + '.json');
	return (user_data['language'] === '') ? 'und' : user_data['language'];
}


function _fredericia_site_lang() {
	var site_data = _fredericia_get_JSON_data('/lang-data.json');
	return (site_data['language'] === '') ? 'und' : site_data['language'];
}

