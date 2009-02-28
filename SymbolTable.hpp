/*SymbolTable.hpp
 *Symbol Table
 *
 *Stack of balanced binary search trees
 */
#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H
#include <string>
#include <stack>
#include <map>
#include "symbol_content.hpp"

class SymbolTable{
  std::stack<std::map<std:: string, SymbolContent> > st;
public:
  SymbolTable();

  void Add(std::string,SymbolContent){};

  SymbolContent* SearchTop(std::string){};

  SymbolContent* SearchAll(std::string){};
  
  bool Shadowing(std::string){};

  //need to implement Dump() but not sure exactly wat we ant

};

#endif
