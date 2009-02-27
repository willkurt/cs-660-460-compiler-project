#include "binary_t_node.hpp"
#include <iostream>

Node::Node(string a_value, int some_content)
  :value(a_value),
   content(some_content),
   left_child(0),
   right_child(0)
{}

void Node::add_lchild(Node& c_node)
{
  left_child = &c_node;
}

void Node::add_rchild(Node& c_node)
{
  right_child = &c_node;
}

void Node::null_lchild()
{
  left_child = 0;
}

void Node::null_rchild()
{
  right_child = 0;
}


//remove this later
int main()
{
  Node x ("Hello",6);
  Node y ("Bye",7);
  x.add_lchild(y);
  return 0;
}
