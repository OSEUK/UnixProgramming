#!/usr/bin/bash
#
# test while loop
#

count=1
sum=0
while (( count <= 10 ))
do
	(( sum += count ))
	let count+=1
done

echo "Sum(1-10) : $sum"

