/*c_grammar.h
 *header file for all files used to generate the c compiler
 */

#ifndef C_GRAMMAR_H
#define C_GRAMMAR_H
#include <stdio.h>

extern "C"{
int yyparse();
void yyerror(const char *);
int yywrap(); 
int yylex();
}
#endif
