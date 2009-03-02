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
  
  //returns false if the add failed due to 
  //a conflict of the same value existing
  bool Add(std::string,SymbolContent);

  //like add this one will update an existing value for a k
  //however it will fail and return false 
  //if the k does NOT exist 
  bool Update(std::string,SymbolContent);

  SymbolContent* SearchTop(std::string);

  SymbolContent* SearchAll(std::string);
  
  bool Shadowing(std::string) const;

  //need to implement Dump() but not sure exactly what we want

};

#endif
