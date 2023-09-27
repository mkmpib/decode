#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int array[] = {1, 4, 7, 45, 3, 11};
    int size = sizeof(array) / sizeof(array[0]);
    int max = INT_MIN;
    int secMax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] != max && array[i] > secMax)
        {
            secMax = array[i];
        }
    }
    cout << "Maximum number is: " << max << endl;
    cout << "Second Maximum number is: " << max << endl;

    cout << "Size of array: " << size << endl;
    return 0;
}