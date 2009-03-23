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
#include <fstream>
#include <iostream>
#include "symbol_content.hpp"

class SymbolTable{
  std::stack<std::map<std::string, SymbolContent> > st;

  
  //used for const references to the actual top
  // stack.top() should be used for mutable access
public:

  SymbolTable();

  
  //returns false if the add failed due to 
  //a conflict of the same value existing
  bool add(std::string,SymbolContent);

  //like add this one will update an existing value for a k
  //however it will fail and return false 
  //if the k does NOT exist 
  bool update(std::string,SymbolContent);

  SymbolContent *searchTop(std::string);

  SymbolContent *searchAll(std::string);
  
  //tells whether or not a sybmol is shawoded in the st
  bool shadowing(std::string);

  //if no map is given, we'll just create an empty one
  void push();

  //in case we want to build the symbol table first
  void push(std::map<std::string,SymbolContent>);
  //need to implement Dump() but not sure exactly what we want
  void outputToFile();
  //just a way to access to private pop method on the st
  void pop();

  //to interprest symbol content types bool array
  std::string readSpecifiers(bool* );
};

#endif
