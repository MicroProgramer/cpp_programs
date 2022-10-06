
#include <conio.h>
#include <iostream.h>

void function1()
{
	cout<<"This is statement number 1 of function 1\n";
	cout<<"This is statement number 2 of function 1\n";
	cout<<"This is statement number 3 of function 1\n";
	cout<<"This is statement number 4 of function 1\n";
	cout<<"This is statement number 5 of function 1\n";
}

void function2()
{
	cout<<"This is statement number 1 of function 2\n";
	cout<<"This is statement number 2 of function 2\n";
	cout<<"This is statement number 3 of function 2\n";
}

void function3()
{
	cout<<"This is statement number 1 of function 3\n";
	cout<<"This is statement number 2 of function 3\n";
	cout<<"This is statement number 3 of function 3\n";
	cout<<"This is statement number 4 of function 3\n";
	cout<<"This is statement number 5 of function 3\n";
	cout<<"This is statement number 6 of function 3\n";
}


main()
{
	function1();
	cout<<endl;
	function2();
	cout<<endl;
	function3();
	cout<<"\n\n";
	function2();
	cout<<endl;
	function1();
	cout<<endl;
	function1();
	
	
	getch();
}

