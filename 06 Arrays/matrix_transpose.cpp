#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE1 = 5;
	const int SIZE2 = 5;
	int matrix[SIZE1][SIZE2];
	
	
	//Taking input
	for(int i=0; i<SIZE1; i++)
	{
		for(int j=0; j<SIZE2; j++)
		{
			matrix[i][j] = rand() % 90 + 10; // 0-899
		}
	}
	
	
	//Display Matrix
	for(int i=0; i<SIZE1; i++)
	{
		for(int j=0; j<SIZE2; j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		
		cout<<endl;
	}
	
	
	//Take Transpose of Matrix	
	for(int i=0; i<SIZE1; i++)
	{
		for(int j=i; j<SIZE2; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
	
	cout<<"\n\nAfter Transpose\n";
	
	//Display Matrix
	for(int i=0; i<SIZE1; i++)
	{
		for(int j=0; j<SIZE2; j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		
		cout<<endl;
	}
		
	cout<<endl;
}