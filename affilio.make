; affilio make file for local development
core = "7.x"
api = "2"
projects[drupal][version] = "7.x"

; include the d.o. profile base
includes[] = "drupal-org.make"

; +++++ Custom modules +++++

projects[feeds_downloader][version] = "1.0"
projects[feeds_downloader][subdir] = "affilio"

projects[micronate][version] = "1.0"
projects[micronate][subdir] = "affilio"

projects[xmlgrate][version] = "1.0"
projects[xmlgrate][subdir] = "affilio"

projects[affiliobase][version] = "1.0"
projects[affiliobase][subdir] = "affilio"

; ++++++ Features ++++++++++

projects[affilio_text_formats][version] = "1.0"
projects[affilio_text_formats][subdir] = "features"

projects[affilio_values_lists][version] = "1.0"
projects[affilio_values_lists][subdir] = "features"

projects[affilio_product_type][version] = "1.0"
projects[affilio_product_type][subdir] = "features"

projects[affilio_blocks][version] = "1.0"
projects[affilio_blocks][subdir] = "features"

projects[affilio_brand_shop][version] = "1.0"
projects[affilio_brand_shop][subdir] = "features"

projects[affilio_content_types][version] = "1.0"
projects[affilio_content_types][subdir] = "features"

projects[affilio_displaysuite][version] = "1.0"
projects[affilio_displaysuite][subdir] = "features"

projects[affilio_feeds][version] = "1.0"
projects[affilio_feeds][subdir] = "features"

projects[affilio_site_menus][version] = "1.0"
projects[affilio_site_menus][subdir] = "features"

projects[affilio_administration_views][version] = "1.0"
projects[affilio_administration_views][subdir] = "features"

projects[affilio_solrproducts][version] = "1.0"
projects[affilio_solrproducts][subdir] = "features"




