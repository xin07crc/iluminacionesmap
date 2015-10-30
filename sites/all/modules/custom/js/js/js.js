(function($) {
       Drupal.behaviors.customToggler = {
         attach: function(context, settings){
           $(".views-field-field-video-foto").hover(function() {
  			
  				console.log($(this).find("views-field-field-foto-descripcion").css("display"));

			});
			
          }
        };
    })(jQuery);