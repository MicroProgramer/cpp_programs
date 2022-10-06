#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void showInfo()
{
	cout<<"Kindly  Take  a  number  from  this  table  and  find  its  digits  sum";
	cout<<" and     subtrect  digits  sum  from  this  number";
	cout<<" and  by  carefully  see  the resultentnumber  with  its  figure."<<endl;
	cout<<"Example is given:"<<endl;
	cout<<"Take 1030  and its digits sum is 1+0+3+0=4."<<endl;
	cout<<"We will subtract digits sum  from this number"<<endl;
	cout<<"1030-4=1026."<<endl;
	cout<<"Resultent=1026"<<endl;
	cout<<endl;
	cout<<"Table is given below:"<<endl;
	cout<<endl;
}

char getRandomCharacter()
{
	char m=rand()%256;
	while(m>=0&&m<123 || m>254)
	{
		m=rand()%256;
	}
	
	return m;
}

main()
{
while(true)
{
	showInfo();
	
	int i;
	char fix_rand, variable_rand;	
	//   randomize();	
	fix_rand = getRandomCharacter();
	for(i=1001;i<=2000;i++)
 	{
		variable_rand=getRandomCharacter();
		
		if(i%9==0)
		{
		 	cout<<i<<" "<<fix_rand<<"\t";
		}
		else
		{
		 	cout<<i<<" "<<variable_rand<<"\t";
		}
    }
    
	cout<<endl;
	cout<<"\nPress any key to read your mind";
	getch();
	cout<<"\nYou thought about\t"<<fix_rand;
	getch();
	cout<<endl<<endl;
}

}