#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {-4, -2, 8, 9, 15, 18, 27, 31};
    int target = 15;
    int n = 8;
    int lo = 0;
    int hi = n - 1;
    bool flage = false;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target)
        {
            cout << nums[mid + 1];
            flage = true;
            break;
        }
        else if (nums[mid] > target)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    if (flage == false)
        cout << "Upper bound is:" << nums[lo];
}
