#include <iostream>
using namespace std;
int main()
{

    int array[] = {1, 4, 7, 45, 3, 11};
    int size = sizeof(array) / sizeof(array[0]);
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max << endl;
    cout << size << endl;
    return 0;
}