#!/usr/bin/bash
#
# elif test
#
echo "Input Score: "
read score

if (( $score>=90 ))
then
	echo "Your score is great."
elif (( $score>=80 ))
then
	echo "Your score is good."
else
	echo "Your score is not good."
fi

