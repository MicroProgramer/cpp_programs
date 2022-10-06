
#include <conio.h>
#include <iostream.h>

void table(int x)
{
	for(int i=1; i<=10; i++)
	{
		cout<<x<<"*"<<i<<"\t=\t"<<x*i<<endl;
	}
}

void table(int x, int lowerLimit, int upperLimit)
{
	for(int i=lowerLimit; i<=upperLimit; i++)
	{
		cout<<x<<"*"<<i<<"\t=\t"<<x*i<<endl;
	}
}





main()
{
	
	table(3);	cout<<endl;
	table(15);	cout<<endl;
	table(2,10,20);	cout<<endl;
	table(3,15,100);cout<<endl;	
	
	getch();
}
