// write a program to roted array
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rotetedArray(vector<vector<int>> &vec)
{

    // transpose of matrix
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // j ko i ke = kiya jise dignal ke baad vale element na print ho
            swap(vec[i][j], vec[j][i]);
        }
    }

    // revese of array

    for (int i = 0; i < n; i++)
    {
        // i ka hi loop lagega kuyoki row ko hi revse karna hai
        reverse(vec[i].begin(), vec[i].end());
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    rotetedArray(vec);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}