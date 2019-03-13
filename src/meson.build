gnome = import('gnome')

sources = [
'main.c',
'time-tool.c',
'time-share.c',
]

executable('times-admin',
  sources : sources,
  dependencies : [gtk_deps, polkit_deps],
  include_directories: top_srcdir,
  install : true,
  install_dir : get_option('bindir')
  )
