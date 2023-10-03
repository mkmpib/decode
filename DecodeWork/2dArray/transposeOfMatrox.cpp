//wap to transepose of a matrix and styore in it anther matrix

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout << "Enter the row: ";
    cin >> row;
    int coulmn;
    cout << "Enter the coulmn: ";
    cin >> coulmn;

    int arr[row][coulmn];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            cin >> arr[i][j];
        }
    }
    // store the element
    int transpose[coulmn][row];
    for (int i = 0; i < coulmn; i++)
    {
        for (int j = 0; j < row; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < coulmn; i++)  // column ko phle kr rhe hai print
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}

// without storing in another matrix
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int row;
//     cout << "Enter the row: ";
//     cin >> row;
//     int coulmn;
//     cout << "Enter the coulmn: ";
//     cin >> coulmn;

//     int arr[row][coulmn];
//     cout << "Enter the matrix: " << endl;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < coulmn; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "The transepose of matrix is: " << endl;
//     for (int j = 0; j < coulmn; j++) // column ko phle kr rhe hai print
//     {
//         for (int i = 0; i < row; i++)
//         {
//             cout << arr[i][j] << "  ";
//         }
//         cout << endl;
//     }
//     return 0;
// }