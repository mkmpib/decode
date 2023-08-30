#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 5};
    int size = 4;
    int min=547674;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}