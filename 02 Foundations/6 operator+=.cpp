#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int i=5, j=11;	
	
	
	i++; // i= i+1;
	i+=3;	//i = i + 3;
	j-=5;	//j = j - 5;
	cout<<i<<"\t"<<j<<endl;
	
	i*=j;	//i = i * j;
	j/=2;	//j = j / 2;
	cout<<i<<"\t"<<j<<endl;
	
	i%=j;	//i = i % j;
	j%=2;	//j = j % 2;
	cout<<i<<"\t"<<j<<endl;
	
	getch();
}

