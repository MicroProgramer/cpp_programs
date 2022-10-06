#include <iostream>
#include <conio.h>
#include <iostream.h>


main()
{
	int upperLimit;
	
	cout<<"enter the upper limit of binary table ";
	cin>>upperLimit;
	
	int power=1, product=1;
	do
	{
		product = product*2;
		cout<<2<<"^"<<power<<"="<<product<<endl;
		
		power++;
	}while(power<=upperLimit);
	
	
	getch();
}

