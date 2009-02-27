/* binary_t_node.hpp
 * basic class for a binary tree node
 */
#ifndef BINARY_T_NODE_H
#define BINARY_T_NODE_H

class Node{
  //value by which nodes are compared
  string const value; 

  /*content is what the node holds
   *the type of this will need  to be changed as this
   *project progresses
   */
  int const content;

  /*const point to another node
   *the value of the node can change,
   *but not the value of the pointer itself
   *each tree can have at most 2 child nodes
   */
  
  Node * const left_child;

  Node * const right_child;
  
public:
  //node is built from a value and content
  Node (string, int);
  
  //method for adding left child
  void add_lchild(Node);

  //method for adding right child
  void add_rchild(Node);
  
  bool lchild_null() const;

  bool rchild_null() const;

}


#endif /* BINARY_T_NODE_H */
