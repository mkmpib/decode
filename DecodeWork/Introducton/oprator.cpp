#include<iostream>
using namespace std;
int main(){
 int p=false;
 int q=false;
 int r=true;
 cout<<(p==q==r); // p(false)==q(false)=1,1==r(true)=1(true )output
 // condition cheak karne ke liye( ) ke liye use kaete hai
// sabse phle p ==q ko cheak karege fir jo value p and q ki hogi usko r se compare karege 
// output 1 ayegi 
    return 0;
}