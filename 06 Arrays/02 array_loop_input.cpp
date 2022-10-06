#include <iostream.h>
#include <conio.h>



int main()
{
	const int SIZE = 5;
	float subjects[SIZE], sum=0;
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<"Enter marks of subjects "<<(i+1)<<"\t";
		cin>>subjects[i];
	}
	
	
	for(int i=0; i<SIZE; i++)
	{
		cout<< subjects[i]<<"\t";
	}
	
	
}