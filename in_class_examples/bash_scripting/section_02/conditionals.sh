#! /bin/bash

#if [ $1 = $2 ]
if (( $1 == $2 )) && (( $1 > 0))
then
  echo "Equal!"
elif [ $1 -gt $2 ] && [ $1 -gt 0 ]
then
  echo "Greater than"
else 
#then
  echo "Skipped it!"
fi
