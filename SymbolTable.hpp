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
  std::stack<std::map<std::string,SymbolContent> > st;
public:
  SymbolTable();
};

#endif
