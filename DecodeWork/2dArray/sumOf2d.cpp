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
    int sum = 0;
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
            sum += arr[i][j];
        }
    }
    cout << "The sum of 2d array is: " << sum << endl;
    return 0;
}