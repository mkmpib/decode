#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    int ascii = (int)ch;
    if (ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122)
    {
        cout << "Character is alphabet";
    }else{
       cout << "Character is not alphabet"; 
    }

    return 0;
}