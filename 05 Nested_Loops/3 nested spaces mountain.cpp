#include <conio.h>
#include <iostream.h>


main()
{
	int size, left_spaces, inner_spaces, space;
	
	cout<<"Enter Size of the desired patern ";
	cin>>size;
	
	int rowNo = 1;
	left_spaces = size-1;
	inner_spaces = 1;
	
	while(rowNo <= size)
	{		
		space = 1;		 
		while(space <= left_spaces)
		{
			cout<<"  ";	
			space++;
		}
		cout<<"T";
		left_spaces--;
		
		if(rowNo > 1)
		{
	 		space = 0;
			while(space <= (inner_spaces*2))
			{
				cout<<"x";
				space++;
			}
			inner_spaces+=2;	
			cout<<"T";
		}
		
		cout<<"\n";
		
		rowNo++;	
	}
	
	
	
	
	getch();
}

