#include <iostream>
using namespace std;
int main()
{

    // int array[] = {1, 4, 7, 45, 3, 11};
    // int size = sizeof(array) / sizeof(array[0]);
   // int size = 5;
   int size;
   cout<<"Enter the size: ";
   cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the array: ";
        cin >> array[i];
    }
    int key; // flag bhi use kar skte hai or use false ki value de skte hai
    cout << "Enter the key: ";
    cin >> key;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
        {
            ans = i;
        }
    }
    cout << "The index whare is key is: " << ans << endl;
    cout << size << endl;
    return 0;
}