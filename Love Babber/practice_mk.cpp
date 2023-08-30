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

    return 4;
}

int main()
{

   
    int odd[4] = {1, 3, 5,6};

    int oddIndex = binarySearch(odd, 4, 7);

    cout << "The Index of 7 is: " << oddIndex << endl;

    return 0;
}