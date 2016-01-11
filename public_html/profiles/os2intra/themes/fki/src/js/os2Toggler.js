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
        .parents('.os2-toggler-element')
        .toggleClass('active');
    });
  }

  return pub;
})(jQuery);
