// // print a matrix in wave form
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int row;
//     cout << "Enter the row number: ";
//     cin >> row;
//     int coulmn;
//     cout << "Enter the coulmn number: ";
//     cin >> coulmn;

//     int arr[row][coulmn];
//     cout << "Enter the element of array: " << endl;
//     for (int i = 0; i < row; i++) // i for row
//     {
//         for (int j = 0; j < coulmn; j++) // j foer coulmn
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // wave print
//     cout << "The 2d  wave array: " << endl;
//     for (int i = 0; i < row; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < coulmn; j++)
//             {
//                 cout << arr[i][j] << "  ";
//             }
//         }
//         else // i=1,3,5
//         {
//             for (int j = coulmn - 1; j >= 0; j--)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// print a matrix in wave form form end of row
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int row;
//     cout << "Enter the row number: ";
//     cin >> row;
//     int coulmn;
//     cout << "Enter the coulmn number: ";
//     cin >> coulmn;

//     int arr[row][coulmn];
//     cout << "Enter the element of array: " << endl;
//     for (int i = 0; i < row; i++) // i for row
//     {
//         for (int j = 0; j < coulmn; j++) // j foer coulmn
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // wave print
//     cout << "The 2d  wave array: " << endl;
//     for (int i = row-1; i >=0; i--)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < coulmn; j++)
//             {
//                 cout << arr[i][j] << "  ";
//             }
//         }
//         else // i=1,3,5
//         {
//             for (int j = coulmn - 1; j >= 0; j--)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// print a matrix in wave form coulmn wise printing
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout << "Enter the row number: ";
    cin >> row;
    int coulmn;
    cout << "Enter the coulmn number: ";
    cin >> coulmn;

    int arr[row][coulmn];
    cout << "Enter the element of array: " << endl;
    for (int i = 0; i < row; i++) // i for row
    {
        for (int j = 0; j < coulmn; j++) // j foer coulmn
        {
            cin >> arr[i][j];
        }
    }
    // wave print coulmn wise
    cout << "The 2d  wave array coulmn wise is : " << endl;
    for (int j = 0; j < coulmn; j++)   // j constant rahega or i change hofga
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " "; 
            }
        }
        else // i=1,3,5
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}