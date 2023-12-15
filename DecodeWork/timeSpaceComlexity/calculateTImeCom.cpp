#include<iostream>
using namespace std;
int main(){

int c=0;
int n=10;
for(int i=1;i<n;i+=i){
    c++;
    cout<<c<<endl;
}

    return 0;
}