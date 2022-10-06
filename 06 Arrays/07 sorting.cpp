#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE = 10;
	int list[SIZE];
	
	for(int i=0; i<SIZE; i++)
	{
		list[i] = rand()%1000;
		cout<<list[i]<<"\t\t";
	}
	
	
	
	for(int i=0; i<(SIZE-1); i++)
	{
		for(int j=i+1; j<SIZE; j++)
		{
			if(list[j] < list[i])
			{
				int t = list[i];
				list[i] = list[j];
				list[j] = t;
			}
		}
	}
	
	cout<<"\n\n After Sorting\n\n";
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<list[i]<<"\t\t";
	}
}