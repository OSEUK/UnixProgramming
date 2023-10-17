#!/usr/bin/bash
#
# test file type
#
echo "Input file name: "
read file

if [[ ! -e $file ]]
then
	echo "$file File not exists."
elif [[ -f $file ]]
then
	echo "$file is a regular file."
elif [[ -d $file ]] 
then
	echo "$file is a directory."
else
	echo "$file is a special file."
fi

