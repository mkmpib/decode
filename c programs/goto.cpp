#include <iostream>
using namespace std;
int main()
{
    int i = 1;
a:
    cout << "1hello";
b:
    cout << "2hello";
c:
    cout << "3hello\n";

    if (i < 5)
    {
        i++;
        goto a;
    }
}