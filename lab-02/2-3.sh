#!/usr/bin/bash
#
# 이중 while 문으로 구구단 출력
# printf로 정렬 및 맞춤, echo로 줄바꿈
#

count=2
mul=1

while (( count<10 ))
do
	while (( mul <= 9 ))
	do
		result=$((count * mul))
		printf "%2d " "$result"
		let mul+=1
	done
	
	echo	
	let mul=1
	let count+=1
done
