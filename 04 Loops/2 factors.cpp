#include <math.h>
#include <conio.h>
#include <iostream.h>


main()
{
while(true)
{
	
	unsigned int i, input, answer;

	cout<<"Enter a number to get its factors\t";
	cin>>input;
	
	i=2;
	int sq = sqrt(input);
	while(i <= sq)
	{
		if(input%i == 0)
		{
			answer = input/i;
			cout<<i<<" "<<answer<<"\t\t";
		}	
		
		i++;			
	}
	
	cout<<"\n\nDone\n\n";
}	
}

