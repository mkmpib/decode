// Public Visibility Mode-----
# include <iostream>
using namespace std;

class Base
{
   int data1;
  public:
   int data2;
   void  setdata(void)
   {
	data1 = 10;
	data2 = 20;
   } 
   int getdata1()
    {
	return data1;
    }
   int getdata2()
    {
	return data2;
    } 			
};
 
class Derived : public Base
{
	int data3;
  public:
    void process()
    {
    	data3 = data2 * getdata1();
    }
    
    void display()
    {
    cout<<"The value of data1 is: "<<getdata1()<<endl;
    cout<<"The value of data2 is: "<<data2<<endl;
    cout <<"The value of data3 is: "<<data3<<endl;	
    }	
	
};   
int main()
{
  Derived der;
   der.setdata();
   der.process();
   der.display();	
	
	return 0;
}

/* if we i write Private visibility mode 
# include <iostream>
using namespace std;

class Base
{
   int data1;
  public:
   int data2;
   void  setdata(void)
   {
	data1 = 10;
	data2 = 20;
   } 
   int getdata1()
    {
	return data1;
    }
   int getdata2()
    {
	return data2;
    } 			
};
 
class Derived : private Base
{
	int data3;
  public:
    void process()
    {
    	setdata();
    	data3 = data2 * getdata1();
    }
    
    void display()
    {
    cout<<"The value of data1 is: "<<getdata1()<<endl;
    cout<<"The value of data2 is: "<<data2<<endl;
    cout <<"The value of data3 is: "<<data3<<endl;	
    }	
	
};   
int main()
{
  Derived der;
  // der.setdata();
   der.process();
   der.display();	
	
	return 0;
}

*/