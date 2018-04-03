// |--------------------------------------------------------------------------
// | BS3 designer
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |
// | - Optimize form elements
// | - Attach footer to bottom of page on non-touch devices
// | - Enable BS3 tooltips on non-touch devices
// | - Disable form autocomplete on non-touch devices
// | - Apply loader icon to .btn.btn-loader on click
// | - Use appear on non-touch devices
// |

// jscs:disable requireCamelCaseOrUpperCaseIdentifiers

var bs3Designer = (function ($) {
    'use strict';

    var pub = {};

    /**
     * Instantiate
     */
    pub.init = function () {
        registerBootEventHandlers();
        registerEventHandlers();
    }

    /**
     * Register boot event handlers
     */
    function registerBootEventHandlers() {
        if ( ! Modernizr.touchevents) {
            footerAttached();
            footerBelow();
        }

        optimizeFormElements();
        inputClear();
        bs3Tooltip();
    }

    /**
     * Register event handlers
     */
    function registerEventHandlers() {

        $(window).resize(function () {
            footerAttached();
            footerBelow();
        });

        $('.btn-loader').on('click touchstart', function () {
            var $element = $(this);

            iconSpin($element);
        });
    }

    /**
     * Footer attached
     */
    function footerAttached() {
        if ($('body').hasClass('footer-attached')) {
            var $footer = $('.footer');
            var footerHeight = $footer.outerHeight(true);

            $('.inner-wrapper').css('padding-bottom', footerHeight);
        }
    }

    /**
     * Footer below
     */
    function footerBelow() {
        if ($('body').hasClass('footer-below')) {
            var $footer = $('.footer');
            var footerHeight = $footer.outerHeight(true);

            $('.inner-wrapper').css('padding-bottom', footerHeight);
        }
    }

    /**
     * BS tooltip
     */
    function bs3Tooltip() {
        if (Modernizr.touchevents) {
            $('[data-toggle=tooltip]').tooltip('hide');

            return false;
        }

        $('[data-toggle=tooltip]').tooltip();
    }

    /**
     * Optimize form elements
     */
    function optimizeFormElements() {
        $('form').attr('autocomplete', 'off');
    }

    /**
     * Icon spin
     */
    function iconSpin($element) {
        var $icon = $('<span />').addClass('fa').addClass('icon').addClass('icon-spin');
        var elementWidth = $element.outerWidth(true);

        // Remove button value and insert icon
        $element.html($icon).addClass('btn-loader-active').css('width', elementWidth);
    }

    /**
     * Input clear
     */
    function inputClear() {
        var $inputs = $('input[type="text"].form-control').not('.sliderfield-value-field, .upload');

        // Run through all input fields and add elements to DOM
        $inputs.each(function(index) {
            var $input = $(this);
            var $wrapper = $('<div />').addClass('form-control-clear-wrapper');
            var $clearButton = $('<span />').addClass('form-control-clear').on('click touchstart', function(event) {
                $input.attr('value', '').focus();

                $(this).hide();
            });

            // Wrap input
            $input.wrap($wrapper);

            // Add clear button
            $input.after($clearButton);

            // Input has content - show clear button
            if ($input.val().replace(/^\s+|\s+$/g, '').length > 0) {
                $clearButton.show();
            }

            // Show clear button
            $input.on('keyup keydown change focus', function(event) {

                if ($input.val().replace(/^\s+|\s+$/g, '').length > 0) {

                    if (!$clearButton.is(':visible')) {
                        $clearButton.show();
                    }
                }
            });
        });
    }

    return pub;
})(jQuery);
