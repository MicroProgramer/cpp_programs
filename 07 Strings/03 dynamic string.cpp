#include <iostream.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
	char* a = NULL;   // Pointer to char, initialize to nothing.
	int n;           // Size needed for string
	cin >> n;        // Read in the size
	a = new char[n];  // Allocate n characters and save ptr in a.
	
	a = "tariq mahmood";
	
	cout<<a;
					 
					 
					  // Use a as a normal array
					  
					  
					  
					  
	delete [] a;  // When done, free memory pointed to by a.
	a = NULL;     // Clear a to prevent using invalid memory reference.
		
	cout<<endl;
	
	getch();
}