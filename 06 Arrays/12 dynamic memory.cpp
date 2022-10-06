#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	int* a = NULL;   // Pointer to int, initialize to nothing.
	int n;           // Size needed for array
	cin >> n;        // Read in the size
	a = new int[n];  // Allocate n ints and save ptr in a.
	
	for(int i=0; i<n; i++)
	{
		a[i] = rand();
		cout<<a[i]<<"\t";
	}
					  // Use a as a normal array
	delete [] a;  // When done, free memory pointed to by a.
	a = NULL;     // Clear a to prevent using invalid memory reference.
		
	cout<<endl;
	
	getch();
}