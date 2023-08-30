// #include <iostream>
// using namespace std;
// int largerNumIndex(int array[], int size)
// {
//     int max = INT32_MIN;
//     int maxIndex = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] > max)
//         {
//             max = array[i];
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 7, 9, 11};
//     int indexOfLargest = largerNumIndex(arr, 6);
//     cout << "The largest number is: " << arr[largerNumIndex(arr, 6)] << endl;

//     arr[indexOfLargest] = -1;
//     int indexOfSecondLargest = largerNumIndex(arr, 6);
//     cout << "The second largest number is: " << arr[indexOfSecondLargest] << endl;

//     return 0;
// }

// Dusra tarika hai

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {2, 3, 1, 4, 5};
//     int max = -1;
//     int second_max = -1;

//     for (int i = 0; i < 5; i++)
//     {

//         if (arr[i] > max)
//         {
//             second_max = max;
//             max = arr[i];
//         }
//         else if (arr[i] < max && arr[i] > second_max)
//         {
//             second_max = arr[i];
//         }
//     }

//     cout << second_max << " " << max;

// }

// tisra or sbse easy tarika

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 5, 1, 4, 5};
    int max = INT32_MIN;
    int second_max = INT32_MIN;

    for (int i = 0; i < 5; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }

    cout << "The second largest number is: " << second_max << endl;
    cout << "The largest number is: " << max << endl;
}