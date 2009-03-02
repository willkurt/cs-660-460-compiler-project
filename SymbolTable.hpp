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
  std::stack<std::map<std::string, SymbolContent> > st;


  
  //used for const references to the actual top
  // stack.top() should be used for mutable access
public:
 
  SymbolTable();
  
  //returns false if the add failed due to 
  //a conflict of the same value existing
  bool Add(std::string,SymbolContent);

  //like add this one will update an existing value for a k
  //however it will fail and return false 
  //if the k does NOT exist 
  bool Update(std::string,SymbolContent);

  SymbolContent SearchTop(std::string);

  SymbolContent SearchAll(std::string);
  
  bool Shadowing(std::string) const;

  //if no map is given, we'll just create an empty one
  void Push();

  //in case we want to build the symbol table first
  void Push(std::map<std::string,SymbolContent>);
  //need to implement Dump() but not sure exactly what we want

};

#endif
