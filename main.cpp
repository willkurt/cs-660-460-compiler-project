/*main.cpp
 *main file for scanner/paser shoudl eventually have
 *code for debuging
 */

#include "c_grammar.h"
#include "SymbolTable.cpp"
#include <iostream>

SymbolTable st;
bool lexDebug;
bool stDebug;
bool parseDebug;
bool declMode = true;


//Used to output error message
extern char buffer [500];
extern FILE* yyin;
extern FILE* yyout;
FILE* ip;

bool undeclVar = false;
bool redeclVar = false;

std::ofstream lexDebugOut;
std::ofstream parseDebugOut;
std::ofstream tacOut;
extern int lineCount;
extern int currentCharDepth;
extern char *yytext;
extern struct ast_root ast;
extern void print_ast_root(ast_root *ptr);
extern std::string ast_3ac(ast_root *ptr);
/*debug outputs we're worried about initially are:
 * -d with l or s or p (for lexer, symboltable, parser)
 *
 */

int main(int argc, char* argv[])
{
  //default values for thse
  lexDebug = false;
  stDebug = false; 
  parseDebug = false;
  
  //for now we'll create these even if we don't use it
  lexDebugOut.open("lexdebug.log");
  parseDebugOut.open("parsedebug.log");
  tacOut.open("3ac.txt");
  //evaluate the debug arguments
  //debug must be the first argument
  //also more error check would certainly not hurt
  if(argc >= 2)
    {
      std::string darg = argv[1];
      int locL = darg.find('l');
      int locS = darg.find('s');
      int locP = darg.find('p');
      if(locL == 2 || locL == 3 || locL == 4) //valid locations of 'l'
	{
	  lexDebug = true;
	}
      if(locS == 2 || locS == 3 || locS == 4)
	{
	  stDebug = true;
	}
      if(locP == 2 || locP == 3 || locP == 4)
	{
	  parseDebug = true;
	}
      if(argc >= 3)
	{
	  if(argv[2] != NULL)
	    {
	      yyin = fopen(argv[2], "r");
	      ip = fopen(argv[2], "r");
	      fgets(buffer, 500, ip);
	    }
	  if(argc >= 4)
	    {
	      if(argv[3] != NULL)
		{
	      yyout = fopen(argv[3], "w+");
		}
	    }
	}
    }   
  
   

  //some more testing
  //I actually just put this here to make sure it would compile
  
  yyparse();

  //print symbol table if necessary
  if(stDebug)
    {
      st.outputToFile();
    }

  //after parse close everything up
  lexDebugOut.close();
  parseDebugOut.close();
  if(parseDebug)
    {
  print_ast_root(&ast);
    }
  std::string tac = ast_3ac(&ast);
  std::cout<<"3ac printing...:"<<std::endl;
  std::cout<<tac<<std::endl;
  tacOut<<tac;
  std::cout<<"is working!"<<std::endl;
}

int yywrap()
{
  return(1);
}

void yyerror(const char *s)
{
fflush(yyout);
printf("%*s%*s Line %i Error: %s\n", currentCharDepth, buffer, currentCharDepth, "^", lineCount, s);
}
/*
void yyerror(const char *msg)
{
  std::cout<< "the error at line "<< lineCount <<" around char "<< currentCharDepth  <<" makes me go Arrrrrg!!!!\n"<< "I couldn't take it any more once I saw "<<yytext<<std::endl;
}
*/
