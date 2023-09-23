#include <iostream>
using namespace std;
int mini(int a, int b)
{
    int c;
    if (a < b)
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
    cout << mini(45, 3);
    cout << endl;
    cout << min(5, 7); // minimum number find kar ke dega ye
    cout << endl;
    cout << max(45, 3);
    cout << endl;

    return 0;
}