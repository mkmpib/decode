#include <bits/stdc++.h>
using namespace std;
void fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        cout << f << endl;
    }
   
}
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    fact(n);
    return 0;
}