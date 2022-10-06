
#include <conio.h>
#include <iostream.h>
#include <math.h>

bool isPrime(int n)
{
	int i=2;
	bool isPrime = true;
	while(i < n)
	{
		if(n%i == 0)
		{
			isPrime = false;
			break;
		}	
		i++;
	}
	
	if(isPrime)
	{
		return true;	
	}
	else
	{
		return false;	
	}
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
			cout<<n<<" ";
		}
		
		n++;
	}
	
	
	cout<<"\n\nwork done";
	getch();
	
}

