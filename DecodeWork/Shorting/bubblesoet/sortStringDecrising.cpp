//sort a string in decreading opder of values associatied aftr the removel of values smaller then x

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s = "ABXHTINORSTYYZKLPIO";
    string str;
    cout <<"The default sring is: "<< s << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'P')
        {
            str.push_back(s[i]);
        }
    }
    cout << "The string is: "<<str << endl;
    sort(str.begin(), str.end());
    cout << "SOrted string is: "<<str << endl;
    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] > str[i + 1])
        {
            swap(str[i], str[i + 1]);
        }
    }
    cout<<"values after inputing variable  is: " << str;

    return 0;
}
