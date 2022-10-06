#include <iostream.h>
#include <conio.h>

main()
{
	int n,d;
	
	cout<<"Enter a 4 digits number ";
	cin>>n;
	
	d=n%10;
	n=n/10;		
	cout<<d;
	
	
	d=n%10;
	n=n/10;	
	cout<<d;
	
	d=n%10;
	n=n/10;	
	cout<<d;
	
	d=n;
	cout<<d;	
		
	getch();
}

