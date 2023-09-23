#include <iostream>
using namespace std;

void find(int n, int *ptr1, int *ptr2)
{
    *ptr2 = n % 10; // lastdigit
    while (n > 9)
    {
        n /= 10;
    }
    *ptr1 = n;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int lastdigit, firstdigit;
    int *ptr1 = &firstdigit;
    int *ptr2 = &lastdigit;
    find(n, ptr1, ptr2);
    cout << firstdigit << "  " << lastdigit;
    return 0;
}