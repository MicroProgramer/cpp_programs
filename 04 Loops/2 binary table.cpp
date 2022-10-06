#include <iostream>
#include <conio.h>
#include <iostream.h>


main()
{
	int upperLimit;
	
	cout<<"enter the upper limit of binary table ";
	cin>>upperLimit;
	
	cout<<2<<"^"<<0<<"="<<1<<endl;
	double i=1, p=1;
	while(i<=upperLimit)
	{
		p = p*2;
		cout<<2<<"^"<<i<<"="<<p<<endl;
		
		i++;
	}
	
	
	
	getch();
}

