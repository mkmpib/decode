/*  Syntax Of Multiple inharitance:----
 Father--fater--son
  
 class Derive : {Visibility Mode}{Base1 class},{Visibility Mode }{Base2 class}
*/

#include <iostream>
using namespace std;

class Base1
{
  protected:
    int number1;
  public:
     void set_number1(int a){
     	number1 = a;
     }  		
};

class Base2
{
  protected:
    int number2;
  public:
     void set_number2(int a){
     	number2 = a;
     }  		
};
class Derive : public Base1, public Base2
{
   public:
      void show(){
      	cout<<"The value of number1 is: "<<number1<<endl;
      	cout<<"The value of number2 is: "<<number2<<endl;
      	cout<<"The sum these value are: "<<number1 +number2<<endl;
      	}	
	
};
int main()
{
	Derive gaurav;
	 gaurav.set_number1(34);
	 gaurav.set_number2(24);
	 gaurav.show();
	return 0;
}