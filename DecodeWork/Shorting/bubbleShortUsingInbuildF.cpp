#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    cout << "Enter the elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    // for asending shorting
    sort(v.begin(), v.end());
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
cout<<endl;

    // for desending sorting

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end()); // complexit o(nlogn)
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}