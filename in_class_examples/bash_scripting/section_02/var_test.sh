#! /bin/bash

x=7
name="louie laker"
name2=louie
echo "x is $x"
echo "name is $name"
echo "name2 is $name2"

num_lines=$(cat var_test.sh | wc -l)
echo "This file has $num_lines lines!"


filename=example
echo "${filename}_backup"

echo "$(( (${x} + 1) * 3 ))"

#cur_dir=$(pwd)
#echo "Current directory: $cur_dir"
#mkdir test
#cd test
#mkdir foo
#cd foo
#echo "Inner directory:"
#pwd
#cd $cur_dir
#echo "Final directory:"
#pwd
