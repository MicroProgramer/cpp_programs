#include <iostream.h>
#include <conio.h>

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


main()
{
	char c;
	cout<<"Enter a character to check weather it is vowel or consonant or symbol\t";
	cin>>c;
	
	if(isVowel(c))
	{
		cout<<"vowel";
	}
	else if(isAlphabet(c))
	{
		cout<<"consonant";
	}
	else
	{
		cout<<"not alphabet";
	}

}

