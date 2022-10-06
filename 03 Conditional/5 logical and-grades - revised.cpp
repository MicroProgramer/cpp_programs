#include <iostream.h>
#include <conio.h>

main()
{
	int marks;
	cout<<"Enter marks \t";
	cin>>marks;
	
	if(marks > 100 || marks < 0)
	{
		cout<<"invalid";
	}
	else if(marks>=90)
	{		
		cout<<"Your level is A"<<endl;		
	}	
	else if(marks>=80)
	{
		cout<<"your level is B";	
	}
	else if(marks>=70)
	{
		cout<<"your level is C";		
	}
	else if(marks>=60)
	{
		cout<<"your level is D";			
	}
	else if(marks>=50)
	{
		cout<<"your level is E";
	}		
	else
	{
		cout<<"you are fail try again";
	}				
	getch();
}
