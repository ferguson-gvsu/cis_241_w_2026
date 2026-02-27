#! /bin/bash

add(){
  echo "$(($1 + $2))"
}

add 3 2
add 1 10
result=$(add $1 $2)
echo "My result is $result"
echo "Outside func: $1"
