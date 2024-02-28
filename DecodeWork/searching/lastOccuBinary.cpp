#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {1, 1, 2, 2, 3, 3, 3, 3, 4};
    int target;
    cout << "Enter the target number: ";
    cin >> target;
    int n = 9;
    int lo = 0;
    int hi = n - 1;
    // flag ka use isliye kar rhe hai kyokiye function nhi hai to ye ager target nhi mila to kuch bhi nhi return karega
    bool flag = false; // ans bhi use kar skte h
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target)
        {
            if (nums[mid + 1] != target)
            {
                flag = true;
                cout << mid;
                break;
            }
            else //(nums[mid - 1] == target)
                lo= mid + 1;
        }
        else if (nums[mid] > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    if (flag == false)
        cout << "The target is not Present in the array!";
}
