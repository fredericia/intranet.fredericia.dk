// |--------------------------------------------------------------------------
// | Popover button
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |
var popoverButton = (function ($) {
  'use strict';
  var pub = {};

  /**
   * Instantiate
   */
  pub.init = function (options) {
    registerEventHandlers();
    registerBootEventHandlers();
  }

  /**
   * Register event handlers
   */
  function registerEventHandlers() {

    // Toggle sidebar
    $('.popover-button-toggle').on('click', function (event) {
      event.preventDefault();

      var $element = $(this);

      $element
        .parent('.popover-button')
        .toggleClass('popover-button-open');
    });
  }

  /**
   * Register boot event handlers
   */
  function registerBootEventHandlers() {
  }

  return pub;
})(jQuery);

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

// |--------------------------------------------------------------------------
// | OS2Toggler
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |

var os2Toggler = (function ($) {
  'use strict';
  var pub = {};

  /**
   * Instantiate
   */
  pub.init = function (options) {
    registerEventHandlers();
    registerBootHandlers();
  }

  /**
   * Register event handlers
   */
  function registerEventHandlers() {

    // Toggle
    $('.os2-toggler-element-toggle').on('click', function (event) {
      event.preventDefault();

      var $element = $(this);

      // Toggle active class
      $element
        .closest('.os2-toggler-element')
        .toggleClass('active');
    });
  }

  /**
   * Register boot handlers
   */
  function registerBootHandlers() {
    var $toggler = $('.os2-organisation-tree');

    $toggler.find('li').addClass('os2-toggler-element');
  }

  return pub;
})(jQuery);

// Document ready
(function ($) {
  'use strict';

  // Enable BS3 designer
  bs3Designer.init();

  // Enable BS3 sidebar
  bs3Sidebar.init();

  // Enable popover button
  popoverButton.init();

  // Enable OS2Toggler
  os2Toggler.init();

})(jQuery);

//# sourceMappingURL=app.js.map