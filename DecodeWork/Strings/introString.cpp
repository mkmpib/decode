#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[5] = {'a', 'm', 'l', 'n', 'p'};
    // char str[5] = "sdfg"; // clega per 4 character hi print hoge
    //  for (int i = 0; i < 5; i++)
    //  {
    //      cout << str[i] << " ";
    //  }
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    cout << "using only str: " << str << endl; // is se bhi dircly str ki value print ho jayegi
    char ch = '\0';
    cout << ch << endl; // kuch bhi nhi ayega
    cout << (int)ch << endl;

    char tr[10] = {'a', 'm', '\0', 'n', 'p'}; // only  am  hi print hoga kyoki \0  ye use kiya h

    for (int i = 0; tr[i] != '\0'; i++)
    {
        cout << tr[i] << " ";
    }
    cout << endl;
    return 0;
}