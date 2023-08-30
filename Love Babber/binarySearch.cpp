#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    // ye assan or bydefault vala hai int mid = (start + end) / 2;

    // ager maan lo start-end karke esi value aa gyi jo int ki range se bhare hai to ye use karna hai
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
         mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int even[6] = {1, 2, 4, 6, 8, 10};
    int odd[5] = {1, 3, 4, 6, 7};

    int indexEven = binarySearch(even, 6, 2);
    int oddIndex = binarySearch(odd, 5, 1);

    cout << "The Index of 2 is: " << indexEven << endl;
    cout << "The Index of 1 is: " << oddIndex << endl;

    return 0;
}