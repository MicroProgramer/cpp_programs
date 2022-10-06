#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE = 10;
	int list1[SIZE], list2[SIZE], sum[SIZE];
	
	for(int i=0; i<SIZE; i++)
	{
		list1[i] = rand()%100;
		list2[i] = rand()%100;;
	}
	
	
	for(int i=0; i<SIZE; i++)
	{		
		sum[i] = list1[i] + list2[i];
	}
	
	
	for(int i=0; i<SIZE; i++)
	{		
		cout<<"list1["<<i<<"]="<< list1[i]<<"\t+\t";
		cout<<"list2["<<i<<"]="<< list2[i]<<"\t=\t";
		cout<<"sum["<<i<<"]="<< sum[i]<<"\n";
	}
	
	cout<<endl;
}