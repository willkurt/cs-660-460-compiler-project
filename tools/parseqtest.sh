#!/bin/bash
#runs a string in a.out with parse debugging on
#then cats the output
echo "enter test string"
read test
./a.out -dp <<EOF
$test
EOF
cat parsedebug.log