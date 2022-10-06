
#include <conio.h>
#include <iostream.h>

void table(int x, int lowerLimit, int upperLimit)
{
	for(int i=lowerLimit; i<=upperLimit; i++)
	{
		cout<<x<<"*"<<i<<"\t=\t"<<x*i<<endl;
	}
}

void table(int x)
{
	table(x,1,10);
}

void table(int x, int upperLimit)
{
	
	table(x,1,upperLimit);
}



main()
{
	
	table(3);	cout<<endl;
	table(15);	cout<<endl;
	table(2,20);	cout<<endl;
	table(2,15,100);cout<<endl;	
	
	getch();
}
