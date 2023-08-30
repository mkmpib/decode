
// cheak that the  prifix sum is equal to suffix sum by divided aray into to parts

// 6 1 2 3 4
// ts=16
// ps=6   //7  //9  //12  //16
// ss=10  //9  //12 //4   //0

#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool prifixAndSuffixSum(vector<int> v)
{
    int totalSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        totalSum += v[i];
    }
    int prifixSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prifixSum += v[i];
        int sufixSum = totalSum - prifixSum;
        if (prifixSum == sufixSum)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size;
    cout << " Enter the size:";
    cin >> size;

    vector<int> m;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        m.push_back(ele);
    }
    cout << "The output is: " << prifixAndSuffixSum(m);
    cout << endl;
    return 0;
}