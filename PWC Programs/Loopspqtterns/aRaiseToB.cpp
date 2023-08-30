#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number: " << endl;
    cin >> a;
    cout << "Enter the power:" << endl;
    cin >> b;
    int product = 1;
    for (int i = 1; i <= b; i++)
    {
        product *= a;
    }
    cout << "The " << a << " power " << b << " is: " << product;
    return 0;
}
