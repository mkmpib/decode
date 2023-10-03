#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row1;
    cout << "Enter the row1 of 1st matrix: ";
    cin >> row1;
    int coulmn1;
    cout << "Enter the coumln1 of 1st matrix: ";
    cin >> coulmn1;

    int row2;
    cout << "Enter the row2 of 2st matrix: ";
    cin >> row2;
    int coulmn2;
    cout << "Enter the coulmn2 of 2st matrix: ";
    cin >> coulmn2;
    if (coulmn1 == row2)
    {
        cout << "Enter the  1st matrix:" << endl;
        int arr1[row1][coulmn1];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < coulmn1; j++)
            {
                cin >> arr1[i][j];
            }
        }

        if (coulmn1 != row2)
        {
            cout << "Not multiplication possible" << endl;
        }
        cout << "Enter the  2st matrix:" << endl;
        int arr2[row1][coulmn1];
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < coulmn2; j++)
            {
                cin >> arr2[i][j];
            }
        }
        // result matrix
        int arr3[row1][coulmn2];
        for (int i = 0; i < row1; i++) // first ki row tk clega
        {
            for (int j = 0; j < coulmn2; j++) // first ke coulmn tk clega
            {
                arr3[i][j] = 0;

                for (int k = 0; k < row2 /*coulm1*/; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
                // arr3[i][j] = value;
            }
        }
        // print
        cout << "The multiplication og matrix is:" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < coulmn2; j++)
            {
                cout << arr3[i][j] << " ";
            }
            cout << endl;
        }
    }
    else // coulmn1!=row2
    {
        cout << "The matrix can not be multiplied." << endl;
    }

    return 0;
}