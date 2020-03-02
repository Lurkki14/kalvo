qt5 = import('qt5')
qt5_dep = dependency('qt5',
	modules : ['DBus'])

src = ['kalvod.cpp',
	'Canvas.cpp',
	'MainAdaptor.cpp']

moc_files = qt5.preprocess(moc_headers : ['MainAdaptor.hpp'],
	dependencies : qt5_dep)
	
executable('kalvod',
	moc_files,
	src,
	override_options : ['cpp_std=c++17'],
	dependencies : qt5_dep)
