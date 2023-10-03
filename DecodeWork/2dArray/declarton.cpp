// WAP a program to reverse an array without using another array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaration
    int arra[3][3];  
    // intilization        
    int arr[3][3]={{1,2,4},{4,5,6},{4,9,3}};             // must give size to array at the time of declation
    cout << arr[0][1] << endl; // gives garbage value
    arr[0][1] = 56;
    cout << arr[0][1] << endl;

    return 0;
}