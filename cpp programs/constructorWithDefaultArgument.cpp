#include <iostream>
using namespace std;

class Simple
{
     int data;
     int data1;
     int data2;
   public:
      Simple(int a,int b=6,int c=8)
      {
           data = a;
           data1 = b;
           data2 = c;	
      }  
      void print()
      {
        cout<<"The value of data,data1 and data2 is: "<<data<<","<<data1<<","<<data2<<endl;	
      }	
	
	
};
int main()
{
	Simple n (1);//In default constructor it takes valuue by default
	n.print();
	
	
	return 0;
}