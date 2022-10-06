// Exercise 6.50.cpp : Defines the entry point for the console application.
//

#include <iostream.h>
#include <conio.h>
int main()
{
	int size;
	cout<<"Enter the size : ";
	cin>>size;

	for(int i=1; i<=size; i++)
	{
		int space1=size-i;
		for(int j=1; j<=space1; j++)
		{
			cout<<"  ";
		}
			cout<<"T";
		if(i>1)
		{
			int x=0;
			for(int j=1; j<=(3*i-3)+(i-2); j++)
			{
				cout<<"x";
			}
			cout<<"T";
		}
		cout<<endl;
	}

	_getch();
}
