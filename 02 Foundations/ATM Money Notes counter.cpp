#include <conio.h>
#include <iostream.h>


main()
{
	int n,notes;
	cout<<"enter amount: ";
	cin>>n;
	
	notes = n/5000;
	cout<<"5000*"<<notes<<"="<<5000*notes<<endl;
	
	n = n%5000;
	
	notes = n/1000;
	cout<<"1000*"<<notes<<"="<<1000*notes<<endl;
	
	n = n%1000;
	
	notes = n/500;
	cout<<"500*"<<notes<<"="<<500*notes<<endl;
	
	n = n%500;
	
	notes = n/100;
	cout<<"100*"<<notes<<"="<<100*notes<<endl;
	
	n = n%100;
	
	notes = n/50;
	cout<<"50*"<<notes<<"="<<50*notes<<endl;
	
	n = n%50;
	
	notes = n/20;
	cout<<"20*"<<notes<<"="<<20*notes<<endl;

	n = n%20;
	
	notes = n/10;
	cout<<"10*"<<notes<<"="<<10*notes<<endl;

	n = n%10;
	
	notes = n/5;
	
	cout<<"5*"<<notes<<"="<<5*notes<<endl;
	
 	n = n%5;
	
	notes = n/2;
	cout<<"2*"<<notes<<"="<<2*notes<<endl;
	
 	n = n%2;
	
	notes = n/1;
	cout<<"1*"<<notes<<"="<<1*notes<<endl;

	 

	
	getch();
}

