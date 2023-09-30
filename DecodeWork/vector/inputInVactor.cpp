#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n; // if we not give size to it then it not taking input from user
    //vector<int> v(5);
    vector<int> v;
    cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }

    // alternate to taking input by user
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}