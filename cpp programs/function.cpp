#include <iostream>
using namespace std;

/*Function prototype:-----
syntax:----
type function name(argument)
int sum(int a,int b):--- aceptable prototype
int sum(int a,b):----disacptable prototype*/
int sum(int ,int );             //:---aceptable

void g();

int main(){
	int num1,num2;
	cout<<"Enter the number1:-- "<<endl;
	cin>>num1;
	cout<<"Enter the number2:-- "<<endl;
	cin>>num2;
	// num1 and num2 is Actual Parameters
	cout<<"The sum is:-- "<<sum(num1,num2)<<endl;
	
	void g()
	{

	cout<<"Hare krishna";
	}
	
		return 0;
	}
	
	int sum(int a,int b)
	//here a,b is Normal Parameters
{
	int c=a+b;
	return c;
}
