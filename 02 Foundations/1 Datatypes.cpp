#include <iostream.h>
#include <conio.h>

main()
{
	bool b;
	
	b=0; 	cout<<"b="<<b<<endl;
	b=1; 	cout<<"b="<<b<<endl;
	b=true; cout<<"b="<<b<<endl;
	b=2;	cout<<"b="<<b<<endl;
	b=3;	cout<<"b="<<b<<endl;
	b=313;	cout<<"b="<<b<<endl;
	cout<<endl<<endl;
	
	unsigned short ush;
	cout<<"Size of unsigned short = "<<sizeof(ush)<<endl;
	ush=0; 	cout<<"ush="<<ush<<endl;
	ush=230; 	cout<<"ush="<<ush<<endl;
	ush=35768; cout<<"ush="<<ush<<endl;
	ush=65535;	cout<<"ush="<<ush<<endl;
	ush=65536;	cout<<"ush="<<ush<<endl;
	ush=65600;	cout<<"ush="<<ush<<endl;
	ush=-5;	cout<<"ush="<<ush<<endl;
	ush=-2;	cout<<"ush="<<ush<<endl;
	
	cout<<endl<<endl;
	
	short sh;
	cout<<"Size of short = "<<sizeof(sh)<<endl;
	sh=0; 	cout<<"sh="<<sh<<endl;
	sh=5000; cout<<"sh="<<sh<<endl;
	sh=-2300;	cout<<"sh="<<sh<<endl;
	sh=+32767;	cout<<"sh="<<sh<<endl;
	sh=-32768;	cout<<"sh="<<sh<<endl;
	sh=+32768;	cout<<"sh="<<sh<<endl;
	sh=+32770;	cout<<"sh="<<sh<<endl;
	sh=-32770;	cout<<"sh="<<sh<<endl;
	
	cout<<endl<<endl;
	

	unsigned int ui;
	cout<<"Size of unsigned int = "<<sizeof(ui)<<endl;
	ui=65536; 	cout<<"ui="<<ui<<endl;
	ui=12345678;	cout<<"ui="<<ui<<endl;
	ui=-1;	cout<<"ui="<<ui<<endl;
	ui=-12345678;	cout<<"ui="<<ui<<endl;
	cout<<endl<<endl;
	
	
	int i;
	cout<<"Size of int = "<<sizeof(i)<<endl;
	i=65536; 	cout<<"i="<<i<<endl;
	i=65536.123; 	cout<<"i="<<i<<endl;
	i=12345678; cout<<"i="<<i<<endl;
	i=12345678;	cout<<"i="<<i<<endl;
	i=-12345678;	cout<<"i="<<i<<endl;
	i=-12345678;	cout<<"i="<<i<<endl;
	
	cout<<endl<<endl;
	
	
	
	
	
	
	
	
	float f;
	cout<<"Size of float = "<<sizeof(f)<<endl;
	f=65536; 	cout<<"f="<<f<<endl;
	f=3.5656; cout<<"f="<<f<<endl;
	f=12345345; cout<<"f="<<f<<endl;
	f=12345378; cout<<"f="<<f<<endl;
	f=12345678; cout<<"f="<<f<<endl;
	f=12345318; cout<<"f="<<f<<endl;
	f=123455.5;	cout<<"f="<<f<<endl; 
	f=123458.5;	cout<<"f="<<f<<endl; 
	f=35345.234234234;	cout<<"f="<<f<<endl;
	f=-0.100023456; cout<<"f="<<f<<endl;
	f=-12313123.234234;	cout<<"f="<<f<<endl;
	cout<<endl<<endl;	
	
	double d;
	cout<<"Size of double = "<<sizeof(d)<<endl;
	d=65536; 	cout<<"d="<<d<<endl;
	d=12345678; cout<<"d="<<d<<endl;
	d=12345678;	cout<<"d="<<d<<endl;
	d=-12345678; cout<<"d="<<d<<endl;
	d=-12345678;	cout<<"d="<<d<<endl;
	d=3.5656; cout<<"d="<<d<<endl;
	d=3534534535.234234234;	cout<<"d="<<d<<endl;
	d=-0.0000000023; cout<<"d="<<d<<endl;
	d=-1231312334543535345.345345345345234234;	cout<<"d="<<d<<endl;
	cout<<endl<<endl;

	
	char ch;
	int ascii;
	cout<<"Size of char = "<<sizeof(ch)<<endl;
	ch='b'; ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;
	ch='+'; ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;
	ch='R';	ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;
	ch='3'; ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;
	ch=3; ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;
	ch=65;	ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;
	ch=100; ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;
	ch=121;	ascii=ch;	cout<<"ch="<<ch<<"="<<ascii<<endl;


	
	
	
	
	cout<<endl<<endl;
getch();
cout<<endl<<endl;
}
  