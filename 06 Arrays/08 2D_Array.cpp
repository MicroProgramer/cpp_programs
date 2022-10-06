#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int nRows = 4;
	const int nColumns = 3;
	int matrix[nRows][nColumns];
	
	matrix[0][0] = 33;
	matrix[0][1] = 44;
	matrix[0][2] = 31; 
	matrix[1][0] = 21;
	matrix[1][1] = 7;
	matrix[1][2] = 89; 
	matrix[2][0] = 33;
	matrix[2][1] = 32;
	matrix[2][2] = 65; 
	matrix[3][0] = 33;
	matrix[1][1] = 32;
	matrix[3][2] = 65; 
	
	for(int i=0; i<nRows; i++)
	{
		for(int j=0; j<nColumns; j++)
		{
			cout<<"A["<<i<<"]"<<"["<<j<<"] = "<<matrix[i][j]<<"\t";
		}
		
		cout<<endl;
	}
		
	cout<<endl;
}