/*symbol_content.hpp
 *
 *A simple struct which is used to 
 *store any type of object found
 * in a file
 */
#ifndef SYMBOL_CONTENT_H
#define SYMBOL_CONTENT_H
#include <string>

/*these are all def'd else where hence the need for an x*/
//storage
#define xAUTO = 01
#define xREGISTER = 02
#define xSTATIC = 04
#define xEXTERN = 16
#define xTYPEDEF = 32
//Types 
#define xVOID = 64
#define xCHAR = 128 
#define xSHORT = 256
#define xINT = 512
#define xLONG = 1024
#define xFLOAT = 2048
#define xDOUBLE = 4096
#define xSIGNED = 8192
#define xUNSIGNED = 16384
#define xSTRUCT = 32768
#define xUNION = 65536
#define xENUM = 131072
#define xTYPEDEF_NAME = 262144
     //type qualifiers
#define xCONST = 524288
#define xVOLATILE = 1048576
//other posibilies
#define xPOINTER = 2097152
#define xFUNCTION = 4194304

struct SymbolContent
{
  /*
   *
   */
  
  //this bool array will change to a bit field
  bool *specifiers;
  
  //bit field

  int specs;
  int lineno;
};


#endif /* SYMBOL_CONTENT_H */
