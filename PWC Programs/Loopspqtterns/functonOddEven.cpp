#include <iostream>
using namespace std;
int odd()
{
    int a;
    int b;
    cout << "Enter the starting number : ";
    cin >> a;
    cout << "Enter the ending number : ";
    cin >> b;
    int sum=0;
    for (int i = a; i <= b; i++)
    {

        if (i % 2 != 0)
        {
           cout << i << " ";
               
        }
    }
    

    cout << endl;
}
int even()
{
    int a;
    int b;
    cout << "Enter the starting number : ";
    cin >> a;
    cout << "Enter the ending number : ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {

        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}
int main()
{

    odd();
    even();
    return 0;
}