#include <bits/stdc++.h>
using namespace std;
int main()
{ abhi hua va ni ye
    int row;
    cout << "Enter the row number: ";
    cin >> row;
    int coulmn;
    cout << "Enter the coulmn number: ";
    cin >> coulmn;

    int arr[row][coulmn];
    cout << "Enter the element of array: ";
    for (int i = 0; i < row; i++)  // i for row
    {
        for (int j = 0; j < coulmn; j++)  // j foer coulmn
        {
            cin >> arr[i][j];
        }
    }
     cout << "The 2d array: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coulmn; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}