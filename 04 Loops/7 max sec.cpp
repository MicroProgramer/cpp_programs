#include <iostream>
#include <conio.h>
#include <iostream.h>


main()
{
	int i, nStudents, marks, max, secMax;
	
	cout<<"Enter total students\t";
	cin>>nStudents;
	
	i = 1;
	max=0;
	while(i <= nStudents )
	{
		cout<<"Enter Marks ";
		cin>>marks;
		
		if(marks > max)
		{
			secMax = max;
			max=marks;
		}
		else if(marks > secMax)
		{
			
			secMax=marks;
		}	
		
		i++;
	}
	
	cout<<"Max="<<max<<endl;
	cout<<"Second Max="<<secMax;

	
	getch();
}

