// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[] = {1, 2, 3, 4, 1, 3, 2};
//     int size = sizeof(arr) / sizeof(arr[1]);
//     int unique = 0;

//     for (int i = 0; i < size; i++)
//     {                                                   n2 hai iski space comlaxoty
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 arr[i] = arr[j] = -1;
//             }
//         }
//     }

//     for (int k = 0; k < size; k++)
//     {
//         if (arr[k] > 0)

//         {
//             unique = arr[k];
//         }
//     }
//     cout << "The unique number is: " << unique << endl;

//     return 0;
// }

// sort(a,a+n) iski space comlaxity
// ologn hai

#include <iostream>
using namespace std;
int main()
{

    int a[] = {1, 2, 3, 4, 1, 3, 2};
    int size = sizeof(a) / sizeof(a[1]);
    int unique = 0;
    int i = 0;
    while (i < size)
    {
        if (a[i] == a[i + 1])
        {
            i += 2;
        }
        else
        {
            unique = a[i];
            break;
        }
    }
    cout << "The unique number is: " << unique << endl;

    return 0;
}