#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void input(int a1[],const int SIZE)
{
	for(int i=0; i<SIZE; i++)
	{
		a1[i] = 99;
	}
}

void show(int a2[],const int SIZE)
{	
	for(int i=0; i<SIZE; i++)
	{
		cout<<a2[i]<<"\t";
	}
}



int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	
	int *p = &arr[0];
	
	show(arr, SIZE);
	cout<<endl<<endl<<"after"<<endl;
	input(arr, SIZE);	
	show(arr, SIZE);
	
	cout<<endl;
	getch();
}