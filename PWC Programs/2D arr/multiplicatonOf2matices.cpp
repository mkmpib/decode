#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the row of 1st matrix:" << endl;
    int row1;
    cout << "Enter the row1: ";
    cin >> row1;
    int coulmn1;
    cout << "Enter the coulmn1: ";
    cin >> coulmn1;

    int arr1[row1][coulmn1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coulmn1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the row of 1st matrix:" << endl;
    int row2;
    cout << "Enter the row2: ";
    cin >> row2;
    int coulmn2;
    cout << "Enter the coulmn2: ";
    cin >> coulmn2;

    int arr2[row1][coulmn1];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < coulmn2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    if (coulmn1 != row2)
    {
        cout << "Not multiplication possible" << endl;
    }
    int arr3[row1][coulmn2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coulmn2; j++)
        {
            int value = 0;

            for (int k = 0; k < row2 /*coulm1*/; k++)
            {
                value += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = value;
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coulmn2; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}