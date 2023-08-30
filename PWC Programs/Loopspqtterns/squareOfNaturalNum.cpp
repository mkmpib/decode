#include <iostream>
using namespace std;
// with paremeter and without return value
void natural(int size)
{

    int square;
    for (int i = 1; i <= size; i++)
    {
        square = i * i;
        cout << square;
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "The square of natural number is : " << endl;
    natural(n);

    return 0;
}