#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    int lo = 0;
    int hi = x;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        long long m = (long long)mid;
        long long y = (long long)x;
        if ((m * m) == y)
            return mid;
        else if (m * m > y)
            hi = mid - 1;
        else
            lo = mid + 1;
    }

    cout<< hi;
}