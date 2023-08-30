#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the Number: " << endl;
    cin >> n;
    // here pw is power of two, initially it will be 20 = 1
    int power = 1; // 2
    int ans = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans += lastdigit * power;
        power *= 2;
        n /= 10;
    }
    cout << ans << endl;
    return 0;
}
