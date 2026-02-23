#! /bin/bash

x=$(($1 * 2))
echo "x is $x"
echo "arg 1 is $1"
echo "arg 2 is $2"
if (( $x == $2  || $1 == $2))
then
  echo "match"
  echo "Second argument is twice the first"
elif (( $1 == $2 ))
then
  echo "args match"
else
  echo "No match!"
fi
