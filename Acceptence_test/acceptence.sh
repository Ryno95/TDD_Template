#!/bin/bash

SUCCESS_COLOR='\033[1;32m'
ERROR_COLOR="\033[1;31m"
NORMAL_COLOR="\033[0m"

./TDD
RETURN=$(echo $?)

if [ $RETURN == "1" ]
then
    printf "$SUCCESS_COLOR Correct error with no input $NORMAL_COLOR \n"
else
    printf "$ERROR_COLOR Incorrect errorcode with no input $NORMAL_COLOR \n"
fi

RESULT=$(./TDD 4)
RETURN=$(echo $?)

if [[ $RETURN == "0" && $RESULT == "16" ]]
then
    printf "$SUCCESS_COLOR Corrct! The square of 4 is $RESULT $NORMAL_COLOR \n"
else
    printf "$ERROR_COLOR Incorrect! The square of 4 is NOT $RESULT $NORMAL_COLOR \n"
fi
