
#include <conio.h>
#include <iostream.h>

main()
{
	int i, j, m, n;
	
	cout<<"Enter max row no\t";
	cin>>m;

	
	i = 1;
	while(i <= m)
	{
		j = 1;
		while(j <= (m-i))
		{			
			cout<<"* ";			
			j++;
		}
		
		j = (m-i)+1;
		while(j <= m)
		{			
			cout<<j<<" ";			
			j++;
		}
				
		cout<<endl;
		
		i++;
	}
	
	
	getch();
}

