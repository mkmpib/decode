# include <iostream>
using namespace std;
//BASE class
class Employee
{

	 public:
	 	int id;
	 float salary;
	  Employee(int inpid)
	  {
	  	id = inpid;
	  	salary = 34.0;
	  }
	  Employee() {}
};
// DERIVED	Class
//class Programer : Employee ---- visibility memer yahan per by defalut private hai to id cout nhi hogi(baki copy me hai)
class Programer :public  Employee {
  public:	
    Programer(int inpid)
    {
    	id = inpid;
    }
	int LanguageCode = 9 ;
    void getdata()
    { 	
    	cout<<id<<endl;
    }
		};
int main()
{
Employee mohit(1) ,rohit(2);
    cout<<mohit.salary<<endl;
	cout<<rohit.salary<<endl;
Programer skillF(22);
    cout<<skillF. LanguageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();	
	return 0;
}