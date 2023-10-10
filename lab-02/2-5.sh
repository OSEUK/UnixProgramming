#!/bin/bash
#
# sum 함수를 통해 계산
# sum 10 20 실행 후 종료값이 $?에 저장
#

sum(){
	((sum = $1 + $2))
	return $sum
}

sum 10 20 
echo The result is $?

exit 0

