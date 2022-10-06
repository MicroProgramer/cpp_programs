#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int i=5, j=11;	
	
	
	
	cout<<i+1;
	
	i=i+1;
	i++;
	cout<<i;
	
	
	cout<<i-1;
	
	i=i-1;
	i--;
	cout<<i;
	
	
	cout<<"\n\n";
	i++;
	++i;
	
	i--;
	--i;
	
  cout<<i++;
  cout<<++i;
  
  j=i++;
  cout<<i<<' '<<j;

	cout<<"\n\n";
	
	
	cout<<"1.\t"<<i<<"\t"<<j<<endl;
	
	i++; //6
	j--;	//10
	cout<<"2.\t"<<i<<"\t"<<j<<endl;// 6 10
	cout<<"3.\t"<<++i<<"\t"<<j++<<endl;//7 11
	cout<<"4.\t"<<i<<"\t"<<j<<endl;// 7 11
	
	getch();
}

