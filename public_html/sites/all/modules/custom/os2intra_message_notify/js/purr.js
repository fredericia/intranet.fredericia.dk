(function ($) {
  Drupal.behaviors.os2intra_message_notify = {
    attach: function (context, settings) {
      $('.notice .close', context).click(function () {
        var nid = $(this).parent().data('nid');
        $.get('/os2intra_message_notify/ajax/'+nid);
      });
    }
  };
}(jQuery));
