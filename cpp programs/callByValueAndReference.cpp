#include <iostream>
using namespace std;
// Call by Value:----

void swap(int a,int b){ //Not Output
    int temp=a;
    a=b;
    b=temp;
} 
// Call by Pointer:----
void swapPointer(int*a,int*b){
    int temp=*a;
      *a=*b;
      *b=temp;
}
// Call by Referance variable:---
void swapReferencevar(int&a,int&b){
    int temp=a;
      a=b;
      b=temp;
}
int main(){
    int x=4, y=6;
    cout<<"The value of x is:"<<x<<" The value of y is: "<<y<<endl;
    //swap(x,y);it not works
    //swapPointer(&x,&y);it work
    swapReferencevar(x,y);
    cout<<"The value of x is:"<<x<<" The value of y is: "<<y<<endl;
    return 0;
}