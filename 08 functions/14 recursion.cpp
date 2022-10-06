#include <iostream.h>
#include <conio.h>

int power(int x, int p)
{
	if(p == 0)
	{
		return 1;
	}
	else if(p == 1)
	{
		return x;
	}
	else
	{
		return x*power(x, p-1);
	}
}


int main()
{
	cout<<power(5,3);
	
}