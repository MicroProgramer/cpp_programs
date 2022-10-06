#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	unsigned short monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31	};
	unsigned short monthNo, dayNo,totalDays=365, pastDays, remainingDays;
		
	cout<<"Enter Month Number ";
	cin>>monthNo;
	cout<<"Enter Day Number ";
	cin>>dayNo;
	
	pastDays = dayNo;
	for(int i=0; i<=(monthNo-2); i++)
	{
		pastDays = pastDays + monthDays[i];
	}
	
	
	remainingDays = totalDays - pastDays;
	
	cout<<"Total Days Past = "<<pastDays;
	cout<<"\nTotal Days Rem = "<<remainingDays;
	
}