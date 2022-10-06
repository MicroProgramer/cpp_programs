#include <iostream>
#include <conio.h>
#include <iostream.h>
#include <math.h>


bool isPrime(int n)
{
	int i=2;
	int sq = sqrt(n);
	while(i <= sq)
	{
		if(n%i == 0)
		{
			return false;
		}	
		i++;
	}
	
	return true;	
		
}

main()
{
	int n, upperLimit;
	
	cout<<"Enter upper number ";
	cin>>upperLimit;
	
	n = 2;
	while(n <= upperLimit)
	{
		if(isPrime(n))
		{
			cout<<n<<"\t";
		}
		
		n++;
	}
	
	
	
	
	getch();
}

