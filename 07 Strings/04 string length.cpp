#include <iostream.h>
#include <conio.h>
#include <string.h>



int main()
{
	const int SIZE=100;
	char str[SIZE];
	
	cin.getline(str,SIZE);
	
	int i=0;
	while(str[i]!=0)
	{		
		i++;
	}
	
	
	cout<<"length is "<<i;
	
	cout<<"\n\n";
}