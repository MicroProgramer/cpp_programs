#include <iostream.h>
#include <conio.h>
#include <string.h>



int main()
{
	const int SIZE=100;
	char str[SIZE];
	
	cin.getline(str,SIZE);
	
	int i=0;
	int nVowels=0, nConsonants=0, nDigits=0, nSymbols=0;
	while(str[i] != '\0')
	{
		char ch = str[i];
		
		if(ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U' ||
		   ch=='a' || ch=='e'|| ch=='i' ||ch=='o' ||ch=='u' )
		{
			nVowels++;
		}
		
		
		i++;
	}
	
	
	cout<<"Total Vowels are: "<<nVowels<<endl;
	cout<<"Total Consonants are: "<<nConsonants<<endl;
	cout<<"Total Digits are: "<<nDigits<<endl;
	cout<<"Total Symbols are: "<<nSymbols<<endl;
	
	cout<<"\n\n";
}