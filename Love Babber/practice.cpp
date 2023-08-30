#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    cout << "The array is:" << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl
         << "Printing of array is done" << endl;
}
int main()
{
    int data[] = {1, 5, 3, 6, 2, 6, 8};
    printArray(data, 7);
    int ram[9] = {4};
    printArray(ram, 7);
    return 0;
}