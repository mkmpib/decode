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