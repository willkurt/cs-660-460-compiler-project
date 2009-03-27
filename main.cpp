/*main.cpp
 *main file for scanner/paser shoudl eventually have
 *code for debuging
 */

#include "c_grammar.h"
#include <iostream>

SymbolTable st;
bool lexDebug;
bool stDebug;
bool parseDebug;
bool declMode = true;

bool undeclVar = false;
bool redeclVar = false;

std::ofstream lexDebugOut;
std::ofstream parseDebugOut;
extern int lineCount;
extern int currentCharDepth;
extern char *yytext;


/*debug outputs we're worried about initially are:
 * -d with l or s or p (for lexer, symboltable, parser)
 *
 * debug for symbol table and parser not implemented ... yet :)
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
    }   

  //some more testing
  //I actually just put this here to make sure it would compile
  
  if(yyparse() == 0)
  {
  std::cout<< "Success" << std::endl;
  }
  else
  {
  std::cout<< "Error" << std::endl;
  }

  //print symbol table if necessary
  if(stDebug)
    {
      st.outputToFile();
    }

  //after parse close everything up
  lexDebugOut.close();
  parseDebugOut.close();
}

int yywrap()
{
  return(1);
}

void yyerror(const char *msg)
{
  std::cout<< "the error at line "<< lineCount <<" around char "<< currentCharDepth  <<" makes me go Arrrrrg!!!!\n"<< "I couldn't take it any more once I saw "<<yytext<<std::endl;
}
