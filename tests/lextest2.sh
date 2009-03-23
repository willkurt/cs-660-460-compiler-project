#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "int x; 
x = 5;
int main(){
char y = 'a';
}"

./a.out -dl <<EOF
int x; 
x = 5;
int main(){
char y = 'a';
}
EOF
cat lexdebug.log
