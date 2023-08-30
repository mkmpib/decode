#include <iostream>
using namespace std;
int main() {
	int age;
	cout<<"Tell me your age: "<<endl;
	cin>>age;
/*        	if(age<18) {
	 cout<<"You are not enter in my party"<<endl; }
	 else if(age==18){
	 	cout<<"You are kid you will get kid pass"<<endl;}
	 else if(age>50){
	 	cout<<"You are old person you not enter in party"<<endl;}	
	 else{
	 	cout<<"Enter in the party Your welcome:"<<endl;}*/
	 switch(age) {
	 	case 18:
	 	cout<<"You are 18 year old"<<endl;
	 	break; 
	 	case 22:
	 	cout<<"You are 22 year old"<<endl;
	 	break; 	 	
		 case 2:
	 	cout<<"You are 2 year old"<<endl;
	 	break;
	 	default:
	 		cout<<"No special cases ";
	 		break;
	 }
	 
	 return 0;
	 	}