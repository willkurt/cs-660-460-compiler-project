#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "int x; 
int y = x +5;
int main(){
int y = x + 5;
}"

./a.out -dp <<EOF
int x; 
int y = x +5;
int main(){
int y = x + 5;
}
EOF
cat parsedebug.log
