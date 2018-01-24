#
# Regular cron jobs for the mingw-w64-libunistring package
#
0 4	* * *	root	[ -x /usr/bin/mingw-w64-libunistring_maintenance ] && /usr/bin/mingw-w64-libunistring_maintenance
