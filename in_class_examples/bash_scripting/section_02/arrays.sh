#! /bin/bash

arr=(1 2 3 a b c)
echo "${arr[*]}"
arr+=(10 5 x y z)
arr[0]="hello world"
arr=(3 8 100)
echo "${arr[*]}"
echo "The first item is ${arr[0]}"
echo "The second item is ${arr[1]}"
echo "The third item is ${arr[2]}"
echo "The hundredth item is ${arr[100]}"
echo "did not crash and burn"
echo "first command line arg: $1"
new_arr=${arr[@]:2:3}
echo ${new_arr[*]}

#for x in "${arr[@]}"
#do
#  echo "$x $((x + 1))"
#done


echo "First item: ${arr[0]}"
idx=0
echo "First item (with var): ${arr[idx]}"
echo "starting loop"
for idx in "${!arr[@]}"
do
  echo "index: $idx"
  x=${arr[$idx]}
  next_idx=$((idx + 1))
  next=${arr[$next_idx]}
  echo "$x $((x + next))"
done
