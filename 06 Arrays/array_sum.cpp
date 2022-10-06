#include <iostream.h>
#include <conio.h>

//Array is a collection of same data type with common properties

 main()
{
	float sub[12], sum=0;
	
	for(int i=0;i<12; i++)
	{
		cout<<"Enter marks ";
		cin>>sub[i];
	}
	
	for(int i=0;i<12; i++)
	{
		sum += sub[i];
	}
	
	
	cout<<"Total marks = "<<sum<<endl;
}