// input astring of lenth n and count all vowel in the given string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Mohit kumar is good boy.";
    int count = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
        {
            count++;
            i++;
        }
    }
    cout<<"The number of vowel in astring is: "<<count<<endl;

    return 0;
}