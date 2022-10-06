#include <iostream.h>
#include <conio.h>

main()
{	
	char gender;
	
	cout<<"Enter your gender ";
	cin>>gender;
	
	switch (gender)
	{
		case 'm':
		case 'M':
			cout<<"You are not allowed to enter in the girls class room of IdeaLogics.";
			break;
		case 'f':
		case 'F':
			cout<<"You are allowed to enter in the girls college.";
			break;
		case 'o':
		case 'O':
			cout<<"You need further permissions by the Authorities.";	
			break;
		default:
			cout<<"You entered an invalid character";	
	}

	cout<<endl<<endl;
}
