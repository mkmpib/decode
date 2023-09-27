// given an array if markes of student if the marks of any student is less then 35 then print their rool number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the  size of array : ";
    cin >> n;
    int arr[n];
    //   int arr[]; // esr bhi likh sakte hai
    cout << "Enter the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;

    for (int i = 0; i < n; i++)

    {
        sum = sum + arr[i];
    }
    cout << "the sum of array is : " << sum << endl;

    return 0;
}