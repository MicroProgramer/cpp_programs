#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE = 3;
	int matrix1[SIZE][SIZE],matrix2[SIZE][SIZE],rm[SIZE][SIZE];
	
	//taking random input below 100
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
		   	matrix1[i][j] = rand()%100;
		   	matrix2[i][j] = rand()%100;
		}
	}
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			rm[i][j] = matrix1[i][j]+matrix2[i][j];
		}
	}
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			cout<<rm[i][j]<<"\t";
		}
		cout<<endl;
	}
		
	cout<<endl;
	
	getch();
}