#include <iostream.h>
#include <conio.h>
#include <string.h>

bool isVowel(char c)
{
	if(c == 'a' || c == 'e' || c == 'i' || c== 'o' || c=='u' || 
	   c == 'A' || c == 'E' || c == 'I' || c== 'O' || c=='U')
	{
		return true;			
	}
	else
	{
		return false;
	}
	
}

bool isAlphabet(char c)
{
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')  )
	{
		return true;	
	}
	else
	{
		return false;
	}
}

bool isDigit(char c)
{
	if(c >= '0' && c <= '9')
	{
		return true;	
	}
	else
	{
		return false;
	}
}

int getlen(char* c)
{
	int i=0;
	while(c[i] != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	const int SIZE=100;
	char str[SIZE];
	
	cin.getline(str,SIZE);
	
	int vowels=0, alphabets=0, symbols=0, digits=0;
	
	for(int i=0; str[i] != '\0'; i++)
	{
		char c = str[i];
		
		if(isVowel(c))
		{
			vowels++;
		}
		
		if(isAlphabet(c))
		{
			alphabets++;
		}
		else if(isDigit(c))
		{
			digits++;
		}
		else
		{
			symbols++;
		}
	}
	
	cout<<endl;
	cout<<"Total Alphabets\t"<<alphabets;
	cout<<"\nTotal vowels\t"<<vowels;
	cout<<"\nTotal digits\t"<<digits;
	cout<<"\nTotal symbols\t"<<symbols;
	cout<<"\n\nTotal Characters\t"<<getlen(str);
	
	cout<<"\n\n";
}