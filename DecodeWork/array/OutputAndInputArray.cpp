#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array number: ";
    cin >> n;
    int arr[n];
    //   int arr[]; // esr bhi likh sakte hai
    cout << "Enter the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}