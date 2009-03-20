/*symbol_content.hpp
 *
 *A simple struct which is used to 
 *store any type of object found
 * in a file
 */
#ifndef SYMBOL_CONTENT_H
#define SYMBOL_CONTENT_H
#include <string>

struct SymbolContent
{
  /*
   *
   */
  
  //things like const, enum etc can go here
  //  std::list<std::string> modifiers;
  std::string type;
  int lineno;
};


#endif /* SYMBOL_CONTENT_H */
