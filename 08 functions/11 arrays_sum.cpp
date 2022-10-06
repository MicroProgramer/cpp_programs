#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void input(int a[],const int SIZE)
{
	for(int i=0; i<SIZE; i++)
	{
		a[i] = rand() % 10;
	}
}

void arr_sum(int a1[],int a2[],int s[], const int SIZE)
{	
	for(int i=0; i<SIZE; i++)
	{		
		s[i] = a1[i] + a2[i];
	}
}

void show(int a1[],int a2[],int sum[], const int SIZE)
{	
	for(int i=0; i<SIZE; i++)
	{		
		cout<<"sum["<<i<<"]="<< sum[i]<<"\t=\t";
		cout<<"arr1["<<i<<"]="<< a1[i]<<"\t+\t";
		cout<<"arr2["<<i<<"]="<< a2[i]<<"\n";
	}
}

int main()
{
	const int SIZE = 10;
	int arr1[SIZE], arr2[SIZE], sum[SIZE];
	
	
	input(arr1, SIZE);
	input(arr2, SIZE);

	arr_sum(arr1,arr2,sum,SIZE);
	
	show(arr1,arr2,sum,SIZE);
	
	
	cout<<endl;
}