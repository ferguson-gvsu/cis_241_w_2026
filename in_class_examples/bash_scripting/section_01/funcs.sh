#! /bin/bash

function add(){
  echo "First arg is $1"
  echo "Second arg is $2"
  #echo 'Your total is $1.50'
  #echo "This is a 'test'"
  #echo "first arg is $1, total is \$$1.50"
}

add 3 2
add $1 $2
add
echo "This is outside the function: $1"
