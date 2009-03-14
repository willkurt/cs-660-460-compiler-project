#runs a string in a.out with lex debugging on
#then cats the output
echo "enter test string"
read test
./a.out -dl <<EOF
$test
EOF
cat lexdebug.log