#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE = 1000;
	int list[SIZE], n;
	
	for(int i=0; i<SIZE; i++)
	{
		list[i] = rand();
		cout<<"list["<<i<<"]="<<list[i]<<"\t\t";
	}
	
	cout<<"\n\nEnter a number to search ";
	cin>>n;
	
	for(int i=0; i<SIZE; i++)
	{
		if(list[i]==n)
		{
			cout<<i<<" ";
		}
	}
	
	cout<<endl;
}