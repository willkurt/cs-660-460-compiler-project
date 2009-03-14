#used when we're just rebuilding the lex file
lex new_c_grammar.lex
g++ main.cpp lex.yy.c y.tab.c