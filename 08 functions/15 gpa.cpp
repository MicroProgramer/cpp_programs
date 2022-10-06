#include<iostream.h>
#include<conio.h>
#include<math.h>


float  calculateGPA(float obtainedMarks, int totalMarks) 
{
	float percentage, gpa, temp ;
	
	percentage= (obtainedMarks/totalMarks)*100;
	
	if(percentage >= 80)
	{
		gpa = 4;
	}
	else if(percentage >= 50)
	{		
		temp = percentage - 50;
		gpa = temp / 15 + 2;
	}
	else if(percentage >= 40)
	{		
		temp = percentage - 40;
		gpa = temp / 10 + 1;
	}
	else
	{
		gpa = 0;
	}
	
	
	return gpa;
}



main()

{
	float obtainedMarks, totalMarks; 
	float percentage, gpa, temp, sgpa, points, totalPoints =0 ;
	int SubjectNo, creditHours = 3, totalCreditHours=0;
	
	
	for(SubjectNo=1; SubjectNo<=6; SubjectNo ++)
	{
		cout<<"Enter your marks in subject "		cin>>obtainedMarks;
		cout<<"Enter total marks in that subject ";
		cin>>totalMarks;
		cout<<"Enter credit hours of that subject ";
		cin>>creditHours;
		totalCreditHours += creditHours;

		gpa = calculateGPA(obtainedMarks, totalMarks);
		points = gpa * creditHours;		
		totalPoints += points;
		
		cout<<endl;
	}
	
	sgpa = totalPoints / totalCreditHours;
	cout<<"SGPA = "<<sgpa;
	
	_getch();
}