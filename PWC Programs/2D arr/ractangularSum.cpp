
// given a metrix of dimension nxm and 2 coordinate(l1,r1) and (l2,r2)Return sum of the racangular form(l1,r1)to(l2,r2)
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int ractangularSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum = sum + matrix[i][j];
        }
    }
    return sum;
}
int main()
{
    int n, m;
    cout << "Enter the row size: ";
    cin >> n;
    cout << "Enter the coulmn size: ";
    cin >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    int l1, l2, r1, r2;
    cout << "Enter the value of coordinate l1 and r1: ";
    cin >> l1 >> r1;
    cout << "Enter the value of coordinate l2 and r2: ";
    cin >> l2 >> r2;
    cout << endl;
    cout << " The ractangular sum is: ";
    int ans = ractangularSum(matrix, l1, r1, l2, r2);
    cout << ans << endl;

    return 0;
}