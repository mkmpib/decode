#include <iostream>
using namespace std;
//typedef struct  emplloyee karke hum emoloyee ko em bhi likh sakte hai
struct employee 
{
	int  eID;
	char  favchar;
	float salary;
	
	} ;//em;
	
union student
{
	int eID;
	char grade;
	float per;
};		
	
int main(){

cout<<"The Example of Stucture is:----"<<endl;
	struct employee mohit;
	struct employee rohit;
	struct employee kamal;
        mohit.eID=07;
		mohit. favchar='b';
		mohit. salary=150000;
	
	cout<<"The value is: "<<mohit.eID<<endl;
	cout<<"The value is: "<<mohit.favchar<<endl;
	cout<<"The value is: "<<mohit.salary<<endl<<endl;
	
cout<<"The Example of Union is:----"<<endl;	
	union student rahul,akshay,rohan;
	 rahul.eID=56;
	 akshay.grade='a';
	 rohan.per=75.5;
 cout<<"The eID is:- "<<rahul.eID<<endl;
 cout<<"The grade is:- "<<akshay.grade<<endl;
 cout<<"The per is:- "<<rohan.per<<endl<<endl;
 
 cout<<"The Example of enum is:----"<<endl;
 enum{red=4,black,blue};//ager red ki value na bare to ye 0 se sequence wise calta rahega
 cout<<red<<endl;
 cout<<black<<endl;
 
	return 0;
	}