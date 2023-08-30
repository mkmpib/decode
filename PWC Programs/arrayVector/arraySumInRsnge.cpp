#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n + 1, 0); // intilize value ko 0 kar rahe hai kuyki hme l and r ke sum ko bhi include karna hai range of sum me

    for (int i = 1; i <= n; i++)
    {
        // int ele;

        cin >> v[i];
        // v.push_back(ele);
    }

    // calculate prefix sum
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }
    int quary;
    cout << "Enter the number of quary: ";
    cin >> quary;

    int sumOfRange = 0; // ans we use hare sum in range
    while (quary--)
    {
        int l, r;
        cout << "Enter l as a strating point: ";
        cin >> l;
        cout << "Enter r as a ending point:";
        cin >> r;
        // ans=prifixsum of array[r]-prifixsum of array[l-1]
        sumOfRange = v[r] - v[l - 1];
        cout << sumOfRange << endl;
    }
    return 0;
}