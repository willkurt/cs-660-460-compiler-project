//okay let's do something more interesting
//The Sieve of Eratosthenes!

int main()
{
  int sieve[101];
  int x;
  int result;
  for(x = 2;x < 101; x = x+1)
    {
      int num = x;
      int m = 2;
      while(num < 101)
	{
	  num = x * m;
	  sieve[num] = 1;
	  m = m + 1;
	}
    }

  //let's check some primes!
  //1 is not prime (error actuall with 2)
  //0 is prime
  //expect: 001001
  result = sieve[13];
  printi(result);
 
  result = sieve[17];
  printi(result);
 
  result = sieve[22];
  printi(result);
 
  result = sieve[23];
  printi(result);
 
  result = sieve[97];
  printi(result);
 
  result = sieve[99];
  printi(result);
  printn();
}
  
