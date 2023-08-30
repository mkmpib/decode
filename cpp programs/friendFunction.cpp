#include <iostream>
using namespace std;

class complex
{
  int a,b;
  public:
   void setdata(int t1,int t2)
   {
   	a=t1;
   	b=t2;
	}  
	friend complex sumcomplex(complex k1,complex k2);	
	void print()
	{
		cout<<"Your number is "<<a<<" is "<<b<<"i"<<endl;
	}
};

complex sumcomplex(complex k1,complex k2)
{
	complex l1;
	l1.setdata((k1.a+k2.a),(k2.b+k2.b));
	return l1;
	}
int main()
{
	complex c1,c2,sum;
	c1.setdata(2,4);
	c1.print();

	c2.setdata(8,6);
	c2.print();
	
	sum=sumcomplex(c1,c2);
	sum.print();	
	return 0;
}
