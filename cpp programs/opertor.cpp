#include <iostream>
using namespace std;
int main() {
	//Opearators in C++:-----
	int a=4,b=6;
	cout<<"Airthmethic Operators:-----\n";
	cout<<"The value of a+b is: "<<a+b<<endl;
	cout<<"The value of a-b is: "<<a-b<<endl;
	cout<<"The value of a*b is: "<<a*b<<endl;
	cout<<"The value of a/b is: "<<a/b<<endl;
	cout<<"The value of a%b is: "<<a%b<<endl;
	cout<<"The value of a++ is: "<<a++<<endl;
	cout<<"The value of a-- is: "<<a--<<endl;
	cout<<"The value of ++a is: "<<++a<<endl;
	cout<<"The value of --a is: "<<--a<<endl;
	cout<<endl;
	
	//Comperison Operators:--
	cout<<"Following are the comperison operators:---"<<endl;
	cout<<"The value of a==b is: "<<(a==b)<<endl;
	cout<<"The value of a!=b is: "<<(a!=b)<<endl;
	cout<<"The value of a<=b is: "<<(a<=b)<<endl;
	cout<<"The value of a=>b is: "<<(a>=b)<<endl;
	cout<<"The value of a>b is: "<<(a>b)<<endl;
	cout<<"The value of a<b is: "<<(a<b)<<endl;
	cout<<endl;
	
	//Logical operators:----
	cout<<"The value of logical and operator ((a==b)&(a<b)) is:  "<<((a==b)&(a<b))<<endl; 
	cout<<"The value of logical and operator ((a==b)|(a<b)) is: "<<((a==b)|(a<b))<<endl;
	cout<<"The value of logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;
	return 0;
	}