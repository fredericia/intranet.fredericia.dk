// |--------------------------------------------------------------------------
// | BS3 alert
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |

var bs3Alert = (function ($) {
  'use strict';

  var $wrapper = $('.bs3-alert-wrapper');
  var pub = {};

  /**
   * Instantiate
   */
  pub.push = function (headline, text, state) {
    if (state != 'success' && state != 'info' && state != 'warning' && state != 'danger') {
      return false;
    }

    if (!headline || !text) {
      return false;
    }

    var $alert = $('<div />');

    $alert
      .attr('role', 'alert')
      .addClass('alert')
      .addClass('alert-' + state);

    $alert.html('<strong>' + headline + '</strong> ' + text);

    $wrapper.prepend($alert);
  }

  return pub;
})(jQuery);
