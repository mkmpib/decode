#include <iostream>
#include<iomanip>
using namespace std;
int main() {
  int a=44;
  cout<<"The value of a was: "<<a<<endl;
  a=55;
  cout<<"The value of a is: "<<a<<endl;
  cout<<endl<<endl<<endl;	
	
	
	/*********** Constant in c++********/
	
	const int x=44;
	cout<<"The value of x was: "<<x<<endl;
//	x=55;
	cout<<"The value of x is: "<<x<<endl;
	cout<<endl<<endl<<endl;
	
	int o=5,p=495,r=3974;
	cout<<"The value of o is without setw : "<<o<<endl;
	cout<<"The value of p is without setw : "<<p<<endl;
	cout<<"The value of r is without setw : "<<r<<endl;
	cout<<endl<<endl<<endl;
	
	cout<<"The value of o is with setw : "<<setw(4) <<o<<endl;
	cout<<"The value of p is with setw : "<<setw(4)<<p<<endl;
	cout<<"The value of r is with setw : "<<setw(4)<<r<<endl;
	cout<<endl<<endl<<endl;
	  
	  
	  
	  /************* Operator precedence******/
	  /* see on crome**/
	return 0;
	}