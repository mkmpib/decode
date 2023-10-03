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
    int max = INT_MIN;
    int scmax = max;
    int arr[row][coulmn];
    cout << "Enter the element of array: ";
    for (int i = 0; i < row; i++) // i for row
    {
        for (int j = 0; j < coulmn; j++) // j foer coulmn
        {
            cin >> arr[i][j];
        }
    }
    cout << "The 2d array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "The maximum number in matrix is:" << max << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            if (arr[i][j] > scmax && arr[i][j] != max)
            {
                scmax = arr[i][j];
            }
        }
    }
    cout << "The second maximum number in matrix is:" << scmax << endl;
    return 0;
}