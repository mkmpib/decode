// given a boolyean 2D array,where each row is sorted.Find the row with maximum number of 1

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maximumOnesRow(vector<vector<int>> &k)
{

    int maxOnces = INT16_MIN;
    int coulmns = k[0].size();
    int max1rowCount = -1;
    for (int i = 0; i < k.size(); i++)
    {
        for (int j = 0; j < k[i].size(); j++)
        {
            if (k[i][j] == 1)
            {
                int numOfOnce = coulmns - j;
                if (numOfOnce > maxOnces)
                {
                    maxOnces = numOfOnce;
                    max1rowCount = i;
                }
                break;
            }
        }
    }
    return max1rowCount;
}

int main()
{
    int n;
    cout << "Enter the row number: ";
    cin >> n;
    int m;
    cout << "Enter the coulmn number: ";
    cin >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
        int res = maximumOnesRow(v);
        cout <<"The row that has maximun number is: "<< res << endl;
    

    return 0;
}