#include <iostream.h>
#include <conio.h>
#include <string.h>



int main()
{
	const int SIZE=100;
	char str1[SIZE], str2[SIZE], str3[SIZE+SIZE-1];
	
	cout<<"Enter First string ";
	cin.getline(str1, SIZE);
	cout<<"Enter Second string ";
	cin.getline(str2, SIZE);
	
	int i,j;
	for(i=0; str1[i] != '\0'; i++)
	{
		str3[i] = str1[i];
	}
	
	for( j=0; str2[j] != '\0'; j++)
	{
		str3[i+j] = str2[j];
	}
	
	str3[i+j] = '\0';
	
	cout<<str3;
	
	
	cout<<"\n\n";
}