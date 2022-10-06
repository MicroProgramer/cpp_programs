#include <iostream.h>
#include <conio.h>



int main()
{
	int sub1, sub2, sub3, sub4, sub5, sub6,sub7, sub8, sub9, sub10, sub11, sub12;
	float sum;

	sub1=5;

	int *p = &sub1;
	
	cout<<"Address of sub1 = "<<p<<endl;
	cout<<"Address of sub2 = "<<&sub2<<endl;
	cout<<"Address of sub3 = "<<&sub3<<endl;
	cout<<"Address of sub4 = "<<&sub4<<endl;
	cout<<"Address of sub5 = "<<&sub5<<endl;
	cout<<"Address of sub6 = "<<&sub6<<endl;
	cout<<"Address of sub7 = "<<&sub7<<endl;
	cout<<"Address of sub8 = "<<&sub8<<endl;
	cout<<"Address of sub9 = "<<&sub9<<endl;
	cout<<"Address of sub10 = "<<&sub10<<endl;
	cout<<"Address of sub11 = "<<&sub11<<endl;
	cout<<"Address of sub12 = "<<&sub12<<endl;



	
	cout<<"\nEnter marks of sub 1     ";
	cin>>sub1;
	cout<<"\nEnter marks of sub 2     ";
	cin>>sub2;
	cout<<"\nEnter marks of sub 3     ";
	cin>>sub3;
	cout<<"\nEnter marks of sub 4     ";
	cin>>sub4;
	cout<<"\nEnter marks of sub 5     ";
	cin>>sub5;
	cout<<"\nEnter marks of sub 6     ";
	cin>>sub6;
	
	cout<<"\nEnter marks of sub 7     ";
	cin>>sub7;
	cout<<"\nEnter marks of sub 8     ";
	cin>>sub8;
	cout<<"\nEnter marks of sub 9     ";
	cin>>sub9;
	cout<<"\nEnter marks of sub 10     ";
	cin>>sub10;
	cout<<"\nEnter marks of sub 11     ";
	cin>>sub11;
	cout<<"\nEnter marks of sub 12     ";
	cin>>sub12;
	
	sum = sub1+sub2+sub3+sub4+sub5+sub6+sub7+sub8+sub9+sub10+sub11+sub12;
	
	cout<<"Your total marks = "<<sum;
	
}