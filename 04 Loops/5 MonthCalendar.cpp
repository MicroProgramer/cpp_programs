


#include <iostream.h>
#include <conio.h>

main()
{
	int startingDay, date, space,nSpaces, x;
	
	cout<<"Enter the starting day number of month(1-7)\t";
	cin>>startingDay;
	cin>>x;
	cout<<"\nMon\tTue\tWed\tThu\tFri\tSat\tSun\n";
	nSpaces=(startingDay-1);
	
	space = 1;
	while(space <= nSpaces)
	{
		cout<<"\t";
		
		space++;
	}
	
	
	date = 1;
	while(date <= x)
	{
		cout<<date<<"\t";
		
		if((nSpaces+date)%7==0)
		{
			cout<<endl;
		}
		
		date++;
	}
	
	
	getch();
}
