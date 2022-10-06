#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE = 10;
	int list[SIZE], max;
	
	
	for(int i=0; i<SIZE; i++)
	{
		list[i] = rand();
	}
	cout<<list;
	
	max = list[0];
	
	for(int i=1; i<SIZE; i++)
	{
		if(list[i] > max)
		{
			max = list[i];
		}
	}
	
	
	
	cout<<"\n\n"<<max<<"\n\n";
}