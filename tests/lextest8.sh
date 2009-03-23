#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "int x = 0;
while ( 1 )
{
cout<< x;
}"

./a.out -dl <<EOF
int x = 0;
while ( 1 )
{
cout<< x;
}
EOF
cat lexdebug.log
