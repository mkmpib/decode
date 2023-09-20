#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    int count = 0;  // count ki jaga pe digit or koi variable bhi likh sakte hai
    int a = number; // if n=0 hua to 1 return karne ke liye

    while (number > 0)
    {
        number /= 10;
        count++;
    }
    if (a == 0)
    {
        cout << "The numer of digit is:1 ";
    }
    else
    {
        cout << "The numer of digit is: " << count;
    }
    return 0;
}