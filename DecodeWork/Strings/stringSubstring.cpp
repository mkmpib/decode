// input astring of  even lenth and return 1st half of it

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "MohitKumar";
    // for substring s.substring(index)

    // index  or uske age ke sbhi character print honge
    cout << "THe full string is:" << s << endl;
    cout << "The sub string is:" << s.substr(2) << endl;
    cout << "THe full string is:" << s << endl;
    cout << "The sub string is:" << s.substr(3) << endl;
    cout << "THe full string is:" << s << endl;
    cout << "The sub string is:" << s.substr(4) << endl;

    cout << endl
         << endl;
    // print second half of a string using substr
    string sk;
    cout << "enter the string: ";
    cin >> sk;
    int n = sk.length();
    cout << " THe second half of a string is: " << sk.substr(n / 2) << endl;
    return 0;
}