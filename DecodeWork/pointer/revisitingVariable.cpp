#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(bool) << endl;

    // printing address of a variable
    int a = 4;
    int b; // withour value givem
    cout << "address is a: " << &a << endl;
    cout << "address is b: " << &b << endl;
    return 0;
}