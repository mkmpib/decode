#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int size =5;
int sum=0;
for(int i=0;i<size;i++){
sum=sum+arr[i];
}
cout<<sum;
    return 0;
}