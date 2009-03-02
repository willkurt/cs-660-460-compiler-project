#include "SymbolTable.hpp"
SymbolTable::SymbolTable()
  :st()
{
  std::map<std::string,SymbolContent> firstMap;
  st.push(firstMap);
}


//this method will only add if the item doesn't already exist 
bool SymbolTable::Add(std::string k, SymbolContent v)
{
  //current map
  std::map<std::string,SymbolContent> currentMap = st.top();
  //if the key(k) is found before the end...
  if(currentMap.find(k) != currentMap.end())
    {
      //return false
      return false;
    }
  else
    {
      //otherwise we can go ahead and set the value(v)
      currentMap[k] = v;
      st.pop();
      st.push(currentMap);
      return true;
    }
}



//this method will only update if the item DOES already exist 
bool SymbolTable::Update(std::string k, SymbolContent v)
{
  //current map
  std::map<std::string,SymbolContent> currentMap = st.top();
  //if the key(k) is NOT found before the end...
  if(currentMap.find(k) == currentMap.end())
    {
      //return false
      return false;
    }
  else
    {
      //otherwise we can go ahead and set the value(v)
      currentMap[k] = v;
      st.pop();
      st.push(currentMap);
      return true;
    }
}


void SymbolTable::Push(std::map<std::string,SymbolContent> symbolMap)
{
  st.push(symbolMap);
}

void SymbolTable::Push()
{
  std::map<std::string,SymbolContent> newMap;
  st.push(newMap);
}




//searches only the top layer, returns a pointer to 
//SymbolContent or 0 if none is found
//obviously only the top layer
SymbolContent SymbolTable::SearchTop(std::string k)
{
  std::map<std::string,SymbolContent> top = st.top();
  return top[k];
}



