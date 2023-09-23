#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;

    cout << "address of a: " << &a << endl;
    cout << "Address of a: " << p << endl; // kyoki p me a ka address store hai
    cout << "Address of p: " << &p << endl;
    cout << "valur of a: " << a << endl;
    cout << " valur of p: " << *p << endl;   /// *==dereference oprator
    *p=45;
    cout << " valur of p: " << *p << endl;   /// *==dereference oprator
    return 0;
}