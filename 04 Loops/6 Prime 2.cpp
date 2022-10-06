#include <iostream>
#include <conio.h>
#include <iostream.h>


main()
{
	long i, n,sqrt;
	
	cout<<"Enter a number to check whether it is prime or not\t";
	cin>>n;
	
	i = 2;
	sqrt = pow(n,0.5);
	while(i <= sqrt)
	{
		if(n%i == 0)
		{
			break;
		}
		
		i++;
	}
	
	if(i>sqrt)
	{
		cout<<"Prime Number";
	}
	else
	{
		cout<<"Not Prime";
	}

	
	getch();
}

