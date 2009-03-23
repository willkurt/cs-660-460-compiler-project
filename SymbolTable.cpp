#include "SymbolTable.hpp"
SymbolTable::SymbolTable()
  :st()
{
  std::map<std::string,SymbolContent> firstMap;
  st.push(firstMap);
}

//this method will only add if the item doesn't already exist 
bool SymbolTable::add(std::string k, SymbolContent v)
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
bool SymbolTable::update(std::string k, SymbolContent v)
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


void SymbolTable::push(std::map<std::string,SymbolContent> symbolMap)
{
  st.push(symbolMap);
}

void SymbolTable::push()
{
  std::map<std::string,SymbolContent> newMap;
  st.push(newMap);
}


//not much here, mostly an accessor
void SymbolTable::pop()
{
  st.pop();
}



//searches only the top layer, returns a pointer to 
//SymbolContent or 0 if none is found
//obviously only the top layer
SymbolContent *SymbolTable::searchTop(std::string k)
{
  std::map<std::string,SymbolContent> top = st.top(); 
  SymbolContent * returnValue = 0;
  if(top.find(k) != top.end())
    {
      returnValue = &top[k];
    }
  return returnValue;
}


SymbolContent *SymbolTable::searchAll(std::string k)
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
bool SymbolTable::shadowing(std::string k)
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


void SymbolTable::outputToFile()
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
	    outFile << "Symbol: " << mapIter->first << " lineno: " << mapIter->second.lineno <<"specifiers: "<<mapIter->second.specifiers<<std::endl;
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


//not quite ready
//reades the specifications bool array into human readable form
std::string SymbolTable::readSpecifiers(bool *specs)
{
  std::string specsReadable;
  specsReadable += "storage: ";
  if(specs[0])
    {
      specsReadable += "auto ";
    }
  if(specs[1])
    {
      specsReadable += "register ";
    }
  if(specs[2])
    {
      specsReadable += "static ";
    }
 if(specs[3])
    {
      specsReadable += "extern ";
    }
 if(specs[4])
    {
      specsReadable += "type_def ";
    }
 specsReadable += "type: ";
 if(specs[5])
    {
      specsReadable += "void ";
    }
 if(specs[6])
    {
      specsReadable += "char";
    }
 if(specs[7])
    {
      specsReadable += "short ";
    }
 if(specs[8])
    {
      specsReadable += "int ";
    }
 if(specs[9])
    {
      specsReadable += "long ";
    }
 if(specs[10])
    {
      specsReadable += "float ";
    }
 if(specs[11])
    {
      specsReadable += "double ";
    }
 if(specs[12])
    {
      specsReadable += "signed ";
    }
 if(specs[13])
    {
      specsReadable += "unsigned ";
    }
 if(specs[14])
    {
      specsReadable += "struct ";
    }

 if(specs[15])
    {
      specsReadable += "union ";
    }

 if(specs[16])
    {
      specsReadable += "enum ";
    }

 if(specs[17])
    {
      specsReadable += "typedef_name ";
    }

 specsReadable += "type-qualifiers: ";
 if(specs[18])
    {
      specsReadable += "const ";
    }

 if(specs[19])
    {
      specsReadable += "volatile ";
    }

 return specsReadable;

}
