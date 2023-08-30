#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {

            return 1;
        }
    }
    return 0;
}

int main()
{

    int number[7] = {1, 34, -45, 6, 8, -2, 5};
    int key;
    cout << "Enter the element for search:" << endl;
    cin >> key;
    bool found = search(number, 7, key);
    if (found)
    {
        cout << "key is Present";
    }
    else
    {
        cout << "key is not present";
    }

    return 0;
}