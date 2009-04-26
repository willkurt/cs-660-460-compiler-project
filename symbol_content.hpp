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
enum specDefs {xAUTO = 01,xREGISTER = 02, xSTATIC = 04,xEXTERN = 16,
	      xTYPEDEF = 32,xVOID = 64,xCHAR = 128, xSHORT = 256,
	      xINT = 512,xLONG = 1024,xFLOAT = 2048,xDOUBLE = 4096,
	      xSIGNED = 8192, xUNSIGNED = 16384,xSTRUCT = 32768,
	      xUNION = 65536, xENUM = 131072,xTYPEDEF_NAME = 262144,
	      xCONST = 524288,xVOLATILE = 1048576,xPOINTER = 2097152,
	       xFUNCTION = 4194304,xARRAY = 8388608};

struct SymbolContent
{
  unsigned int specs;
  struct array_const_node *ac_node;
  int lineno;
};


#endif /* SYMBOL_CONTENT_H */
