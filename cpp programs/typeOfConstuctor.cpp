#include <iostream>
using namespace std;

class Complex
{
    int a,b;
  public:
     Complex(int ,int);
     void print()
     {
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;	
     	}  		
};
/*Complex :: Complex(void) //Default constructor:- it accept no parameters(arguments)
{
	a=5;
	b=25;
	
	}*/

Complex :: Complex(int x,int y) //Parameterized constructor:- it accept 2 parameters(arguments)
{
	a=x;
	b=y;
}
int main()
{ 
// Implicit call:--
   Complex  a(2,4);
   a.print();

// Explicit call:--
   Complex b=Complex (3,5);
   b.print();  
   
	return 0;
}

//Example2:----
/*
#include <iostream>
using namespace std;

class Point
{
 int x,y;
 public:
    Point(int a,int b)
    {
        x=a;
        y=b;	
    }
	void displayPoint()
	{
	    cout<<"The point is ("<<x<<","<<y<<")"<<endl;	
	}
	
};
int main()
{
	Point a(4,5);
	a.displayPoint();
	
	Point b(6,8);
	b.displayPoint();
	return 0;
}*/