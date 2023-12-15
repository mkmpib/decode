#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s = "ABXHTINORSTYYZKLPIO";
    string str;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'O')
        {
            str.push_back(s[i]);
        }
    }
    cout << str << endl;
    sort(str.begin(), str.end());
    cout << str << endl;
    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] > str[i + 1])
        {
            swap(str[i], str[i + 1]);
        }
    }
    cout << str;

    return 0;
}
