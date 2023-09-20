#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the number of lines that you want in your pascal triandle: ";
cin>>n;

for(int i=0;i<=n;i++){
    int current=1;
    for(int j=0;j<=i;j++){
        cout<<current<<" ";
        current=current*(i-j)/(j+1);
    }cout<<endl;
}
    return 0;

}