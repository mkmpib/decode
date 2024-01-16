#include <bits/stdc++.h>
#include <climits> // for using the INT_MAX
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 6};
    int n = 6;
    cout << "The unsorted array is: ";
    for (int ele : arr) /// for printing full array wirthout any condition
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << "The Sorted array is: ";
    //Slection sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minIdx = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIdx = j;          // index of j
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    return 0;
}