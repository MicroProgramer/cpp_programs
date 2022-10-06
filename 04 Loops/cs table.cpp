#include <iostream>                                     
#include <conio.h>                                      
#include <iostream.h>                                   
                                                        
                                                        
main()                                                  
{                                                       
	int upperLimit;                         
	                                                       
	cout<<"enter max power ";              
	cin>>upperLimit;                                          
	                                                       
	int power=1;  
	int ans=1;                                    
	while(power<=upperLimit)                                   
	{        
		ans = ans*2;                                              
		cout<<2<<"^"<<power<<"="<<ans;                            
		cout<<'\n';                                           
		                                                      
		power++;                                                  
	}                                                      
	                                                       
	                                                       
	                                                       
	getch();                                               
}                                                       
                                                        
                                                        