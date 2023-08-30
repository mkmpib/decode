#include <iostream>
using namespace std;

class Complex
{
    int a,b;
  public:
  //  creating a constructor 
  // constuctor is the special member function with the same name as the class
     Complex(void);//construvtor declaration
     void print()
     {
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;	
     	}  		
};
Complex :: Complex(void)
{
	a=5;
	b=25;
	
	}

int main()
{ 
   Complex n,m;
   n.print();
   m.print();
   
	return 0;
}