#include <iostream>
using namespace std;

int getMin(int num[], int size)
{
    int min = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int getMax(int num[], int size)
{
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cout << "Enter the size of Array:" << endl;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum value is:" << getMax(arr, n) << endl;
    cout << "Minimum value is:" << getMin(arr, n) << endl;
    return 0;
}