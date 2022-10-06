#include <iostream.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
	const int SIZE = 100;
	int arr[SIZE];
	
	for(int i=0; i<SIZE; i++)
	{
		arr[i] = rand()%900+100;
	}
	
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<"arr["<<i<<"]="<<arr[i]<<"\n";
	}
	
	cout<<endl;
	getch();
}