#include <iostream>
using namespace std;

class Employee
{
  private:	
	int id;
	static int count;	
	
  public:
    void setdata(void)
     {
    	cout<<"Enter the id:"<<endl;
    	cin>>id;
    	count++;
     }	
	void getdata(void) 
	{
		cout<<"The id of this employee is:"<< id <<" and this employee number is:"<<count<<endl;
	}
     static void getcount(void)
	{
		cout<<"the value of count is:"<<count<<endl;
		}
};
int Employee :: count=1000;  // default value of count is 0
int main(){
	Employee mohit,rohit,rohan;
	mohit.setdata();
	mohit.getdata();
	Employee :: getcount();
	
	rohit.setdata();
	rohit.getdata();
	Employee :: getcount();
	
	rohan.setdata();
	rohan.getdata();
	Employee :: getcount();
	
	return 0;
	}