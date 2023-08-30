/*
For Protected Member:-----

                                      private derivation         public derivation           protected derivation
1. private member:       Not Inheritance             Not Inheritance            Not Inheritance   
2. public member:        private                          public                            protected
3. protected member: private                           protected                     protected


*/

 #include <iostream>
 using namespace std;
 
 class Base
 {
 	protected:
 	  int id;

 };
 
 class Derive : public Base
 {
   public:
       void setdata(int a)
       {
          id = a;	
       }
       
       void display()
       {
          cout<<"The protected number is: "<<id<<endl;	
       }	
 	
 };
 int main()
 {
   Derive ram;
     ram.setdata(32);
     ram.display();	
 	
 	
 	return 0;
 }







/*
//Code with harry
#include <iostream>
using namespace std;

class Base
{
  protected:  
    int a;
  private:
    int b;  		
};

class Derived : Base// che here we use public private and protected a will not work
{
	
};
int main ()
{
 Base  b;
 Derived d;
//  cout<<d.a;	It will not work since a is protected both base as well as derived
	return 0;
	}
	
*/	