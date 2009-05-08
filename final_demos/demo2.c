//another simple test...
int main()
{
  int x = 5;
  int y = 17;
  int result;
  result = y/x;
  //expect 3
  printi(result);
  printn();

  result = y%x;
  //expect 2
  printi(result);
  printn();
  
  result = y%x+y/x;
  //exptect 5
  printi(result);
  printn();
}
  

