
// sum of array of by given cordinate(l1 r1) by calucate prifix matrix aferte it calcukate sum of prifix raw and coulmn

#include <bits/stdc++.h>
#include <vector>
using namespace std;
void ractanguVerticalSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{

    // prifixSum of array row wisw
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix.size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }
    // prifixSum of array coulmn wisw
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            matrix[i][j] += matrix[i - 1][j];
        }
    }
    // printing prifix sum 2d array
    cout << "The prifixSum of array:" << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }

    int sum = 0;
    int topSum = 0, leftSum = 0, topLeftSum = 0;
    if (l1 != 0)
    {
        topSum = matrix[l1 - 1][r2];
    }
    if (r1 != 0)
    {
        leftSum = matrix[l2][r1 - 1];
    }
    if (l1 != 0 && r1 != 0)
    {
        topLeftSum = matrix[l1 - 1][r1 - 1];
    }
    sum = matrix[l2][r2] - topSum - leftSum + topLeftSum;

    cout << "The sum of coordinate is : ";
    cout << sum << endl;
}
int main()
{

    int n, m;

    cout << "Enter the size of raw: ";

    cin >> n;
    cout << "Enter the size of coulmn: ";
    cin >> m;
    vector<vector<int>> matrix(n, vector<int>(m)); // vector ko n m ke bad hi intilize karna hai

    // inputing of an array
    cout << "Enter the element of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // output of an array
    cout << "The element of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    int l1, r1, l2, r2;
    cout << "Enter the l1 and r1: ";
    cin >> l1 >> r1;
    cout << "Enter the l2 and r2: ";
    cin >> l2 >> r2;
    ractanguVerticalSum(matrix, l1, r1, l2, r2);
    // cout << ans << endl;

    return 0;
}