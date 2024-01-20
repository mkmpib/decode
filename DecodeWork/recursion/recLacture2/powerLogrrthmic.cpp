#include <bits/stdc++.h>
using namespace std;
int powr(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    /*else if // int ans = powr(x, n / 2);
         return ans * ans;
 int ans = powr(x, n / 2);
 dirctly power(x,n) bhi kar skte hai */
    else if (n % 2 == 0)
    {
        return powr(x, n / 2) * powr(x, n / 2);
        }
        else
        {
            return powr(x, n / 2) * powr(x, n / 2) * x;
        }
}
int main()
{
    cout << powr(2, 4);
}