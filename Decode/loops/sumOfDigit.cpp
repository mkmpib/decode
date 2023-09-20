#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    int sum = 0;
    while (number > 0)
    {
        int reminder = number % 10; // lastdigit also we can write here
        sum += reminder;            // last + sum

        number /= 10;
    }
    cout << "The sum of digit is: " << sum;
    return 0;
}