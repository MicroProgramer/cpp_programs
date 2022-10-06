#include <iostream>
#include <conio.h>
#include <iostream.h>


main()
{
	int n, lowerLimit, upperLimit;
	
	cout<<"enter a number to get its table ";
	cin>>n;
	cout<<"enter lowerLimit ";
	cin>>lowerLimit;
	cout<<"enter upperLimit ";
	cin>>upperLimit;
	
	int i=lowerLimit;
	while(i<=upperLimit)
	{
		cout<<n<<"*"<<i<<"="<<n*i;
		cout<<'\n';
		
		i++;
	}
	
	
	
	getch();
}

