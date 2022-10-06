#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int a[6], b[6], i;
	
	for(i=0;i<5;i+=2)
	{
		a[i] = i+1;
		a[i+1] = i-1;
		
		b[i] = i-1;
		b[i+1] =i+1;
	}
	
	for(i=0;i<6;i++)
	{
		cout<<a[i]<<'\t'<<b[i]<<endl;
	}
	
	getch();
}