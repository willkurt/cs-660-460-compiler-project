#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "int x = 5;"
./a.out -dl <<EOF
int x = 5;
EOF
cat lexdebug.log
