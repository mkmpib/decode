
// sum of array of by given cordinate(l1 r1) by calucate prifix matrix aferte it calcukate sum of prifix raw

#include <bits/stdc++.h>
#include <vector>
using namespace std;
void ractanguHorizonSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{

    // prifixSum of array row wisw
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix.size(); j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }
    // printing prifixSum array
    cout << "The prifixSum of array:" << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    // Sum betwwen given cordinate by row
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        if (r1 != 0)
        {
            sum += matrix[i][r2] - matrix[i][r1 - 1];
        }
        else
        {
            // matrix[i][r1-1]=0
            sum += matrix[i][r2];
        }
    }
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
    ractanguHorizonSum(matrix, l1, r1, l2, r2);
    // cout << ans << endl;

    return 0;
}