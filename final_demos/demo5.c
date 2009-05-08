//Hmm... let's try to build a really decent...
//.... in-memory multipilication table!
int main()
{
  int mtable[10][10][10];
  int a;
  int b;
  int c;
  int result;
  for(a = 0;a < 10; a = a + 1)
    {
      for(b = 0;b < 10; b = b + 1)
	{

	  for(c = 0;c < 10; c = c + 1)
	    {
	      
	      mtable[a][b][c] = a*b*c;
		   
	       
	    }
	}
      
    }
  //now let's try some math!
  result = mtable[2][5][6];
  //expect 60
  printi(result);
  printn();
 

  result = mtable[5][6][2];
  //expect 60
  printi(result);
  printn();

  result = mtable[4][3][5];
  //expect 60
  printi(result);
  printn();
 
  result = mtable[2][5][6] * mtable[5][6][2];
  //expect 3600
  printi(result);
  printn();

  result = mtable[1][1][7];
  //expect 60
  printi(result);
  printn();
 
 
  


}
