#!/bin/bash
for((i = 2; i<10; i++))
do
  for((e = 1; e<10; e++))
  do
    echo -e -n "$(($i*$e))  "

    done
  echo " "
done
