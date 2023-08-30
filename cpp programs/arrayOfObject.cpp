/*#include <iostream>
using namespace std;

class Employee 
{
   int id;
   int salary;
public:
   void setdata(void){
   	salary=25000;
   	cout<<"Enter the id "<<endl;
   	cin>>id;
  
   	}	
   void getdata(void){
   	cout<<"The id of employee is: "<<id <<endl;
   	cout<<"The salary of employee is: "<<salary<<endl<<endl;
   	}	
};


int main()
{
/*Employee mohit,rohit,kunaal,ritik;
	mohit.setdata();
	mohit.getdata();*/

/*Employee fb[10];
 for(int i=0; i<10; i++)
 {
 	fb[i].setdata();
 	fb[i].getdata();
 }
	return 0;
}*/




#include <iostream>
using namespace std;

class complex
{
	int a;
	int b;
public:
     void setdata(int v1, int v2)
     {
     	a=v1;
     	b=v2;
     }	
     void setdatabysum(complex  k1,complex k2)
     {
     	a=k1.a +k2.a;
     	b=k1.b +k2.b;
     	}
	void print(void)
	{
		cout<<"The complex number is "<<a<< "+"<<b<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2,c3;
	c1. setdata(4,6);
	c1. print();
	
	c2. setdata(3,2);
	c2. print();
	
	c3. setdatabysum(c1,c2);
	c3. print();
	
	return 0;
}