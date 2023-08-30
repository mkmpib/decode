// Find the total number of pairs in the array whose sum is equal to the given value of x
// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[] = {3, 4, 5, 6, 7, 2};
//     int size = 6;
//     int sumNum;
//     cout << "Enter the number thai you wNT FIND Pair: ";
//     cin >> sumNum;
//     int count = 0;
//     for (int i = 0; i <= size; i++)
//     {
//         for (int j = i + 1; j <= size; j++)
//         {
//             if (arr[i] + arr[j] == sumNum)
//             {
//                 count++;
//             }
//         }
//     }
//     cout << "The total number of pair of number " << sumNum << " is: " << count << endl;
//     return 0;
// }

// Number of triple pair ex- 1+2+3=6,4+2+0=6
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {3, 4, 5, 6, 7, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sumNum;
    cout << "Enter the number thai you wNT FIND Pair: ";
    cin >> sumNum;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)

            {
                if (arr[i] + arr[j] + arr[k] == sumNum)
                {
                    count++;
                }
            }
        }
    }
    cout << "The total number of pair of number " << sumNum << " is: " << count << endl;
    return 0;
}
