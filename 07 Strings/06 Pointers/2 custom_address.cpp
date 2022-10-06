#include <iostream>
#include <conio.h>
#include <iostream.h>
main()
{
	int *p;
	
	p = reinterpret_cast<int*>(0x66ff80);
	
	cout<<p<<" "<<*p<<"\n";
	
	*p = 786;
	
	cout<<p<<" "<<*p<<"\n";
	
	
	
	
	
	
	getch();
	
}

