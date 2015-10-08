jQuery(document).ready(function(){
  var $filter_panel = jQuery('.pane-os2intra-group-term-activity-panel-pane-1');

  $filter_panel.find('.pane-title').append('<i class="icon-search activity-search-toggle"></i>');

  $filter_panel.find('.view-filters').hide();
  jQuery('.activity-search-toggle').click(function(event){
    console.log('click');
    $filter_panel.find('.view-filters').toggle();
  });

});
