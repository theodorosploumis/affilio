#
# This file is only needed for Compass/Sass integration. If you are not using
# Compass, you may safely ignore or delete this file.
#

# Change this to :production when ready to deploy the CSS to the live server.
#environment = :development
environment = :production

# Location of the theme's resources.
css_dir = "css"
fonts_dir = "fonts"
sass_dir = "scss"
images_dir = "images"
#generated_images_dir = "images/sprites"
javascripts_dir = "js"

# Require any additional compass plugins installed on your system.
# Add requirement here as also as in the Gemfile and then run "bundle install"
# Run compass with command "bundle compass watch"
require 'sass-globbing'
require 'compass'
require 'breakpoint'
require 'singularitygs'
require 'autoprefixer-rails'
require 'sassy-buttons'
#require 'oily_png'

# Disable cache busting on image assets.
asset_cache_buster :none

# Autoprefixer manipulations
on_stylesheet_saved do |file|
  css = File.read(file)
  File.open(file, 'w') do |io|
    io << AutoprefixerRails.process(css)
  end
end

#
# You probably don't need to edit anything below this.
#

# You can select your preferred output style here (can be overridden via the
# command line):
output_style = (environment == :development) ? :expanded : :compressed

# Sourcemap
sourcemap = (environment == :production) ? false : true

# To enable relative paths to assets via compass helper functions. Since Drupal
# themes can be installed in multiple locations, we don't need to worry about
# the absolute path to the theme from the server root.
relative_assets = true

# Show debugging comments during development.
line_comments = (environment == :development) ? true : false

# Show debug information / partial location for FireSass and similar tools.
# Uncomment to enable.
#debug = (environment == :development) ? true : false

# Output debugging info in development mode.
sass_options = (environment == :development && debug == true) ? {:debug_info => true} : {}

# Increased decimal precision.
# 33.1234567% instead of 33.123%
Sass::Script::Number.precision = 7
