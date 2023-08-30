#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    int count = 0; // count ki jaga pe digit or koi variable bhi likh sakte hai
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    cout << "The numer of digit is: " << count ;
    return 0;
}