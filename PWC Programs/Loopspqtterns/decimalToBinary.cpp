#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int power = 1;
    int ans = 0;
    while (n > 0)
    {
        int paritydigit = n % 2;
        ans += paritydigit * power;
        power *= 10;
        n /= 2;
    }
    cout << ans << endl;
    return 0;
}