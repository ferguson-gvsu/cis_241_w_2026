#! /bin/bash

arr=(1 2 3 a b c)
arr[0]=test
arr+=(5 "hello world")
echo "0th item: ${arr[0]}"
echo "1th item: ${arr[1]}"
echo "2th item: ${arr[2]}"
echo "3th item: ${arr[3]}"
echo "4th item: ${arr[4]}"
echo "5th item: ${arr[5]}"
echo "6th item: ${arr[6]}"
echo "7th item: ${arr[7]}"
echo "As a string: ${arr[*]}"

for x in "${arr[@]}"
do
  echo "Item: $x"
done
