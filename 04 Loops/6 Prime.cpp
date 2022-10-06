#include <iostream>
#include <conio.h>
#include <iostream.h>


main()
{
	long i, n;
	
	cout<<"Enter a number to check whether it is prime or not\t";
	cin>>n;
	
	bool isPrime=true;
	i = 2;
	while(i < n )
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
		cout<<"Prime Number";
	}
	else
	{
		cout<<"Not Prime";
	}

	
	getch();
}

