(function($) {

	(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/da_DK/sdk.js#xfbml=1&version=v2.5&appId=349377909301";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));


  var url = $('.fb-page').data('refresh');
   
  $('.fb-page').load(url, { width: $('#fb-root').width() },
  function() {
     FB.XFBML.parse(document.getElementById('.fb-page'),
     function() {
        $('.fb-page').fadeIn("slow");
     });
  });
}(jQuery));