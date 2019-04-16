gnome = import('gnome')

sources = [
'main.c',
'time-tool.c',
'time-share.c',
'time-zone.c',
'time-map.c',
]

executable('times-admin',
  sources : sources,
  dependencies : [gtk_deps, gdk_deps,polkit_deps,math_deps,mt_deps],
  include_directories: top_srcdir,
  install : true,
  install_dir : get_option('bindir')
  )
