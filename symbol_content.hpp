/*symbol_content.hpp
 *
 *A simple struct which is used to 
 *store any type of object found
 * in a file
 */
#ifndef SYMBOL_CONTENT_H
#define SYMBOL_CONTENT_H
#include <string>

struct SymbolContent
{
  /*
   * my thought for now is to store type info
   * as a string, and point to the object with
   * a void point... I think there is
   * probably a better way
   */

  std::string type;
  void* ptr;
};


#endif /* SYMBOL_CONTENT_H */
