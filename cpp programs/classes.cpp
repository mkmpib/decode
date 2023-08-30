#include <iostream>
using namespace std;

class Employee
{
	private:
	   int a,b,c;
	 public:
	    int d,e;  
	  void setdata(int a1, int b1, int c1);  //Declearation
	  void getdata(){
	       cout<<"The value of a is: "<<a<<endl;
	       cout<<"The value of b is: "<<b<<endl;
	       cout<<"The value of c is: "<<c<<endl;
	       cout<<"The value of d is: "<<d<<endl;
	       cout<<"The value of e is: "<<e<<endl;  
	      }
	
	};
void Employee :: setdata(int a1, int b1, int c1){
	  a=a1;
	  b=b1;
	  c=c1;
	
	}	


int main(){
	Employee mohit;
	Employee rohit;
	//mohit.a=85;This will be not run because a is private number 
	mohit.d=75;
	mohit.e=85;
	mohit. setdata(25,56,64);
	mohit. getdata();
    rohit. setdata(4,5,6);
	rohit. getdata();
	return 0;
	}