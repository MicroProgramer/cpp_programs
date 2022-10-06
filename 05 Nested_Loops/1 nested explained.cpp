
#include <conio.h>
#include <iostream.h>

main()
{
	int i, j, m, n;
	
	cout<<"enter rows ";
	cin>>m;
	cout<<"enter columns ";
	cin>>n;
	

	i = 1;
	while(i<=m)//outer loop
	{
		j=1;
		while(j<=i) //inner loop
		{
			cout<<i<<" "<<j<<"\t";
			
			j++;
		}
		
		cout<<endl;
				
		i++;
	}
	
	
	
	
	getch();
}

