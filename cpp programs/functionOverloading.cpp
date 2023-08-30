#include <iostream>
using namespace std;

int sum(int a,int b){
	cout<<"using function with 2 arguments "<<endl;
	return (a+b);
}
int sum(int a,int b,int c){
	cout<<"using function with 3 arguments "<<endl;
	return (a+b+c);
}
// Calculate the volume of cylinder:---
int volume(double r,int h){
	return (3.14*r*r*h);
	}
	
// Calculate the volume of cube:---
int volume(int a){
	return (a*a*a);
	}
	
// Calculate the volume of rectangular:---
int volume(int l,int b,int h){
	return (l*b*h);
	}		
int main(){
	cout<<"The sum of 3 and 4 is:"<<sum(3,4)<<endl;
	cout<<"The sum of 3,6 and 4 is:"<<sum(3,6,4)<<endl;
	cout<<"The volume of cylinder is:-"<<volume(5,6)<<endl;
	cout<<"The volume of cube is:-"<<volume(6)<<endl;
	cout<<"The volume of ractangular surface is:-"<<volume(5,7,6)<<endl;
	return 0;
}