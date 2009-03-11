/*main.cpp
 *main file for scanner/paser shoudl eventually have
 *code for debuging
 */

#include "c_grammar.h"
#include <iostream>
bool lexDebug;
bool stDebug;

/*debug outputs we're worried about initially are:
 * -d with l or s (for lexer or symboltable)
 *
 */

int main(int argc, char* argv[])
{
  //default values for thse
  lexDebug = false;
  stDebug = false; 
  
  //evaluate the debug arguments
  //debug must be the first argument
  //also more error check would certainly not hurt
  if(argc >= 2)
    {
      std::string darg = argv[1];
      int locL = darg.find('l');
      int locS = darg.find('s');
      if(locL == 2 || locL == 3) //valid locations of 'l'
	{
	  lexDebug = true;
	}
      if(locS == 2 || locS == 3)
	{
	  stDebug = true;
	}
    }   

  //some more testing
  //I actually just put this here to make sure it would compile
  SymbolTable st();
  yyparse();
}

int yywrap()
{
  return(1);
}

void yyerror(const char *msg)
{
  std::cout<< "Arrrrrg!!!!\n";
}
