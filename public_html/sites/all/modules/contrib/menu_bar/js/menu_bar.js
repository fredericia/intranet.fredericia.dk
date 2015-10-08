(function ($) {
  Drupal.behaviors.menu_bar = {
    attach: function (context, settings) {

      var $menu_bar = $('.menu-bar-menu');

      if ($menu_bar.length) {
        $('body').css('margin-left', 55);

        var time = 200;
        var narrow_width = Drupal.settings.menu_bar.narrow_width;
        var wide_width = Drupal.settings.menu_bar.wide_width;

        var setWide = function(timeOverride){
          this.time = time;
          if(undefined !== timeOverride){
            this.time = timeOverride;
          }
          $menu_bar.animate({width: wide_width}, this.time, function(){
          $menu_bar.removeClass('narrow');
          });
          $('.js-menu-bar-toggle').animate({left: wide_width}, this.time);
          $('body').animate({'margin-left': wide_width}, this.time);
          document.cookie = 'menu_bar=wide;expires=0;';
        };

        var setNarrow = function(){
          $menu_bar.animate({width: narrow_width}, time);
          $menu_bar.addClass('narrow');
          $('.js-menu-bar-toggle').animate({left: narrow_width}, time);
          $('body').animate({'margin-left': narrow_width}, time);
          document.cookie = 'menu_bar=narrow;expires=0;';
        };

        $('.js-menu-bar-toggle').click(function(){
          if($menu_bar.hasClass('narrow')){
            setWide();
          }
          else {
            setNarrow();
          }
        });

        if(document.cookie.indexOf('menu_bar=wide') !== -1){
          setWide(0);
        }
      }
    }
  };
}(jQuery));
