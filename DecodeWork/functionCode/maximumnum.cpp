#include <iostream>
#include <cmath>
using namespace std;
int max(int a, int b)
{
    int c;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    return c;
}

int main()
{
    cout << max(45, 3);
    cout << endl;
    cout << sqrt(9);
}