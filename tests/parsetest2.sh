#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "int x; 
x = 5;
int main(){
char y = 'a';
}"

./a.out -dp <<EOF
int x; 
x = 5;
int main(){
char y = 'a';
}
EOF
cat parsedebug.log
