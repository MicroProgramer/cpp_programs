#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE1 = 10;
	const int SIZE2 = 5;
	int matrix[SIZE1][SIZE2];
	
	for(int i=0; i<SIZE1; i++)
	{
		for(int j=0; j<SIZE2; j++)
		{
			matrix[i][j] = rand() % 90 + 10; // 0-899
		}
	}
	
	for(int i=0; i<SIZE1; i++)
	{
		for(int j=0; j<SIZE2; j++)
		{
			cout<<matrix[i][j]<<"  ";
		//	cout<<"m["<<i<<"]"<<"["<<j<<"] = "<<matrix[i][j]<<"\t";
		}
		
		cout<<endl;
	}
		
	cout<<endl;
}