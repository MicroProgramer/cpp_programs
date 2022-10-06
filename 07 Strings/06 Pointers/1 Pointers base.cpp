#include <iostream>
#include <conio.h>
#include <iostream.h>
main()
{
	int i=5;	
	float f = 4.5;
	cout<<"Value of variable i = "<<i<<endl;
	cout<<"address of variable i = "<<&i<<endl;
	
	
	void* p=&i;
	
	cout<<"\nValue of variable p = "<<p<<endl;
	cout<<"address of variable p = "<<&p<<endl;
//	cout<<"value at address inside Pointer p = "<<*p<<endl; // cannot display void pointer
	
	
	
	
	
	
	
	getch();
	
}
