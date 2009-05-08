//simple function definition and call
//my functions are fairly limited
int square(int x)
{
  int squared = x*x;
  return squared;
}

int cube(int y)
{
  int cubed = y*y*y;
  return cubed;
}

int main()
{
  int num = 2;
  int result;

  //expect 4
  result = square(num);
  printi(result);
  printn();

  //expect 8
  result = cube(num);
  printi(result);
  printn();



}
