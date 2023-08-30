#include <iostream>
using namespace std;

class Number
{
   	int a;
  public:
       Number()
       {
        a=0;	
       }
       Number(int num)
       {
       	a = num;
       } 
       
       Number(Number &obj)
       {
         cout<<"copy constructor called !!!"<<endl;
         a=obj.a;	
       }	
   	void display()
   	{
   	  cout<<"The number of the object is :-- "<<a<<endl;	
   	}	
};
int main()
{
	Number n,m,o=46,o2;
	n.display();
	m.display();
	o.display();
	
	Number o1(n);  //Copy Constructor is invoked
	o1.display();
	
	 o2 = o;           //Copy Constuctor is not called because it is predeclear
	 
	 Number o3 = o;  //Copy Constructor is invoke
	 o3.display();
	return 0;
}