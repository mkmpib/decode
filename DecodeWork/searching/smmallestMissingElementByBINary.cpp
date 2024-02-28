#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {0, 1, 2, 3, 4, 5, 7, 8, 9};
    int target;

    int n = 9;
    int lo = 0;
    int hi = n - 1;
    // flag ka use isliye kar rhe hai kyokiye function nhi hai to ye ager target nhi mila to kuch bhi nhi return karega
    bool flag = false; // ans bhi use kar skte h
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == mid)
        {
            lo = mid + 1;
        }
        else{
                cout << mid;
                flag = true;
                hi = mid - 1;
                break;
            }
        // else if (nums[mid] > mid)
        //     hi = mid - 1;
        // else
        //     lo = mid + 1;
    }
    if (flag == false)
        cout << "The target is not Present in the array!";
}
