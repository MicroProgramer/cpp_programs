#include <iostream.h>
#include <conio.h>

main()
{
	int marks;
	bool is_employee_son, is_disabled, is_Layyan;
	
	cout<<"Please enter your marks\t";
	cin>>marks;
	
	cout<<"Enter 1 for employee son or 0 for not\t";
	cin>>is_employee_son;
	
	cout<<"Enter 1 for disabled or 0 for not\t";
	cin>>is_disabled;
	
	
	cout<<"Enter 1 for Layyan citizen or 0 for not\t";
	cin>>is_Layyan;

	bool is_admission_granted = false;
	
	if(is_disabled && marks>=60)
	{
		is_admission_granted = true;			
	}
	else if(is_employee_son && marks>=70)
	{
		is_admission_granted = true;
	}
	else if(is_Layyan && marks>=75)
	{
		is_admission_granted = true;
	}
	else if(marks >= 80)
	{
		is_admission_granted = true;
	}
		
	if(is_admission_granted)
	{
		cout<<"Admission Granted";
	}
	else
	{
		cout<<"No Admission";
	}

	getch();
}
