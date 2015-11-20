/*
  File name: OS2Synonym.js
  Version:   1.0

  Description: Handles the lines of synonyms including exporting and importing synonyms.
*/

/*
   Please read the README.txt file in the root directory.
*/
(function ($) {
  Drupal.behaviors.overlay_alter = {
    attach: function (context) {
      $( document ).ajaxError(function( event, request, settings ) {
        alert( "<li>Error requesting page " + settings.url + "</li>" );
      });

      // Actions
      $("#OS2Synonym-actions-new").click(function () {
        $("#OS2Synonym-messages").html("");

        $("#OS2Synonym-lines").append("<div class = 'OS2Synonym-wrapper'><div class = 'OS2Synonym-synonyms'><input class = 'OS2Synonym-synonyms-line' value = ''><input type = 'submit' class = 'OS2Synonym-synonyms-line-delete' value = 'Delete'></div></div>");

        $("#OS2Synonym-lines .OS2Synonym-synonyms-line").last().focus();

        $("#OS2Synonym-actions-save").removeClass("OS2Synonym-actions-button-disabled").addClass("OS2Synonym-actions-button");
      });

      $("#OS2Synonym-actions-save").click(function () {
        var synonyms = new Object();

        // Build the array of synonym lines
        $(".OS2Synonym-synonyms-line").each(function (index) {
          var synonym_line = $(this).val();

          if(synonym_line != '') {
            synonyms[index] = synonym_line;
          }
          else {
            $(this).parent().parent().remove();
          }
        });

        var synonyms_json = JSON.stringify(synonyms);

        // Post to the OS2Synonym actions
        $.post("/OS2Synonym/actions", { action: 'save', OS2Synonyms_lines_json: synonyms_json }, function(data) {
          $("#OS2Synonym-messages").html(data);

          $("#OS2Synonym-actions-save").removeClass("OS2Synonym-actions-button").addClass("OS2Synonym-actions-button-disabled");

          $(".OS2Synonym-import-header").remove();
        });
      });

      $("#OS2Synonym-actions-import-url").click(function() {
        $(".OS2Synonym-import-header").remove();

        // Post to the OS2Synonym import
        $.post("/OS2Synonym/import", { }, function(data_json) {
          var data = $.parseJSON(data_json);

          if(data.status == 'error') {
            $("#OS2Synonym-messages").html(data.data);
          }
          else {
            $("#OS2Synonym-messages").html("");

            var lines = [];

            // Build the array of synonym lines
            $(".OS2Synonym-synonyms-line").each(function (index) {
              lines.push($(this).val());
            });

            var import_lines = data.data.split("\n");

            var import_header_set = false;

            $.each(import_lines, function (key, value) {
              if(value.indexOf("#") != 0) {
                if(jQuery.inArray(value, lines) < 0) {
                  if(! import_header_set) {
                    $("#OS2Synonym-lines .OS2Synonym-wrapper").last().after("<div class = 'OS2Synonym-import-header'>Imported synonyms</div>");

                    import_header_set = true;
                  }

                  $("#OS2Synonym-lines").append("<div class = 'OS2Synonym-wrapper'><div class = 'OS2Synonym-synonyms'><input class = 'OS2Synonym-synonyms-line' value = '" + value + "'><input type = 'submit' class = 'OS2Synonym-synonyms-line-delete' value = 'Delete'></div></div>");
                }
              }
            });

            $("#OS2Synonym-lines .OS2Synonym-synonyms-line").last().focus();
          }

          $("#OS2Synonym-actions-save").removeClass("OS2Synonym-actions-button-disabled").addClass("OS2Synonym-actions-button");
        });
      });

      $("#OS2Synonym-actions-import-file").click(function() {
        $(".OS2Synonym-import-header").remove();

        // Upload file dialog
        var element = $(this);
        var position = element.position();

        $("body").append("<div id = 'OS2Synonym-upload-dialog' style = 'top: " + (position.top + 20) + "px; left: " + (position.left + 20) + "px;'><form id = 'OS2Synonym-upload-dialog-form' action = '/OS2Synonym'  enctype = 'multipart/form-data' method = 'post'>Select a file:<br><input type = 'file' name = 'synonyms' size = '40'><br><br><input type = 'submit' value = 'Upload'><input id = 'OS2Synonym-upload-dialog-cancel' type = 'submit' value = 'Cancel'></form></div>");
      });

      $("body").delegate( "#OS2Synonym-upload-dialog-cancel", "click", function(event) {
        event.stopPropagation();
        event.preventDefault();

        $("#OS2Synonym-upload-dialog").remove();

        return false;
      });

      $("#OS2Synonym-actions-export").click(function() {
        if($("#OS2Synonym-actions-save").hasClass("OS2Synonym-actions-button")) {
          alert("Some changes have not been saved. Please save changes before exporting");
        }
        else {
          window.location.replace("/OS2Synonym_download");
        }
      });

      $("#OS2Synonym-actions-send-solr").click(function() {
        if($("#OS2Synonym-actions-save").hasClass("OS2Synonym-actions-button")) {
          alert("Some changes have not been saved. Please save changes before sending to SOLR");
        }
        else {
            $.get( "/OS2Synonym_send_solr", function() {});
        }
      });

      // Field operations
      $("#OS2Synonym-filter-field").keyup(function( event ) {
        var filter_string = $(this).val();

        // Build the array of synonym lines
        $(".OS2Synonym-synonyms-line").each(function (index) {
          var synonym_line = $(this).val();

          if(synonym_line.indexOf(filter_string) < 0) {
            $(this).parent().addClass("OS2Synonym-hidden");
          }
          else {
            $(this).parent().removeClass("OS2Synonym-hidden");
          }
        });
      });

      $("#OS2Synonym-lines").delegate( ".OS2Synonym-synonyms-line", "keyup", function() {
        $("#OS2Synonym-actions-save").removeClass("OS2Synonym-actions-button-disabled").addClass("OS2Synonym-actions-button");

        $("#OS2Synonym-messages").html("");
      });

      $("#OS2Synonym-lines").delegate( ".OS2Synonym-synonyms-line-delete", "click", function() {
        $(this).parent().parent().remove();

        $("#OS2Synonym-actions-save").removeClass("OS2Synonym-actions-button-disabled").addClass("OS2Synonym-actions-button");

        $("#OS2Synonym-messages").html("");
      });
    }
  }
})(jQuery);