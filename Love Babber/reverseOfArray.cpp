#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    // int n = size - 3;
    while (start <= n - 3)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int num[6] = {1, 4, 6, 8, 9, 3};
    int data[5] = {54, 46, 38, 29, 31};

    reverse(num, 6);
    reverse(data, 5);

    printArray(num, 6);
    printArray(data, 5);

    return 0;
}