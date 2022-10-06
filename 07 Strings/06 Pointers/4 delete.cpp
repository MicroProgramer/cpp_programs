#include <iostream.h>
#include <conio.h>



int main()
{
	int* x = new int[10];
	
	int* p =x;
	
	x[0] = 5;
	
	delete p;
	
	cout<<x[0]<<endl;
	cout<<p;
	
}