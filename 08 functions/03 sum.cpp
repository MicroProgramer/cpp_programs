
#include <conio.h>
#include <iostream.h>

int sum_of_integers(int lowerLimit, int upperLimit)
{
	int sum = 0;
	for(int i=lowerLimit; i<= upperLimit; i++)
	{
		sum += i;
	}
	
	return sum;
}


main()
{
	cout<<sum_of_integers(2,5)<<endl;
	cout<<sum_of_integers(5,15)<<endl;
	cout<<sum_of_integers(20,100)<<endl;
	cout<<sum_of_integers(290,300)<<endl;
		
	
	getch();
}
