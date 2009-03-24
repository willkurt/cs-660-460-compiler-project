#!/bin/bash
#test the pushisng and poping of the st
./a.out <<EOF
int main(int me)
{
int a;
if(a)
  {
   int b;
   if(b)
     {
      int c;
      !!!ST
     }
   }
}
EOF
cat stout.txt