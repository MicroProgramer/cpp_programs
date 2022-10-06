#include <iostream>
#include <conio.h>
#include <iostream.h>
main()
{
	int n;
	char c;
	
	do
	{
		cout<<"Enter a number to check whether it is even or odd ";
		cin>>n;
		
		if(n%2 == 0)
		{
			cout<<"Even";
		}
		else
		{
			cout<<"Odd";
		}
		
		
		cout<<"\n\nEnter y to check more or any other to stop ";
		
		c = getche();
		
		cout<<"\n\n";
		
	}while(c == 'y');
	
}

