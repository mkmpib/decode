// given an array if markes of student if the marks of any student is less then 35 then print their rool number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the  number of students : ";
    cin >> n;
    int arr[n];
    //   int arr[]; // esr bhi likh sakte hai
    cout << "Enter the array: ";

    for (int i = 1; i <= n; i++) // here we stRT with 1 because the roll nuber will start with 1 else we take here 0
    {
        cin >> arr[i];
    }
    cout << "Your roll number is : ";
    for (int i = 1; i <= n; i++) // here we stRT with 1 because the roll nuber will start with 1 else we take here 0
    {
        if (arr[i] < 35)

        {
            cout << i << "  ";
        }
    }

    return 0;
}