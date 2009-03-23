#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "float foo(){ 
float x = 5.6;
return x;
}
int main(){
foo();
}"

./a.out -dp <<EOF
float foo(){ 
float x = 5.6;
return x;
}
int main(){
foo();
}
EOF
cat parsedebug.log
