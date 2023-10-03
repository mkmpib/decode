#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 4; // because we only want rollnumber an marks

    int coulmn;
    cout << "Enter the  number students: ";
    cin >> coulmn;

    int arr[row][coulmn];
    cout << "Enter the first roll number then maarks: ";
    for (int i = 0; i < row; i++) // i for row
    {
        for (int j = 0; j < coulmn; j++) // j foer coulmn
        {
            cin >> arr[i][j];
        }
        // cout << endl;
    }
    cout << "The table is: " << endl;
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