#include <iostream.h>
#include <conio.h>

main()
{	
	int a=4, b=0, c=8, n=5;
	
	if( b++<=6 && ++c==9 || ++a == 6)
	{  
		n++; 
	}
	
	if(a!=4 || b>5 && c<=9)
	{
		 n += a++; // n = n+a; a=a+1;
 	}
	 	
	if(c<=2 && a>=5 || b-- ==0)
	{ 
		n *= a++; //// n = n*a; a=a+1;
	}
	
	cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<"\nn="<<n;



cout<<endl<<endl;
}
