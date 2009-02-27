/*splay_tree.hpp
 *
 *class for a splay tree
 *a variety of balanced binary search tree
 */

#ifndef SPLAY_H
#define SPLAY_H

class Splay_tree{
  /*const pointer, meaning
   *pointer cannot change
   *but the value it points to can
   */
  Node * const root;
public:
  Splay_tree();
  
  /*No methods in this tree should be const
   *because all methods should cause the tree to restructure
   */


  void add_node(Node);
  
  //get_node finds node with a value
  //remember to change if the value of a node changes
  Node find_node(string);

private:
  //splay decides which action to perform
  void splay(Node);

  void zig(Node);

  void zig_zig(Node);
  
  void zig_zag(Node);

  Node parent(Node);

  bool is_root(Node);

}

#endif /* SPLAY_H */
