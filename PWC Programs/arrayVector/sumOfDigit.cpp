#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    int lastdigit;
    cin >> n;

    int sum = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit;
         n/=10;
        }
    cout << sum;
    return 0;
}