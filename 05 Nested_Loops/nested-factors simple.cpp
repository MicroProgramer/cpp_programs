#include <math.h>
#include <conio.h>
#include <iostream.h>


main()
{
while(1)
{

	int i, j, lowerLimit, upperLimit,n, sq;

	cout<<"Enter lowerLimit\t";
	cin>>lowerLimit;
	cout<<"Enter upperLimit\t";
	cin>>upperLimit;
	
	n = lowerLimit;
	while(n <= upperLimit)
	{		
		i = 2;
		cout<<n<<" => ";
		while( i < n)
		{
			if(n%i == 0)
			{
				cout<<i<<" ";
			}	
			
			i++;			
		}
		
		cout<<"\n\n";
		
		n++;	
	}
	
	cout<<"workdone\n\n";	
}
}

