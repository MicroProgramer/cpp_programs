
#include <conio.h>
#include <iostream.h>


main()
{
	int *p2;
	
	
	{
		int i = 6;
  		int* p;          // p is stored on stack
  		p = new int;
  		*p= 7;
  		p = &i; //  int is stored on heap
  		p2 = p;
  		*p2 = 8;
  		//delete p;
	}
	
	cout<<*p2;
	// p no longer exists, but the  int DO EXSIST!
	
	
	getch();
}

