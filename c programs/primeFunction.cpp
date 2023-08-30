#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    cout << "enter a number: ";
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) == true)
            cout << i << " is prime\n";
        else
            cout << i << " is not prime\n";
    }
    return 0;
}