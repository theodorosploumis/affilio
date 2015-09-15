var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";

  Drupal.behaviors.trendies = {
    attach: function(context) {

      // Facetapi Links, move span out of link
      $(".facetapi-checkbox span").each(function(){
        var $el = $(this),
            $parent = $el.parent();
        $parent.after($el);
        //$el.once().appendTo($parent);
      });

      // QuickSearch for Facet filters
      // Using https://github.com/DeuxHuitHuit/quicksearch
      $("ul.facetapi-facetapi-checkbox-links").each(function() {
        var $el =$(this);
        var $id = $el.attr("id");
        var $class = "search-"+$id;

        // Prepend search input above lists
        $el.once().before('<div class="quicksearch-wrapper"><input class="inner-search '+$class+'" name="'+$class+'" placeholder="Search..." type="text" data-list=".'+$class+'"></div>');

        // Move count results out of link
        //$("span.counter").appendTo($(this).parent());
        var $search_elem = $(this).parent().find("."+$class);

        // Init QuickSearch plugin
        $search_elem.quicksearch($el.children('li'), {
          'delay': 300,
          'selector': "a.facetapi-checkbox",
          'bind': 'keyup keydown',
          'show': function () {
            $(this).show();
          },
          'hide': function () {
            $(this).hide();
          }
        });

      });

      // Toggle facetapi filters
      $("#block-search-api-sorts-search-sorts").once(function(){
        var $el = $(this),
            $filters = $(".region-content-pre"),
            $button = "<div class='block toggle-filters'>"+Drupal.t("Filters")+"</div>";
        // Initial load
        if($filters.length !== 0) {
          $el.before($button);
          $(".toggle-filters").toggleClass("js-open");
          //$filters.toggleClass("js-open");
        }
        // Click collapse
        $(".toggle-filters").click(function () {
          $(this).toggleClass("js-open");
          $filters.toggleClass("js-open");
        });
      });

      // Taxonomy term pages - append sidebar
      $(".page-taxonomy-term").once(function(){
        var $el = $(this),
            $view =$(".view-id-products"),
            $view_empty = $(".view-empty"),
            $details = $(".region-pre-details"),
            $results = $view.children("header");
        if ($details.length !== 0 && $view_empty.length !== 0) {
          $view_empty.before($details);
        }
        if ($details.length !== 0 && $view_empty.length === 0) {
          $results.after($details);
        }

      });

      // Sticky header using jquery.sticky.js plugin
      /**
      $(".header").sticky({
        topSpacing: 10,
        //className: "sticky-header"
      });
       */

      // Lightbox overrides
      $(".with-lightbox a").not(".shop-link").attr("target","_top");

      // Rewrite paths of taxonomies
      /**
      $(".field-name-field-category a, .field-name-field-colour a, .field-name-field-size a, .field-name-field-related-categories a").each(function(){
        var $el = $(this),
            $href = $el.attr("href"),
            $prefix = "browse";
        $el.attr("href", "/"+$prefix+$href);
      });
       */
    }
  };

})(jQuery, Drupal);