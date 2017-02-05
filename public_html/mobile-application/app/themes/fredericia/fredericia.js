/**
 * Implements DrupalGap's template_info() hook.
 */
function fredericia_info() {
	try {
		var theme = {
			name: 'fredericia',
			regions: {
				header: {
					attributes: {
						'data-role': 'header',
						'data-theme': 'b',
						'data-position': 'fixed'
					}
				},

				sub_header: {
					attributes: {
						'data-role': 'header'
					}
				},

				navigation: {
					attributes: {
						'data-role': 'navbar'
					}
				},

				content: {
					attributes: {
						'class': 'ui-content',
						'role': 'main'
					}
				},

				footer: {
					attributes: {
						'data-role': 'footer',
						'data-theme': 'b',
						'data-position': 'fixed'
					}
				}
			}
		};

		return theme;
	}

	catch (error) { drupalgap_error(error); }
}

