a.out: main.cpp lex parse
	g++ -w -o a.out main.cpp lex.yy.c y.tab.c
	
lex: new_c_grammar.lex
	lex new_c_grammar.lex

parse: ast_c_grammar.y
	yacc ast_c_grammar.y
	
clean: 
	rm a.out lex.yy.c y.tab.c
