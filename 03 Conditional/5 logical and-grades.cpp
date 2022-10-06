#include <iostream.h>
#include <conio.h>

main()
{
	int marks;
	cout<<"Enter marks \t";
	cin>>marks;
	
	if((marks>=90) && (marks<=100))
	{		
		cout<<"Your level is A+"<<endl;		
	}	
	else if((marks>=80) && (marks<90))
	{
		cout<<"your level is A";	
	}
	else if((marks>=70) && (marks<80))
	{
		cout<<"your level is B";		
	}
	else if((marks>=60) && (marks<70))
	{
		cout<<"your level is c";			
	}
	else if((marks>=50) && (marks<60))
	{
		cout<<"your level is d";
	}		
	else if((marks>=0) && (marks<50))
	{
		cout<<"you are fail try again";
	}			
	else
	{
		cout<<"marks shoud be greater than 0 and less than 100";
	}
			
	getch();
}
