#include<bits/stdc++.h>
using namespace std;
void good(int n){
     if (n==0)
         return;
    else
    cout << "Good Morning "<<endl;
    good(n-1);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    good(n);
    return 0;
}