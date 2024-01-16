#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[] = {2,2,1,3,1,2};
    int n = 6;
    cout << "The unsorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The Sorted array is: ";
    //INsertion sort
    for (int i = 1; i < n; i++)// 0 se bhi cla skte h i ko
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
        // while (j >= 1)
        // {
        //     if (arr[j] > arr[j - 1])
        //         break;
        //     if (arr[j] < arr[j - 1])
        //     {
        //         swap(arr[j], arr[j - 1]);
        //         j--;
        //     }
        // }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
   
    return 0;
}