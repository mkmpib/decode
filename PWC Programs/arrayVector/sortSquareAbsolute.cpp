// given an array in non decearsing(1,2,3,4,5)return an array of the square of an array in non decreasing order

// #include <iostream>
#include <bits/stdc++.h> // reverse ko calane ke liye kiya is file ko include
#include <vector>
using namespace std;

void sortSquareArray(vector<int> &v)
{

    vector<int> ans;
    int leftPtr = 0;
    int rightPtr = v.size() - 1;

    while (leftPtr <= rightPtr) // equal to is liye lgya kuyoki ek time pe left and     dono equal ho jayege or loop break ho jayega
    {
        if (abs(v[leftPtr]) < abs(v[rightPtr]))
        {
            ans.push_back(v[rightPtr] * v[rightPtr]);
            rightPtr--;
        }
        else
        {
            ans.push_back(v[leftPtr] * v[leftPtr]);
            leftPtr++;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
    sortSquareArray(m);
    cout << endl;
    return 0;
}