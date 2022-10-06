#include <math.h>
#include <conio.h>
#include <iostream.h>


main()
{
while(1)
{

	int i, j, lowerLimit, d, upperLimit,n, sq;

	cout<<"Enter lowerLimit\t";
	cin>>lowerLimit;
	cout<<"Enter upperLimit\t";
	cin>>upperLimit;
	
	n = lowerLimit;
	while(n <= upperLimit)
	{		
		int n2=n;
		int sum=0;
		while(n2>0)
		{
			d= n2%10;
			sum += d;
			
			n2/=10;
		}
		
		cout<<"n="<<n<<"->sum="<<sum<<"\n";
		
		n++;	
	}
	
	cout<<"workdone\n\n";	
}
}

