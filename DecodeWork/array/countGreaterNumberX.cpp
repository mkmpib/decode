//count the number that are greater then x


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    //   int arr[]; // esr bhi likh sakte hai
    cout << "Enter the element of array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>x){
            count++;
        }
       
    }

      cout << "the number that are greater then X is : "<<count<<endl;
    return 0;
}