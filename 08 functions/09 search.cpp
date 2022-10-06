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

void show(int a[],const int SIZE)
{	
	for(int i=0; i<SIZE; i++)
	{
		cout<<a[i]<<"\t";
	}
}

int search(int a[],int n, const int SIZE)
{
	for(int i=0; i<SIZE; i++)
	{
		if(a[i]==n)
		{
			return i;
		}
	}
	
	return -1;
}


int main()
{
	const int SIZE = 100;
	int list[SIZE], n;
		
	input(list, SIZE);	
	show(list, SIZE);
	
	cout<<"\n\nEnter a number to search ";
	cin>>n;
	
	int loc = search(list, n, SIZE);
	cout<<loc;
	
	cout<<endl;
}