#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value: " << endl;
    int a, b;
    cin >> a;
    cout << "Enter the value:" << endl;
    cin >> b;
    //Assignment operator -->>>
    cout << "The sum of a and b is : " << (a += b)<<endl;
    cout << "The subtrack of a and b is : " << (a -= b)<<endl;
    cout << "The divide of a and b is : " << (a /= b)<<endl;
    cout << "The multiply of a and b is : " << (a *= b)<<endl;
    cout << "The modulus of a and b is : " << (a %= b)<<endl;
    return 0;
}