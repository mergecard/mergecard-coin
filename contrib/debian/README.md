
Debian
====================
This directory contains files used to package mergecardd/mergecard-qt
for Debian-based Linux systems. If you compile mergecardd/mergecard-qt yourself, there are some useful files here.

## mergecard: URI support ##


mergecard-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mergecard-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mergecardqt binary to `/usr/bin`
and the `../../share/pixmaps/mergecard128.png` to `/usr/share/pixmaps`

mergecard-qt.protocol (KDE)

