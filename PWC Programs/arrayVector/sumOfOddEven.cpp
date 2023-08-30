#include <iostream>
using namespace std;
int oddSum()
{
    int a;
    int b;
    cout << "Enter the starting number : ";
    cin >> a;
    cout << "Enter the ending number : ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {

        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;

    cout << endl;
}
int evenSum()
{
    int a;
    int b;
    cout << "Enter the starting number : ";
    cin >> a;
    cout << "Enter the ending number : ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {

        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << sum;

    cout << endl;
}
int main()
{

    oddSum();
    evenSum();
    return 0;
}