#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>


int i;

void print()
{
	cout<<i;
}

int main()
{
	print();
	{	
		int i;
		cout<<endl;
		i = 4;		
		print();		
	}
	
}
