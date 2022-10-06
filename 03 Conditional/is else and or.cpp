#include <iostream.h>
#include <conio.h>

main()
{
	int marks;
	bool is_employee_son, is_disabled, is_admitted;
	
	is_admitted = false;
	cout<<"Please enter your marks in  percentage \t";
	cin>>marks;
	cout<<"Enter 1 for employee son or 0 for not ";
	cin>>is_employee_son;
	cout<<"Enter 1 for disabled or 0 for not ";
	cin>>is_disabled;
	
	if(		marks >= 80 
		|| (is_employee_son && marks >= 70)
		|| (is_disabled && marks >= 60)
		)
	{
		cout<<"dmission granted";
	}
	else
	{
		cout<<"admission not granted";
	}
	
	
}