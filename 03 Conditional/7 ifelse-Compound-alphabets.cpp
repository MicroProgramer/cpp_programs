#include <iostream.h>
#include <conio.h>

main()
{
	char c;
	cout<<"Enter a character to check weather it is vowel, consonant, digit or other "; 
	
	c = getche();
	cout<<"\n\n";
	
	if(c == 'a' || c == 'e' || c == 'i' || c== 'o' || c=='u'
 	|| c == 'A' || c == 'E' || c == 'I' || c== 'O' || c=='U' )
	{
		cout<<"Vowel";			
	}
	else if( (c >= 97 && c <= 122) || (c >= 'A' && c <= 'Z')  )
	{
		cout<<"Consonant";	
	}
	else if( c>='0' && c<='9' ) 
	{
		cout<<"Digit";	
	}
	else
	{
		cout<<"Symbol";
	}
	
	
getch();
}
