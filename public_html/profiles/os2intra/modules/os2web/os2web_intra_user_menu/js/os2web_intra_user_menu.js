(function ($) {

  Drupal.behaviors.os2web_intra_user_menu = {
    attach: function (context, settings) {
      os2web_intra_user_menu_groups();
    }
  };

  /**
   * Fetches user group memberships from ajax callback.
   */
  function os2web_intra_user_menu_groups() {

    $.getJSON('user-menu/ajax', function(data) {

      var ul = $('<ul class="main-navigation-list-dropdown-menu">');

      // Set class on 'ul's parent
      ul.parent().addClass('main-navigation-list-dropdown');

      // Test if we got group data back
      if (Object.keys(data).length > 0) {

        // Generate list with links and append to parent menu item.
        for (var key in data) {
          var li = $('<li class="leaf main-navigation-list-link"><a href="node/' + data[key].nid + '">' + data[key].title + '</a></li>');
          ul.append(li);
        }
      }
      var menu_item = $('.group-menu-item').parent();
      menu_item.append(ul);

      // Set class on 'ul's parent
      ul.parent().addClass('main-navigation-list-dropdown');
    });
  }

}(jQuery));
