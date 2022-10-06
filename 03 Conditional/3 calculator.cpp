#include <iostream.h>
#include <conio.h>

main()
{
	int n1,n2;
	char op;
	
	cout<<"Enter number 1:";
	cin>>n1;//6
	cout<<"Enter number 2:";
	cin>>n2;//9
	cout<<"Enter operator:";
	cin>>op;//+
	
	
	if(op=='+')
	{
		cout<<n1<<"+"<<n2<<"="<<n1+n2;
	}
	else if(op=='-')
	{
		cout<<n1<<"-"<<n2<<"="<<n1-n2;
	}
	else if(op=='*')
	{
		cout<<n1<<"*"<<n2<<"="<<n1*n2;
	}
	else if(op=='/')
	{
		cout<<n1<<"/"<<n2<<"="<<n1/n2;
	}
	else if(op=='%')
	{
		cout<<n1<<"%"<<n2<<"="<<n1%n2;
	}
	else 
	{
		cout<<"invalid operator";
	}
}
