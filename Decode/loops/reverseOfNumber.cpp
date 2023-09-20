#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    int reverse = 0;// zero likhna padta hai ager koi value store karni
    while (number > 0)
    {
        int reminder = number % 10;        // lastdigit also we can write here
        reverse = reverse * 10 + reminder; // last + sum

        number /= 10;
    }
    cout << "The sum of digit is: " << reverse;
    return 0;
}