#include <iostream>
#include <conio.h>
#include <iostream.h>

main()
{
	int n, digit, sum;
	
	cout<<"Enter n ";
	cin>>n;
	
	sum=0;
	while(n!=0)
	{		
		digit = n%10;
		sum = sum+digit;		
		
		n = n/10;
	}
	
	cout<<"sum of digits = "<<sum;
	
	
	getch();
}

