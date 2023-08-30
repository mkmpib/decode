#include <iostream>
using namespace std;
void vote()
{
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are egible for voating " << endl;
        ;
    }
    else
    {
        cout << "You are not egible for vote " << endl;
    }
}

int main()
{
    vote();

    return 0;
}