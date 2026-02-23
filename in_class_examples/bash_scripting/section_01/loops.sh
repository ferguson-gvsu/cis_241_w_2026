#! /bin/bash

for x in 1 2 3 "hello world" hi
do
  echo $x
done

for i in $(seq 0 10)
do
  echo $i
done

for line in $(ls)
do
  echo $line
done

sum=0
for x in $@
do
  sum=$((sum + x))
done
echo "Your sum is $sum"

x=10
while (( x >= 0 ))
do
  echo $x
  x=$((x-1))
done
