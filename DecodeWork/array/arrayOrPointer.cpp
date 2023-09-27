#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 33, 44, 55, 66};
    int *ptr = arr;
    // cout << *ptr << endl; // arr ke first element ki value dega
    //  cout << ptr << endl;
    //  cout << &arr << endl;
    //  cout << arr << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //    // cout << arr[i] << "  ";
    //     cout << ptr[i] << "  ";
    // }
    for (int i = 0; i < 5; i++)
    {
        //cout << arr[i] << " ";
        cout << i[arr] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        // cout << arr[i] << "  ";
        cout << *ptr << " ";
        // cout << i[ptr] << " ";
        ptr++;
        // *ptr++;// ptr per cursor karge to ye *ptr hi hai
    }
    ptr = arr; // ptr pointing the first element

    *ptr = 87;
    ptr++;
    *ptr = 91;
    ptr--;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        // cout << arr[i] << "  ";
        cout << *ptr << " ";
        ptr++;
        //*ptr++;// ptr per cursor karge to ye *ptr hi hai
    }
    ptr = arr;
    return 0;
}