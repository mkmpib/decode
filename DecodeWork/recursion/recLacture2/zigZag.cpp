#include <bits/stdc++.h>
using namespace std;
void zigZag(int n)
{
    if (n == 0)
        return ;
    cout  << n << " ";
    zigZag(n - 1);
    cout  << n << " ";
    zigZag(n - 1);
    cout << n << " ";
}
int main()
{
     zigZag(2);
    cout << endl;
}