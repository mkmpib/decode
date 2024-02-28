#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 3, 2, 1};
    int n = 9;
  
    int idx = -1; // storing the peak index of array

    int lo = 1;
    int hi = n - 2;
    // flag ka use isliye kar rhe hai kyokiye function nhi hai to ye ager target nhi mila to kuch bhi nhi return karega
    bool flag = false; // ans bhi use kar skte h
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
            cout << mid;
        flag = true;
        break;}
        else if (arr[mid] > arr[mid + 1])
            hi = mid - 1;
        else lo = mid + 1;
    }

    if (flag == false)
        cout << "The peak index is not Present in the array!";
}
