#include <iostream.h>
#include <conio.h>

main()
{
	int marks;
	bool is_employee_son, is_disabled, is_admitted;
	
	is_admitted = false;
	cout<<"Please enter your marks in  percentage \t";
	cin>>marks;
	
	if(marks >= 80)
	{
		is_admitted = true;
	}
	else
	{
		cout<<"Enter 1 for Employee son or 0 for not ";
		cin>>is_employee_son;
		if(is_employee_son)
		{
			if(marks >= 70)
			{
				is_admitted = true;
			}
		}
		else
		{
			cout<<"Enter 1 for disabled or 0 for not ";
			cin>>is_disabled;
			
			if(is_disabled)
			{
				if(marks >= 60)
				{
					is_admitted = true;
				}
			}
		}
			
	}
	
	if(is_admitted)
	{
		cout<<"admission Granted";
	}
	else
	{
		cout<<"admission not Granted";
	}
	
	
	getch();
	
}