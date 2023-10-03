#include <bits/stdc++.h>
using namespace std;

void change2D(vector<vector<int>> &v) // ab nhi milega
{
    v[1][1] = 109;
}
int main()
{
    // vector<int>v;

    vector<int> v1; // 1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2; // 4 5
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3; // 6 7 8 9 10
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    // cout << v3[4];

    vector<vector<int>> v;
    v.push_back(v1); // v1 vector o push kara rahe hai and same as v2 v3
    v.push_back(v2);
    v.push_back(v3);
    cout << v[1][1] << endl; // 5 ayega// valus array ki trah store ho gyi hai isme
    change2D(v);
    cout << v[1][1] << endl;  // 5 se 09 ho jayega
}