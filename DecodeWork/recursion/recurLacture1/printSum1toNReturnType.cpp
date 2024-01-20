// print the sum of 1 to n  number without use parameteres
#include <bits/stdc++.h>
using namespace std;
int printSum(int n){
   
    if(n==0){
        return 0 ;
    }else{
        return n + printSum(n -1);
    }
}
int main()
{
    int n;
     cout << "Enter the value of n:";
     cin >> n;
     cout << printSum(n);
     // cout << sum << " ";
     return 0;
}