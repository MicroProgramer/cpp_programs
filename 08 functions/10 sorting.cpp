#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void input(int a[],const int SIZE)
{
	for(int i=0; i<SIZE; i++)
	{
		a[i] = rand() % 100;
	}
}

void sort(int a[], const int SIZE)
{
	for(int i=0; i<(SIZE-1); i++)
	{
		for(int j=i+1; j<SIZE; j++)
		{
			if(a[j] < a[i])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

void show(int a[],const int SIZE)
{	
	for(int i=0; i<SIZE; i++)
	{
		cout<<a[i]<<"\t";
	}
}

int main()
{
	const int SIZE = 10;
	int list[SIZE];
	
	input(list,SIZE);	
	show(list,SIZE);	
	cout<<"\n\n";			
	sort(list, SIZE);		
	show(list,SIZE);
	cout<<endl;
}