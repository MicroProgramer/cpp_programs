#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

int getRand()
{		
	int value = rand();
	
	return value; 
}

int getRand(int upperLimit)
{		
	int value = rand()%(upperLimit+1);
	
	return value; 
}

int getRand(int lowerLimit, int upperLimit)
{		
	int value = rand()%(upperLimit-lowerLimit+1) + lowerLimit;
	
	return value; 
}

int main()
{
	for(int i=0; i<100; i++)
	{
		cout<<getRand()<<"\t";
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<100; i++)
	{
		cout<<getRand(10)<<"\t";
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<100; i++)
	{
		cout<<getRand(500,600)<<"\t";
	}	
}
