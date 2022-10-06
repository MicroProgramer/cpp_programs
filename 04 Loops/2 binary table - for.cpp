#include <iostream>
#include <conio.h>
#include <iostream.h>

main()
{
	 int upperLimit, power;
	
	cout<<"enter the upper limit of binary table ";
	cin>>upperLimit;
	
	double product=1;
	
	
	for(power = 1;power<=upperLimit;power++)
	{
		product = product*2;
		cout<<2<<" ki power "<<power<<" = "<<product<<endl;
	}
	
	
	
	getch();
}