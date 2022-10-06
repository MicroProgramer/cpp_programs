
#include <conio.h>
#include <iostream.h>

main()
{
	int i, j, m, n;
	
	cout<<"Enter max row no\t";
	cin>>m;
	cout<<"Enter max columns\t";
	cin>>n;
	
	i = 1;
	while(i <= m)
	{
		j = 1;
		while(j <= n)
		{			
			cout<<i<<" "<<j<<"\t";
			
			j++;
		}		
		cout<<endl;
		
		i++;
	}
	
	
	getch();
}

