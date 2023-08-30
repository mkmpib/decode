#include <iostream>
using namespace std;
int main() {

int a=3;
int*b=&a;
// &(mpercent operator)--->(address of) operator
     cout<<"The address of a is: "<<&a<<endl;		
     cout<<"The address of a is: "<<b<<endl;
// *(Dereferance operator)--->(value at)
      cout<<"The value of a is: "<<*b<<endl;
      *b=4;
      cout<<"The value of a is: "<<*b<<endl;	
	return 0;
	}
	// Pointer to pointer bhi karna hai baad me