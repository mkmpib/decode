
//print given ap series

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to point you  want ap series:";
    cin >> n;
    // for (int i = 4; i <= n; i += 3)
    // {
    //     cout << i << " ";
    // }
    int i = 4;
    while (i <= n)
    {
        cout << i << " ";
        i += 3;
    }
    return 0;
}