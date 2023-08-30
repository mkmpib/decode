#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int i = 1;
    while (i <= 4)
    {
        cout << i;
        sum += i;
        i++;
    }
    cout << i << endl;
    cout << "The sum of the number is: " << sum;
    return 0;
}