#include <iostream>
using namespace std;

int main()
{
	int n;
//int *ptr=&n;
	
	cout<<"enter the number:"<<endl;
	cin>>n;
//	cout<<"The address of n is"<<&n<<endl;
	//cout<<"The value of n:"<<*ptr;
	
	
	cout<<"The address of n is"<<*&n<<endl;
		cout<<"The value of n:"<<*(&n);
	
 //cout<<*(&n)<<endl;
 	
 	return 0;
}