#include <iostream>
using namespace std;
int main()
{

    // int array[] = {1, 4, 7, 45, 3, 11};
    // int size = sizeof(array) / sizeof(array[0]);
    // int size = 5;
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int array[size];
    cout << "Enter the array: ";
    for (int i = 1; i <= size; i++)
    {
       
        cin >> array[i];
    }
   int ans=0;
    for (int i = 1; i <= size; i++)
    {
        if ( array[i]==i)
        {
            cout<< i;
        }
    }
    
    return 0;
}