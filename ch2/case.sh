#!/usr/bin/bash
#
# test case
#
echo "Select command : "
read cmd

case $cmd in
	[0-9])
		date
		;;
	cd|CD)
		echo $HOME
		;;
	[aA-C]*)
		pwd
		;;
	*)
		echo "Usage : select command"
		;;
esac
