#include <iostream.h>
#include <conio.h>

void swap(int *p1, int *p2)
 {
 	int t;
 	
 	t = *p1;
	*p1 = *p2;
	*p2 = t;
 }


main()
{
	int a,b,t;

	cout<<"Enter first number ";
	cin>>a;	
	cout<<"Enter second number ";
	cin>>b;
	
	swap(&a,&b);
	
	cout<<"After Swaping a="<<a<<" and b="<<b;
	
	getch();
}
