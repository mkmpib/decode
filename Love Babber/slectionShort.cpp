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
void slecShor(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);//iska koi ferk nhi padta che app arr[i] ko liko ya arr[minindex]
    }
}
int main()
{
    int data[4] = {12, 34, 8, 2};

    slecShor(data, 4);
    cout << "The Shorted array is : ";
    printArray(data, 4);
    return 0;
}