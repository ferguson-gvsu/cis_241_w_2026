#! /bin/bash

x=7
echo "x is $x"
#grep hello example.txt
name="louie"
name2='${name} is here'
files=$(ls)
file_length=$(wc -l var_test.sh)
filename=example
result=$(( (${x} + 1) * 5 ))

echo "x is $x"
echo "name is $name"
echo "name2 is $name2"
echo "files is $files"
echo "file_length is $file_length"
echo "${filename}_backup"
echo "result is $result"
