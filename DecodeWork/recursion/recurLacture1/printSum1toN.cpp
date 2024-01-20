//print sum 1 to n using paramiters

#include <bits/stdc++.h>
using namespace std;
/*
void print(int i, int n,int sum)
{

    // base case
    if (i > n)

        return;
    //kaam
    sum = sum + i;
     cout << sum<<" ";
    //call
    print(i + 1, n,sum);
}
int main()
{
    int sum = 0;
    int n;
    // cout << "Enter the value of n:";
    // cin >> n;
    int i = 1;
    print(i, 3,sum);
    //cout << sum << " ";
    return 0;
}
*/

void sumNUM(int sum, int n)
{

    // base case
    if (n==0){
        cout << sum << " ";
        return;
    }
    // call
    sumNUM(sum + n, n-1);
}
int main()
{// sum and n ki output
    sumNUM(0,3);
    return 0;
}