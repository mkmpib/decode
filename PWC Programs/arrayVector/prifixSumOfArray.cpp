// given an integer array retur prifix sum in sme array without criating a new array



#include <bits/stdc++.h> // reverse ko calane ke liye kiya is file ko include
#include <vector>
using namespace std;

void runningSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

int main()
{
    int size; // n=size
    cout << "Enter the size: ";
    cin >> size;
    vector<int> m;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        m.push_back(ele);
        // cin >> m[i];
    }
    runningSum(m);
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    return 0;
}