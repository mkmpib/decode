#include <iostream>
using namespace std;
int main(){
	/*Loops in c++:
	  We have three types of loops in c++:
	  1). For loop
	  2). While
	  3). Do-While loop 
	For loop:----                      
	Syntax:
	for(initalization; condition; updation)
	{
		cout<<c++ code or statement:
	}                      Example:*---
	Print 1-50 numbers:--                                                */
	
/*	for(int i=1;i<=50 ;i++)
	{
		cout<<i<<endl;
		} */

/*		
  While loop:-
  syntax:
    while(condition)
    {
    	cout<<c++ code or statement;
    	}
   example:---                     */					
	/*	
int k=1;
while(k<30)
{
		cout<<k<<endl;
		k++;
		}		*/
/*		
Do While loop in c++:
 syntax:---
 do
 {
 	c++ statement; 	
 	}while(condition);  
 	
Example of Do While loop in C++:
Print 1-30 numbers */

 int j=1;
 do
 {
 	cout<<j<<endl;
 	j++;
 	}while(j<=30);					 					
		
		
	return 0;
	}