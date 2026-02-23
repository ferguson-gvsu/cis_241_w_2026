#! /bin/bash

for x in 1 2 3 4 5 "hi mom" a
do
  echo $x
done

echo "---------------"
sum=0
for arg in $@
do
  echo "$arg"
  sum=$((sum + arg))
done
echo "Final sum is $sum"

echo "---------------"
for i in $(seq 0 10)
do
  echo $i
done

echo "---------------"
for file in $(ls)
do
  echo $file
done

echo "---------------"
x=10
while (( x >= 0 ))
do
  x=$((x - 1))
  if (( x == 7))
  then
    continue
  fi
  echo $x
done
