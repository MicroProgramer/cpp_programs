
#include <conio.h>
#include <iostream.h>

main()
{
	int rowNo, colNo, nRows;
	
	cout<<"enter total rows ";
	cin>>nRows;
	
	rowNo = 1;
	while(rowNo<=nRows)//outer loop
	{
		colNo=1;
		while(colNo<=rowNo) //inner loop
		{
			cout<<rowNo<<" "<<colNo<<"\t";
			
			colNo++;
		}
		
		cout<<endl;
				
		rowNo++;
	}
	
	
	
	
	getch();
}

