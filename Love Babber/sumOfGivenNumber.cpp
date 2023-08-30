#include<iostream>
using namespace std;

int add(int n){

if(n==1){
    return 1;
}
return n+add(n-1);

}

int main(){

int p;
cout<<"Enter the number:";
cin>>p;
int sum=add(p);

cout<<sum<<endl;

    return 0;
}