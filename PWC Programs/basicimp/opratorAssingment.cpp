#include <iostream>
using namespace std;
int main()
{
    //cheak that A is equal to B
    int x, y;
    cout << "Enter the first number ";
    cin >> x;
    cout << "Enter the second number ";
    cin >> y;
    cout << (x == y) ? 1 : 0;
    return 0;
}