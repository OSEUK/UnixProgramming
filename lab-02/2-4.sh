#!/bin/bash
#
# case 제어문 활용
# 각 case에 따른 문장 출력
#


echo -n "Is is morning?"
read answer
case $answer in
	y* | Y* ) echo Good morning ;;
	n* | N* ) echo Have a good day ;;
	*) echo Sorry your answer is not proper ;;
esac

exit 0
