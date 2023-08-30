#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)//this for loop is use to rounds(rounds = size -1)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)//this for loop is to swapping the elements
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // already sorted;
            break;
        }
    }
}


int main()
{
    // int data[9] = {1,2,3,4,5,6,7,8,9};
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int a[size];
    cout << "Enter the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    bubbleSort(a, size);
    cout << "The result of bubble sort is: ";
    printArray(a, size);
    cout << endl;
    return 0;
}