#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        // Recusive case
        return n * fact(n - 1);
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
   cout<< fact(n);
}