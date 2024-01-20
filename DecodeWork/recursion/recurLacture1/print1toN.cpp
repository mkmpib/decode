#include <bits/stdc++.h>
using namespace std;
/*
//call then print
void print(int n)
{
    // Base case
    if (n == 0)

        return;

    else
    {
        // without extra paramiter
        // print(n - 1);
        // cout << n << " ";
    }
}*/
void print(int i,int n){
//base case
if(i>n)
    return;
cout << i << " ";
print(i + 1, n);
}
int main()
{
    int n;
     cout << "Enter the value of n:";
     cin >> n;
     int i = 1;
     print( i, n);
     return 0;
}