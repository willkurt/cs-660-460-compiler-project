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


//not much here, mostly an accessor
void SymbolTable::Pop()
{
  st.pop();
}



//searches only the top layer, returns a pointer to 
//SymbolContent or 0 if none is found
//obviously only the top layer
SymbolContent *SymbolTable::SearchTop(std::string k)
{
  std::map<std::string,SymbolContent> top = st.top(); 
  SymbolContent * returnValue = 0;
  if(top.find(k) != top.end())
    {
      returnValue = &top[k];
    }
  return returnValue;
  
}


SymbolContent *SymbolTable::SearchAll(std::string k)
{
  //store stack contents in a temp stack
  std::stack<std::map<std::string, SymbolContent> > tmp;
  SymbolContent * returnValue = 0;
  while(!st.empty())
    {
      std::map<std::string, SymbolContent> currentTop = st.top();
      if(currentTop.find(k) != currentTop.end())
	{
	  returnValue = &currentTop[k];
	  break;
	}
      tmp.push(currentTop);
      st.pop();
    }

  //okay now we just have to put what we popped back on the table
  while(!tmp.empty())
    {
      st.push(tmp.top());
      tmp.pop();
    }
  return returnValue;
  
  
}

