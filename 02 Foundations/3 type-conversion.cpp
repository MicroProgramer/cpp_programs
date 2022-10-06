#include <iostream.h>
#include <conio.h>

main()
{
	bool b;		
	short sh;	
	unsigned short ush;		
	int i;	
	unsigned int ui;
	float f;		
	double d;	
	char ch;
	int ascii;
	
	ch = 't';	i = ch;		cout<<i<<endl;	
	i=68;		ch=i;		cout<<ch<<endl;
	i=56456;	f=i;		cout<<f<<endl;
	f=4.99;		i=f;		cout<<i<<endl;
	i=32770;	sh=i;		cout<<sh<<endl;
	i=32770;	ush=i;		cout<<ush<<endl;
	i=65540;	ush=i;		cout<<ush<<endl;
	i=-90;		ui=i;		cout<<ui<<endl;
	d=65540.56;	f=d;		cout<<f<<endl;
	i=21;		b=i;		cout<<b<<endl;
	
	
	
	f=4.99;		i=(int)f;		cout<<i<<endl; //better
	
	i=15;
	f=15;
	cout<<endl;
	cout<<15/4<<endl;   //3
	cout<<15.0/4<<endl;
	cout<<f/4<<endl;
	cout<<i/4<<endl;
	cout<<(float)i/4<<endl;
	
getch();

}
  