#!/usr/bin/bash
#
# 2019 unix 3
#

sum=0
for i in $*
do
	(( sum += i ))
done

echo $sum
	
