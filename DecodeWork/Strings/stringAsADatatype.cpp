#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char str[5] = {'a', 'm', 'l', 'n', 'p'};
    string str = "MOHIT KUMAR"; // 12 size ka hai 1 isme null bhi h
    cout << str << endl;
    cout << str[0] << endl;
    // input of string
    // string m;
    // cout << "Enter the string:";
    // cin >> m; // cin works only if there are no spaces  // ager string me mohit kumar print karna hai to nhi hoga kyoki space se cin tut jata hai
    // cout << m << endl;

    // getline key
    string n;
    cout << "Enter the string2:";
    getline(cin, n); // ab space likh skte ha sb kuj aa jayega

    cout << n << endl;

    return 0;
}