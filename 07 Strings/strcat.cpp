#include <iostream.h>
#include <conio.h>
#include <string.h>


int main()
{
	char str1[100];
	char str2[100];
	
	cout<<"Enter 1st String ";
	gets(str1);         //Tariq
	cout<<"Enter 2nd String ";
	gets(str2);         //Mahmood
	
	int len=0;
	for(; str1[len]!='\0'; len++);
	
	int i=0;
	while(str2[i]!='\0')
	{
		str1[len+i] = str2[i];
		i++;
	}
	
	puts(str1);
	
	getch();
}