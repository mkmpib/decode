#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            mid = key;
            end = mid - 1;
        }
        else if (arr[mid] < key)
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
int data[6]={1,2,3,3,3,4};
cout<<"The first occ of 3 is: "<<firstocc(data,6,3)<<endl;
    return 0;
}