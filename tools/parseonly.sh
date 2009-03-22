#!/bin/bash
#used when we're just rebuilding the yacc file
yacc -dv -t new_c_grammar.y
g++ main.cpp lex.yy.c y.tab.c SymbolTable.cpp