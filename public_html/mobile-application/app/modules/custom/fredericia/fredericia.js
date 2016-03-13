
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
		var link_url, link_title;
		var items = [];
		var links_arr = _fredericia_get_links_array();

		switch (delta) {

			// The slide menu (aka panel).
			case 'fredericia_panel_block':

				var attrs = {
					id: drupalgap_panel_id(delta),
					'data-role': 'panel',
					'data-position': 'left', // left or right
					'data-display': 'overlay' // overlay, reveal or push
				};

				for (var i in links_arr) {
					link_url = Drupal.settings.site_path + '/node/' + links_arr[i][0];
					link_title = links_arr[i][1];

					items.push(
						bl(link_title, null, {
							attributes: {
								onclick: "window.open('" + link_url + "', '_system', 'location=yes')",
								'data-icon': 'cloud'
							}
						})
					);
				}

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


function fredericia_install() {
	var css_1 = drupalgap_get_path('module', 'fredericia') + '/font-awesome/css/font-awesome.min.css';
	var css_2 = drupalgap_get_path('module', 'fredericia') + '/fredericia.css';
	drupalgap_add_css(css_1);
	drupalgap_add_css(css_2);
}


//function fredericia_locale() {
//	return ['da'];
//}


/* Helper functions */

function _fredericia_date_formatter(date_str) {
	var d = date_str;

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


function _fredericia_get_links_array() {

	var get_json_data = function() {
		var arr = [];
		var xml_http = new XMLHttpRequest();

		if (xml_http != null) {
			xml_http.open('GET', Drupal.settings.site_path + '/node-basket.json', false);
			xml_http.send(null);
			arr = JSON.parse(xml_http.responseText);
		}

		return arr;
	};

	var json_data = get_json_data();
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


function _fredericia_link(url, title) {
	var link = l(title, null, {
		attributes: {
			onclick: "window.open('" + url + "', '_system', 'location=yes')"
		}
	});

	return link;
}

