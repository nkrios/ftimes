#
# Regular cron jobs for the ftimes package
#
0 4	* * *	root	[ -x /usr/bin/ftimes_maintenance ] && /usr/bin/ftimes_maintenance
