#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "int x = 0;
for ( int x = 0; x < 5; x++ )
{
cout<< x;
}"

./a.out -dp <<EOF
for ( int x = 0; x < 5; x++ )
{
cout<< x;
}
EOF
cat parsedebug.log
