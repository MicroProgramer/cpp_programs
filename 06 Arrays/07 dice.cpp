#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	while(true)
	{
			
		int scours=0, limit, dice;
		int count[6];
		
		cout<<"Enter Count ";
		cin>>limit;
		
		for(int i=0; i<6; i++)
		{
			count[i]=0;
		}
		
		
		cout<<"Dice:\t";
		for(int i=1; i<= limit; i++)
		{
			dice = (rand() % 6) + 1;
			
			count[dice-1]++;	//count[5]++;
						
			cout<<dice<<"\t";
			scours = scours + dice;
		}
		
		cout<<"\nScours = "<<scours<<"\n\n";
		
		for(int i=0; i<6; i++)
		{
			cout<<i+1<<" occures "<<count[i]<<" times"<<endl;
		}
		
	}
}