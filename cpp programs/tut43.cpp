#include <iostream>
using namespace std;

class Base1
{
	public: 
	   void greet()
	   {
	   	cout<<"How are you?"<<endl;
	   }
	
};
	
class Base2
{
	public: 
	   void greet()
	   {
	   	cout<<"Kase ho?"<<endl;
	   }
};

class Derive : public Base1 , public Base2{
      int a;	
  public:
      void greet(){
      	 Base1 ::  greet();
      	 }	
};		
int main() 
{
	Base1 obj;
	obj.greet();
	
	Base2 obj2;
	obj2.greet();
	
	Derive k;
	k.greet();
	return 0;
}