//given markrs of student if markes are greater then 33 pass or fail
//ternary 
#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter the marks: ";
cin>>marks;
(marks>33)?cout<<"Pass":cout<<"Fail";
cout<<endl;
    return 0;
}