#!/bin/bash

read wordsfile
read gridfile

RUNNING_TIME1=`./a.out $wordsfile $gridfile | tail -1`
RUNNING_TIME2=`./a.out $wordsfile $gridfile | tail -1`
RUNNING_TIME3=`./a.out $wordsfile $gridfile | tail -1`
RUNNING_TIME4=`./a.out $wordsfile $gridfile | tail -1`
RUNNING_TIME5=`./a.out $wordsfile $gridfile | tail -1`

TotalTime=`expr $RUNNING_TIME1 + $RUNNING_TIME2 + $RUNNING_TIME3 + $RUNNING_TIME4 + $RUNNING_TIME5`

echo $(($TotalTime/5))