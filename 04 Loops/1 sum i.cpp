#include <iostream>
#include <conio.h>
#include <iostream.h>


main()
{
	int lowerLimit, upperLimit;
	

	cout<<"enter lowerLimit ";
	cin>>lowerLimit;
	cout<<"enter upperLimit ";
	cin>>upperLimit;
	
	int i=lowerLimit,sum=0;
	while(i<=upperLimit)
	{
		sum = sum+i;
		
		i++;
	}
	
	cout<<i;
	
	getch();
}

