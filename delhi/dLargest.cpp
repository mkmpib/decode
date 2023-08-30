
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 4, 5};
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

    cout << second_max << " " << max;
}

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