#include <iostream>
#include <conio.h>
#include <iostream.h>
main()
{
	char c = 'A';
	short s = 258;	
	int i=46659;
	double d = 2423423.4324234;
	
	char *p1 = &c; 
	short *p2 = &s; 
	int *p3 = &i; 
	double *p4 = &d;
			
	cout<<"\n\nThe value on address "<<p1<<" is "<<*p1<<"\n";
	cout<<"\n\nThe value on address "<<p2<<" is "<<*p2<<"\n";
	cout<<"\n\nThe value on address "<<p3<<" is "<<*p3<<"\n";
	cout<<"\n\nThe value on address "<<p4<<" is "<<*p4<<"\n";	
	
	p1++;	
	p2++;	
	p3++;	
	p4++;		
	
	
	cout<<"\n\nThe value on address "<<p1<<" is "<<*p1<<"\n";
	cout<<"\n\nThe value on address "<<p2<<" is "<<*p2<<"\n";
	cout<<"\n\nThe value on address "<<p3<<" is "<<*p3<<"\n";
	cout<<"\n\nThe value on address "<<p4<<" is "<<*p4<<"\n";
	
	
	getch();
	
}

