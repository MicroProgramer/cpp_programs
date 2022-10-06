
#include <conio.h>
#include <iostream.h>

float square(float x)
{
	float result = x*x;
	return result;
}
float cube(float x)
{
	float result = x*x*x;
	return result;
}


main()
{
	float n;
	
	cout<<"Enter a number ";
	cin>>n;
	
	float sq = square(n);
	cout<<"Square of n = "<<sq<<endl;
	cout<<"cube of n = "<<cube(n);
	
	
	getch();
}

