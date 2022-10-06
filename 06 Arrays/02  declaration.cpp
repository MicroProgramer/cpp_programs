#include <iostream.h>
#include <conio.h>



int main()
{
	short sub[]={83,76,72,56,97,80,99,34};

	cout<<sub<<endl; //20
	cout<<&sub[0]<<endl; // 20 + 2*0 = 20
	cout<<&sub[1]<<endl; // 20 + 2*1 = 22
	cout<<&sub[2]<<endl;
	cout<<&sub[3]<<endl;
	cout<<&sub[4]<<endl;
	cout<<&sub[5]<<endl;
	cout<<&sub[6]<<endl;
	cout<<&sub[7]<<endl;
	
	
	
	cout<<endl;
	
	
	int x=23, y=45;
	cout<<&x<<" "<<&y;
	
	getch();
}