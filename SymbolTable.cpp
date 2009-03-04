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


//returns true if the item is being shadowed
bool SymbolTable::Shadowing(std::string k)
{
  bool returnValue = false;
  std::stack<std::map<std::string, SymbolContent> > tmp;
  //we don't care if the symbol is in the current top
  tmp.push(st.top());
  //st minus current top
  st.pop();
  while(!st.empty())
    {
      std::map<std::string, SymbolContent> current;
      current = st.top();
      if(current.find(k) != current.end())
	{
	  returnValue =  true;
	  break;
	}
      tmp.push(st.top());
      st.pop();
    }
  
  //put everything back on stack
  while(!tmp.empty())
    {
      st.push(tmp.top());
      tmp.pop();
    }
  return returnValue;
}


void SymbolTable::OutputToFile()
{
    std::stack<std::map<std::string, SymbolContent> > tmp;
    std::ofstream outFile;
    outFile.open("stout.txt");
    int level = 0;
    while(!st.empty())
      {
	std::map<std::string,SymbolContent> current = st.top();
	std::map<std::string,SymbolContent>::iterator mapIter;
	outFile << level++ << " from top\n";
	outFile << "-----------\n";
	for(mapIter = current.begin(); mapIter != current.end(); mapIter++)
	  {
	    outFile << "Symbol: " << mapIter->first << " type:"<<mapIter->second.type << " ptr-address:"<<mapIter->second.ptr <<"\n";
	  }
	outFile << "\n";

	tmp.push(st.top());
	st.pop();
      }

      //push it all back on the original stack
      while(!tmp.empty())
	{
	  st.push(tmp.top());
	  tmp.pop();
	}
      outFile.close();
}
