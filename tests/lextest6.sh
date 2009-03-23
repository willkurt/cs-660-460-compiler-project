#!/bin/bash
#runs a string in a.out with lex debugging on
#then cats the output
echo "int main(){
int test[5] = {0};
test[0] = 5;
}"

./a.out -dl <<EOF
int main(){
int test[5] = {0};
test[0] = 5;
}
EOF
cat lexdebug.log
