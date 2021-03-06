// Configurations
let pkgjson = require('./package.json');

let config = {
  pkg: pkgjson,
  directory: {
    vendor: './src/vendor',
    src: './src',
    dist: './dist',
  },
};
let module;

// Grunt
module.exports = function(grunt) {
  let gruntConfig = grunt.file.readJSON('./src/grunt/config.json', {
    encoding: 'utf8',
  });
  grunt.initConfig({
    config,
    pkg: config.pkg,

    clean: {
      css: '<%= config.directory.dist %>/css',
      js: '<%= config.directory.dist %>/js',
    },

    less: {
      preprod: {
        options: {
          strictMath: true,
          sourceMap: true,
          outputSourceFiles: true,
          sourceMapURL: '<%= config.directory.dist %>/css/stylesheet.css.map',
          sourceMapFilename:
            '<%= config.directory.dist %>/css/stylesheet.css.map',
        },
        src: '<%= config.directory.src %>/less/stylesheet.less',
        dest: '<%= config.directory.dist %>/css/stylesheet.css',
      },
      prod: {
        options: {
          strictMath: true,
          sourceMap: false,
          outputSourceFiles: true,
          sourceMapURL: '<%= config.directory.dist %>/css/stylesheet.css.map',
          sourceMapFilename:
            '<%= config.directory.dist %>/css/stylesheet.css.map',
        },
        src: '<%= config.directory.src %>/less/stylesheet.less',
        dest: '<%= config.directory.dist %>/css/stylesheet.css',
      },
    },

    concat: {
      options: {
        sourceMap: false,
        stripBanners: false,
      },
      app: {
        src: gruntConfig.concat.jsApp,
        dest: '<%= config.directory.dist %>/js/app.js',
      },
      ie9: {
        src: gruntConfig.concat.jsIe9,
        dest: '<%= config.directory.dist %>/js/ie9.js',
      },
    },

    postcss: {
      options: {
        map: true,
        processors: [require('autoprefixer')()],
      },
      dist: {
        src: '<%= config.directory.dist %>/css/stylesheet.css',
      },
    },

    modernizr: {
      preprod: {
        'cache'       : true,
        'devFile'     : false,
        'parseFiles'  : true,
        'uglify'      : false,
        'customTests' : [],
        'tests'       : [],
        'options'     : [
          'setClasses'
        ],
        'excludeTests': [
          'hidden'
        ],
        'files'       : {
          'src': ['<%= config.directory.dist %>/js/app.js', '<%= config.directory.dist %>/js/ie9.js', '<%= config.directory.dist %>/css/stylesheet.css']
          ],
        'dest'        : '<%= config.directory.dist %>/js/modernizr.js'
      },
      prod: {
        'cache'       : true,
        'devFile'     : false,
        'parseFiles'  : true,
        'uglify'      : true,
        'customTests' : [],
        'tests'       : [],
        'options'     : [
          'setClasses'
        ],
        'excludeTests': [
          'hidden'
        ],
        'files'       : {
          'src': ['<%= config.directory.dist %>/js/app.js', '<%= config.directory.dist %>/js/ie9.js', '<%= config.directory.dist %>/css/stylesheet.css']
          ],
        'dest'        : '<%= config.directory.dist %>/js/modernizr.js'
      },
    },

    watch: {
      options: {
        dateFormat(time) {
          grunt.log.writeln('The watch finished in ' + time + 'ms at' + (new Date()).toString());
          grunt.log.writeln('Waiting for more changes...');
        },
      },
      less: {
        files: ['<%= config.directory.src %>/less/**/*.less'],
        tasks: ['clean:css', 'less:preprod', 'modernizr:preprod'],
      },
      js: {
        files: '<%= config.directory.src %>/js/**/*.js',
        tasks: ['clean:js', 'concat', 'modernizr:preprod'],
      },
    },
  });

  // Load
  grunt.loadNpmTasks('grunt-contrib-clean');
  grunt.loadNpmTasks('grunt-contrib-less');
  grunt.loadNpmTasks('grunt-modernizr');
  grunt.loadNpmTasks('grunt-postcss');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-contrib-watch');

  // Register
  grunt.registerTask('default', ['watch']);

  grunt.registerTask('build-preprod', [
    'clean',
    'concat',
    'less:preprod',
    'modernizr:preprod',
  ]);
  grunt.registerTask('build-prod', [
    'clean',
    'concat',
    'less:prod',
    'postcss',
    'modernizr:prod',
  ]);
  grunt.registerTask('build', [
    'clean',
    'concat',
    'less:prod',
    'postcss',
    'modernizr:prod',
  ]);

  grunt.registerTask('build-css', [
    'clean:css',
    'less',
    'postcss',
    'modernizr',
  ]);
  grunt.registerTask('build-js', ['clean:js', 'concat', 'modernizr']);
};
