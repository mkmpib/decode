#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    // Base case
    if (n == 0)

        return;

    else
    {
        cout << n << " ";
        // cout << n;//yahn pe n ki value 5 hi
        print(n - 1);
    }
}
int main()
{
    int n;
    // cout << "Enter the value of n:";
    // cin >> n;
    print(5);
    return 0;
}