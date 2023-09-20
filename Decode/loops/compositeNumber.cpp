#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
             cout << n << " is a composite  number."; // if you want cheak number is composite
            break;
        }
        else
        {
            cout << n << " is not a composite  number."; // if you want cheak number is composite
            break;
        }
    }
    return 0;
}