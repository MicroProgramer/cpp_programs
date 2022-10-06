#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE = 5;
	int matrix[SIZE][SIZE], col[SIZE];
	
	//taking random input below 100
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
		   	matrix[i][j] = rand()%10;
		}
	}
	
	for(int i=0; i<SIZE; i++)
	{
		col[i] = 0;
		for(int j=0; j<SIZE; j++)
		{
		   	col[i] += matrix[i][j];
		}
	}
	
	
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<"=\t"<<col[i]<<endl;
	}
		
	cout<<endl;
	
	getch();
}