#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount:";
    cin >> amount;
    int j = 1;

    switch (j)
    {

    case 1:
        cout << "The number of 100 rupees note is:" << (amount / 100) << endl;
        amount = amount % 100;
    case 2:
        cout << "The number of 50 rupees note is:" << (amount / 50) << endl;
        amount = amount % 50;
    case 3:
        cout << "The number of 20 rupees note is:" << (amount / 20) << endl;
        amount = amount % 20;
    case 4:
        cout << "The number of 10 rupees note is:" << (amount / 10) << endl;
        amount = amount % 10;
    case 5:
        cout << "The number of 1 rupees note is:" << (amount / 1) << endl;
        amount = amount % 1;
    defalt:
        cout << "default";
        break;
    }

    return 0;
}